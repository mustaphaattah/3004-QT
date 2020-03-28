#include "settingswindow.h"
#include "ui_settingswindow.h"
#include <QTimer>
#include "mainwindow.h"

QTimer *settingsBatteryUpdateTimer = new QTimer();

settingsWindow::settingsWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::settingsWindow)
{
    ui->setupUi(this);
    ui->batteryStatus->setValue(batteryLevel);
    this->setWindowTitle("SETTINGS");
    connect(settingsBatteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    settingsBatteryUpdateTimer->start(2500);

    //ADD YOUR STUFF

}

settingsWindow::~settingsWindow()
{
    delete ui;
}

void settingsWindow::fetchBatteryLife() {
    ui->batteryStatus->setValue(batteryLevel);
}
