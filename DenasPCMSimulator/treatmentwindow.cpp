#include "treatmentwindow.h"
#include "ui_treatmentwindow.h"
#include "mainwindow.h"

#include <QTimer>
#include <iostream>
QTimer *TreatmentBatteryUpdateTimer = new QTimer();
QTimer *TreatmentModeTimer = new QTimer();

int treatmentIntensity;
int seconds;
int secTreatment = 59;
int min;
int minTreatment = 9;
QTimer *timer = new QTimer;

TreatmentWindow::TreatmentWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::TreatmentWindow)
{
    connect(timer,SIGNAL(timeout()),this,SLOT(treatmentManager()));
    timer->start(1000);
    ui->setupUi(this);
    ui->batteryStatus->setValue(batteryLevel);
    ui->upButton->setEnabled(false);
    ui->downButton->setEnabled(false);
    ui->skinElectrode->setChecked(false);
    ui->selectButton->setText("Back");
    ui->TreatmentMin->setText(QString::number(minTreatment));
    ui->TreatmentSec->setText(QString::number(secTreatment));
    treatmentIntensity = 0;
    ui->intensityIndicator->setFontWeight(30);
    ui->intensityIndicator->setText(QString::number(treatmentIntensity));
    ui->intensityIndicator->setFontWeight(30);
    ui->intensityIndicator->setReadOnly(true);

    connect(TreatmentBatteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    TreatmentBatteryUpdateTimer->start(2500);
}

TreatmentWindow::~TreatmentWindow()
{
    minTreatment = 9;
    secTreatment = 59;
    delete ui;
}

//Power Button Clicked
void TreatmentWindow::on_powerButton_clicked()
{
    exit(0);
}

void TreatmentWindow::on_skinElectrode_clicked()
{
    if (TreatmentModeTimer->isActive()) {
        TreatmentModeTimer->stop();
    } else {
        TreatmentModeTimer->start(1000);
    }
}

void TreatmentWindow::fetchBatteryLife() {
    ui->batteryStatus->setValue(batteryLevel);
}


void TreatmentWindow::on_rightButton_clicked()
{
    treatmentIntensity += 1;
    ui->intensityIndicator->setText(QString::number(treatmentIntensity));
}

void TreatmentWindow::on_leftButton_clicked()
{
    if (treatmentIntensity > 0) {
        treatmentIntensity -= 1;
        ui->intensityIndicator->setText(QString::number(treatmentIntensity));
    } else
        ui->intensityIndicator->setText(QString::number(0));

}



void TreatmentWindow::on_selectButton_clicked()
{
    this->close();
}

void TreatmentWindow::treatmentManager()
{
    secTreatment -= 1;
    if (secTreatment == 0){
        minTreatment -= 1;
        secTreatment = 59;
            ui->TreatmentMin->setText(QString::number(minTreatment));
            ui->TreatmentSec->setText(QString::number(secTreatment));
    }
    ui->TreatmentSec->setText(QString::number(secTreatment));
}
