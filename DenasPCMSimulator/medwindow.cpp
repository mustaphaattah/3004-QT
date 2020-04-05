#include "medwindow.h"
#include "ui_medwindow.h"
#include "mainwindow.h"
#include <iostream>

#include <QTimer>

QTimer *medBatteryUpdateTimer = new QTimer();
QTimer *medModeTimer = new QTimer();
QTimer *medClockTimer = new QTimer();

int intensity;

QTime medTreatmentTime (0,10,0);
QTime medCurrentTimeNow;

MedWindow::MedWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::MedWindow)
{

    medCurrentTimeNow = QTime().currentTime();
    ui->setupUi(this);
    connect(medClockTimer,SIGNAL(timeout()),this,SLOT(medUpdateClock()));
    medClockTimer->start(1000);
    ui->currentTime->setTime(medCurrentTimeNow);
    ui->batteryStatus->setValue(batteryLevel);
    ui->upButton->setEnabled(false);
    ui->downButton->setEnabled(false);
    ui->skinElectrode->setChecked(false);
    ui->selectButton->setText("Back");
    ui->medTimer->setTime(medTreatmentTime);
    intensity = 0;
    ui->intensityIndicator->setFontWeight(30);
    ui->intensityIndicator->setText(QString::number(intensity));
    ui->intensityIndicator->setFontWeight(30);
    ui->intensityIndicator->setReadOnly(true);

    connect(medBatteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    medBatteryUpdateTimer->start(2500);
    connect(medModeTimer,SIGNAL(timeout()),this,SLOT(updateMedTimer()));

}

MedWindow::~MedWindow()
{
    delete ui;
}

//Power Button Clicked
void MedWindow::on_powerButton_clicked()
{
    exit(0);
}

void MedWindow::on_skinElectrode_clicked()
{
    if (medModeTimer->isActive()) {
        medModeTimer->stop();
    } else {
        medModeTimer->start(1000);
    }
}

void MedWindow::updateMedTimer() {
    medTreatmentTime = medTreatmentTime.addSecs(-1);
    ui->medTimer->setTime(medTreatmentTime);

}

void MedWindow::fetchBatteryLife() {
    ui->batteryStatus->setValue(batteryLevel);
}

void MedWindow::on_rightButton_clicked()
{
    intensity += 1;
    ui->intensityIndicator->setText(QString::number(intensity));
}

void MedWindow::on_leftButton_clicked()
{
    intensity -= 1;

    if (intensity >= 0) {
        ui->intensityIndicator->setText(QString::number(intensity));
        intensity = 0;
    } else {
    ui->intensityIndicator->setText(QString::number(0));
    }
}



void MedWindow::on_selectButton_clicked()
{
    medModeTimer->stop();
    this->close();
}

void MedWindow::medUpdateClock()
{
    medCurrentTimeNow = medCurrentTimeNow.addSecs(1);
    ui->currentTime->setTime(medCurrentTimeNow);
}
