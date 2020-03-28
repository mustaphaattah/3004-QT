#include "settingswindow.h"
#include "ui_settingswindow.h"
#include <QTimer>
#include "mainwindow.h"

QTimer *settingsBatteryUpdateTimer = new QTimer();

SettingsWindow::SettingsWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::SettingsWindow)

{
    ui->setupUi(this);
    ui->batteryStatus->setValue(batteryLevel);
    this->setWindowTitle("SETTINGS");
    connect(settingsBatteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    settingsBatteryUpdateTimer->start(2500);

    //ADD YOUR STUFF
    selectionIndex = 0;

    //populate menu
    for (int i = 0; i < 8; i++) {
        ui->settingsMenu->addItem(settingsOptions[i]);
    }


}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}

void SettingsWindow::fetchBatteryLife() {
    ui->batteryStatus->setValue(batteryLevel);
}

void SettingsWindow::on_upButton_clicked()
{
    if(selectionIndex == 0){
            selectionIndex = 5;
        } else {
        selectionIndex -=1;
        }
        ui->settingsMenu->setCurrentRow(selectionIndex);
        ui->settingsMenu->setFocus();
}

void SettingsWindow::on_downButton_clicked()
{
    if(selectionIndex == 5){
            selectionIndex = 0;
        } else {
        selectionIndex +=1;
        }
        ui->settingsMenu->setCurrentRow(selectionIndex);
        ui->settingsMenu->setFocus();
}
