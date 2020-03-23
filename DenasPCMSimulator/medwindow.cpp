#include "medwindow.h"
#include "ui_medwindow.h"
#include "mainwindow.h"

MedWindow::MedWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::MedWindow)
{

    ui->setupUi(this);
    ui->batteryStatus->setValue(batteryLevel);
    ui->upButton->setEnabled(false);
    ui->downButton->setEnabled(false);
    ui->skinElectrode->setChecked(false);
}

MedWindow::~MedWindow()
{
    delete ui;
}

//Power Button Clicked
void MedWindow::on_powerButton_clicked()
{
    exit(0);
}

void MedWindow::on_skinElectrode_clicked()
{
    if (ui->skinElectrode->isChecked()){
        //Start timer
    } else {
        //Pause timer
    }
}
