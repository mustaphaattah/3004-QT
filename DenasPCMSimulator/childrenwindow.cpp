#include "childrenwindow.h"
#include "ui_childrenwindow.h"
#include <iostream>
//#include "mainwindow.h"

using namespace std;


ChildrenWindow::ChildrenWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ChildrenWindow)
{
    ui->setupUi(this);


    selectionIndex = 0;
    //ui->batteryStatus->setValue(batteryLevel);
    ui->upButton->setEnabled(true);
    ui->downButton->setEnabled(true);
    ui->leftButton->setEnabled(false);
    ui->rightButton->setEnabled(false);

    for (int i = 0; i < sizeof(childrenOptions); ++i) {
        ui->childrenMenu->addItem(childrenOptions[i]);
    }

    ui->childrenMenu->setCurrentRow(selectionIndex);
}

ChildrenWindow::~ChildrenWindow()
{
    delete ui;
}

void ChildrenWindow::on_selectButton_clicked()
{
    menuOptionHandler(selectionIndex);
}

void ChildrenWindow::on_upButton_clicked()
{
    if(selectionIndex == 0){
            selectionIndex = 5;
        } else {
        selectionIndex -=1;
        }
        ui->childrenMenu->setCurrentRow(selectionIndex);
        ui->childrenMenu->setFocus();
}


void ChildrenWindow::on_downButton_clicked()
{
    if(selectionIndex == 5){
            selectionIndex = 0;
        } else {
        selectionIndex +=1;
        }
        ui->childrenMenu->setCurrentRow(selectionIndex);
        ui->childrenMenu->setFocus();
}

void ChildrenWindow::menuOptionHandler( int index)
{
    if(index == 0){
        //toggle caregiver off
        // set age group null
    }
    else {
        // set age group to selected
        // toggle caregiver on
    }
}

void ChildrenWindow::on_powerButton_clicked()
{
    //for console log
    cout << "Switching off device..."<< endl;
    exit(1);
}
