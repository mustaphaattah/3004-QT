#include "medwindow.h"
#include "ui_medwindow.h"
#include "mainwindow.h"

#include <QTimer>

QTimer *batteryUpdateTimer = new QTimer();
QTimer *medModeTimer = new QTimer();

int intensity;

QTime currentTime;
MedWindow::MedWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::MedWindow)
{

    currentTime = QTime().currentTime();
    ui->setupUi(this);
    ui->batteryStatus->setValue(batteryLevel);
    ui->upButton->setEnabled(false);
    ui->downButton->setEnabled(false);
    ui->skinElectrode->setChecked(false);
    ui->medTimer->setTime(currentTime);
    intensity = 0;
    ui->intensityIndicator->setFontWeight(30);
    ui->intensityIndicator->setText(QString::number(intensity));
    ui->intensityIndicator->setFontWeight(30);
    ui->intensityIndicator->setReadOnly(true);

    connect(batteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    batteryUpdateTimer->start(2500);
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
    currentTime = currentTime.addSecs(60);
    ui->medTimer->setTime(currentTime);

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
    } else {
    ui->intensityIndicator->setText(QString::number(0));
    }
}
