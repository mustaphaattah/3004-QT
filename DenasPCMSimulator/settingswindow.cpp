#include "settingswindow.h"
#include "ui_settingswindow.h"
#include "mainwindow.h"
#include <iostream>

using namespace std;

SettingsWindow::SettingsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);
    ui->leftButton->setEnabled(false);
    ui->rightButton->setEnabled(false);
    selectionIndex = 0;

    //populate menu
    for (int i = 0; i < sizeof (settingsOptions); i++) {
        ui->settingsMenu->addItem(settingsOptions[i]);
    }


}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}

void SettingsWindow::on_powerButton_clicked()
{
    exit(0);
}

void SettingsWindow::on_selectButton_clicked()
{
    menuOptionHandler(selectionIndex);
}

void SettingsWindow::menuOptionHandler( int index)
{
    cout<< "menuOptionHandler SettingsWindow class"<< endl;
}


void SettingsWindow::on_upButton_clicked()
{
    if(selectionIndex == 0){
            selectionIndex = sizeof (settingsOptions);
        } else {
        selectionIndex +=1;
        }
        ui->settingsMenu->setCurrentRow(selectionIndex);
        ui->settingsMenu->setFocus();
}

void SettingsWindow::on_downButton_clicked()
{
    if(selectionIndex == sizeof (settingsOptions)){
            selectionIndex = 0;
        } else {
        selectionIndex +=1;
        }
        ui->settingsMenu->setCurrentRow(selectionIndex);
        ui->settingsMenu->setFocus();
}
