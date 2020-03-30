#include "settingswindow.h"
#include "ui_settingswindow.h"
#include <QTimer>
#include "mainwindow.h"
#include <iostream>

QTimer *settingsBatteryUpdateTimer = new QTimer();

SettingsWindow::SettingsWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::SettingsWindow)

{
    ui->setupUi(this);
    ui->batteryStatus->setValue(batteryLevel);
    connect(settingsBatteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    settingsBatteryUpdateTimer->start(2500);

    screenTitle = "SETTINGS";
    this->setWindowTitle(screenTitle);
    //ADD YOUR STUFF

    //menuSize = sizeof (settingsOptions)/sizeof (settingsOptions[0]);
    displayMenu(settingsOptions, 8);
}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}

void SettingsWindow::fetchBatteryLife() {
    ui->batteryStatus->setValue(batteryLevel);
}

void SettingsWindow::menuOptionHandler(QString selection){
    //hanlde each option selected
    if(selection.contains("SOUND")){
        screenTitle = selection;

        displayMenu(soundOptions, 3);
        cout<< "sound!"<<endl;
    }else if (selection.contains("BRIGHTNESS")) {
        //launch displays

    }else if (selection.contains("RECORDING")) {
        screenTitle = selection;

        displayMenu(enableOptions, 2);
    }else if (screenTitle.contains("CLOCK")) {
        //clock launch menu

    }else if (selection.contains("ON") || selection.contains("OFF") ||
              selection.contains("DISABLE") || selection.contains("ENABLE")) {
        screenTitle = "SETTINGS";
        displayMenu(settingsOptions, 8);
    }else {
        screenTitle = selection;
        displayMenu(onOffOptions, 2);
    }

//    cout<< selection<<endl;// + " selected!"<<endl;
}

void SettingsWindow::displayMenu(QString arr[], int size){
    //populate menu
    ui->settingsMenu->clear();
    this->setWindowTitle(screenTitle);

    for (int i = 0; i < size; i++) {
        ui->settingsMenu->addItem(arr[i]);
    }
    menuSize = size;
    selectionIndex = 0;
    ui->settingsMenu->setCurrentRow(selectionIndex);
    ui->settingsMenu->setFocus();
}

void SettingsWindow::on_upButton_clicked()
{
    if(selectionIndex == 0){
            selectionIndex = menuSize-1;
        } else {
        selectionIndex -=1;
        }
        ui->settingsMenu->setCurrentRow(selectionIndex);
        ui->settingsMenu->setFocus();
}

void SettingsWindow::on_downButton_clicked()
{
    if(selectionIndex == menuSize-1){
            selectionIndex = 0;
        } else {
        selectionIndex +=1;
        }
        ui->settingsMenu->setCurrentRow(selectionIndex);
        ui->settingsMenu->setFocus();
}

void SettingsWindow::on_powerButton_clicked()
{
    exit(0);
}


void SettingsWindow::on_selectButton_clicked()
{
    QString selection = ui->settingsMenu->currentItem()->text();
    cout<< selection.toStdString() <<endl;
    menuOptionHandler(selection);
}
