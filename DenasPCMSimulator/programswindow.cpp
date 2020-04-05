#include "programswindow.h"
#include "ui_programswindow.h"
#include <QTimer>
#include "mainwindow.h"
#include "treatmentwindow.h"
#include <iostream>

QTimer *programsBatteryUpdateTimer = new QTimer();

ProgramsWindow::ProgramsWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ProgramsWindow)
{
    ui->setupUi(this);
    ui->batteryStatus->setValue(batteryLevel);
    ui->leftButton->setEnabled(false);
    ui->rightButton->setEnabled(false);
    this->setWindowTitle("PROGRAMS Menu");
    connect(programsBatteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    programsBatteryUpdateTimer->start(2500);

    selectionIndex = 0;

    screenTitle = "PROGRAMS";
    this->setWindowTitle(screenTitle);
    displayMenu(programsOptions, 3);
}

ProgramsWindow::~ProgramsWindow()
{
    delete ui;
}

void ProgramsWindow::fetchBatteryLife() {
    ui->batteryStatus->setValue(batteryLevel);
}

void ProgramsWindow::menuOptionHandler(QString selection){
    //hanlde each option selected
    if(selection == ("PAIN")){
        TreatmentWindow treatWindow;
        treatWindow.setWindowTitle("PAIN");
        treatWindow.setModal(true);
        hide();
        treatWindow.exec();
        show();
    }
    else if(selection == ("HEAD")){
        TreatmentWindow treatWindow;
        treatWindow.setWindowTitle("HEAD");
        treatWindow.setModal(true);
        hide();
        treatWindow.exec();
        show();
    }
    else if(selection == ("COLD")){
        TreatmentWindow treatWindow;
        treatWindow.setWindowTitle("COLD");
        treatWindow.setModal(true);
        hide();
        treatWindow.exec();
        show();
    }
}

void ProgramsWindow::displayMenu(QString arr[], int size){
    //populate menu
    ui->programsMenu->clear();
    this->setWindowTitle(screenTitle);

    for (int i = 0; i < size; i++) {
        ui->programsMenu->addItem(arr[i]);
    }
    menuSize = size;
    selectionIndex = 0;
    ui->programsMenu->setCurrentRow(selectionIndex);
    ui->programsMenu->setFocus();
}

void ProgramsWindow::on_upButton_clicked()
{
    if(selectionIndex == 0){
            selectionIndex = 2;
        } else {
        selectionIndex -=1;
        }
        ui->programsMenu->setCurrentRow(selectionIndex);
        ui->programsMenu->setFocus();
}

void ProgramsWindow::on_downButton_clicked()
{
    if(selectionIndex == 2){
            selectionIndex = 0;
        } else {
        selectionIndex +=1;
        }
        ui->programsMenu->setCurrentRow(selectionIndex);
        ui->programsMenu->setFocus();
}

void ProgramsWindow::on_selectButton_clicked()
{
    QString selection = ui->programsMenu->currentItem()->text();
    menuOptionHandler(selection);
}

void ProgramsWindow::on_pushButton_clicked()
{
    this->close();
}
