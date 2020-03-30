#include "brightnesswindow.h"
#include "ui_brightnesswindow.h"


QTimer *settingsBatteryUpdateTimer = new QTimer();

BrightnessWindow::BrightnessWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BrightnessWindow)
{
    ui->setupUi(this);
    ui->batteryStatus->setValue(batteryLevel);
    connect(settingsBatteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    settingsBatteryUpdateTimer->start(2500);

    screenTitle = "SETTINGS";
    this->setWindowTitle(screenTitle);

}

BrightnessWindow::~BrightnessWindow()
{
    delete ui;
}
