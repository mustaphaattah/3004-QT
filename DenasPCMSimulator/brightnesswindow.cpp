#include "brightnesswindow.h"
#include "ui_brightnesswindow.h"

#include <QTimer>

QTimer *brightnessBatteryUpdateTimer = new QTimer();

BrightnessWindow::BrightnessWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BrightnessWindow)
{
    ui->setupUi(this);
    //ui->batteryStatus->setValue(batteryLevel);
    connect(brightnessBatteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    brightnessBatteryUpdateTimer->start(2500);

    //screenTitle = "SETTINGS";
    //this->setWindowTitle(screenTitle);

}

BrightnessWindow::~BrightnessWindow()
{
    delete ui;
}
