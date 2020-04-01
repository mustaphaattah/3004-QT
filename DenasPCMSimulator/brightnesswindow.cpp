#include "brightnesswindow.h"
#include "ui_brightnesswindow.h"
#include "mainwindow.h"

#include <QTimer>


BrightnessWindow::BrightnessWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BrightnessWindow)
{
    ui->setupUi(this);
    ui->batteryStatus->setValue(batteryLevel);
    ui->brightnessIndicator->setText(QString::number(brightness));
    ui->brightnessBar->setRange(0, 50);
    ui->brightnessBar->setTextVisible(false);

    ui->upButton->setEnabled(false);
    ui->downButton->setEnabled(false);

    this->setWindowTitle("BRIGHTNESS");
    //ui->brightnessIndicator->setText()

}

BrightnessWindow::~BrightnessWindow()
{
    delete ui;
}

void BrightnessWindow::fetchBatteryLife(){
    ui->batteryStatus->setValue(batteryLevel);
}
void BrightnessWindow::on_rightButton_clicked()
{
    if (brightness >= 0 && brightness <= 50 ){
        brightness++;
        ui->brightnessIndicator->setText(QString::number(brightness));
        ui->brightnessBar->setValue(brightness);
    }
}

void BrightnessWindow::on_leftButton_clicked()
{
    if (brightness >= 0 && brightness <= 50 ){
        brightness--;
        ui->brightnessIndicator->setText(QString::number(brightness));
        ui->brightnessBar->setValue(brightness);
    }
}

void BrightnessWindow::on_selectButton_clicked()
{
    close();
}

void BrightnessWindow::on_powerButton_clicked()
{
    exit(0);
}
