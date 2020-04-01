#include "childrenwindow.h"
#include "ui_childrenwindow.h"
#include "mainwindow.h"
#include <iostream>

#include <QTimer>

QTimer *childrenBatteryUpdateTimer = new QTimer();

ChildrenWindow::ChildrenWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ChildrenWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("CHILDREN Menu");
    selectionIndex = 0;
    childrenDoctor = false;

    ui->leftButton->setEnabled(false);
    ui->rightButton->setEnabled(false);
    ui->batteryStatus->setValue(batteryLevel);

    connect(childrenBatteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    childrenBatteryUpdateTimer->start(2500);

    for (int i = 0; i < 5; ++i) {
        ui->childrenMenu->addItem(childrenOptions[i]);
    }
    ui->childrenMenu->setCurrentRow(selectionIndex);
    ui->childrenMenu->setFocus();
}

ChildrenWindow::~ChildrenWindow()
{
    delete ui;
}

void ChildrenWindow::menuOptionHandler(QString selection)
{
    if(selection.contains(childrenOptions[0])){
        childrenDoctor = false;
        cout<< "child doctor toggled OFF!"<<endl;
        close();
    }
    else{
        childrenDoctor = true;
        cout<< "child doctor toggled ON!"<<endl;
        close();
    }
}

bool ChildrenWindow:: getChildrenDoctor()
{

    return childrenDoctor ;// childrenDoctor;
}


void ChildrenWindow::on_upButton_clicked()
{
    if(selectionIndex == 0){
        selectionIndex = 4;
    } else {
    selectionIndex -=1;
    }
    ui->childrenMenu->setCurrentRow(selectionIndex);
    ui->childrenMenu->setFocus();
}

void ChildrenWindow:: fetchBatteryLife(){
    ui->batteryStatus->setValue(batteryLevel);
}

void ChildrenWindow::on_downButton_clicked()
{
    if(selectionIndex == 4){
        selectionIndex = 0;
    } else {
    selectionIndex +=1;
    }
    ui->childrenMenu->setCurrentRow(selectionIndex);
    ui->childrenMenu->setFocus();
}

void ChildrenWindow::on_selectButton_clicked()
{
    menuOptionHandler(childrenOptions[selectionIndex]);
}

void ChildrenWindow::on_powerButton_clicked()
{
    exit(0);
}

void ChildrenWindow::on_backButton_clicked()
{
    close();
}
