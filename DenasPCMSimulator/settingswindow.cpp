#include "settingswindow.h"
#include "ui_settingswindow.h"
#include "mainwindow.h"
#include "brightnesswindow.h"
#include "clockwindow.h"

#include <QTimer>
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
    if(selection == ("SOUND")){
        screenTitle = selection;
        displayMenu(soundOptions, 3);
        cout<< "sound!"<<endl;
    }else if (selection == ("BRIGHTNESS")) {
        //launch displays
        cout << "launch brightness window"<< endl;
        BrightnessWindow brightWindow;
        hide();
        brightWindow.exec();
        show();

    }else if (selection == ("RECORDING")) {
        screenTitle = selection;
        displayMenu(enableOptions, 2);

    }else if (selection == ("LANGUAGE")) {
        screenTitle = selection;
        ui->settingsMenu->clear();
        this->setWindowTitle(screenTitle);
        ui->settingsMenu->addItem("ENGLISH");

        menuSize = 1;
        selectionIndex = 0;
        ui->settingsMenu->setCurrentRow(selectionIndex);
        ui->settingsMenu->setFocus();

    }else if (selection == "ENGLISH"){
        close();
    }else if (selection == ("CLOCK")) {
        //clock launch menu
        ClockWindow clock;
        hide();
        clock.exec();
        show();
    }else if (selection == ("ON") || selection == ("OFF") ||
              selection == ("DISABLE") || selection == ("ENABLE") ||
              selection == "GENERAL") {
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

void SettingsWindow::on_backButton_clicked()
{
    close();
}

