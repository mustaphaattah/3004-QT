#include "frequencywindow.h"
#include "ui_frequencywindow.h"
#include <QTimer>
#include "mainwindow.h"
#include "treatmentwindow.h"

QTimer *frequencyBatteryUpdateTimer = new QTimer();

FrequencyWindow::FrequencyWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::FrequencyWindow)
{
    ui->setupUi(this);
    ui->frequencyMenu->setFocus();
    ui->batteryStatus->setValue(batteryLevel);
    ui->leftButton->setEnabled(false);
    ui->rightButton->setEnabled(false);
    this->setWindowTitle("FREQUENCY Menu");
    connect(frequencyBatteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    frequencyBatteryUpdateTimer->start(2500);

    selectionIndex = 0;

    //populate menu
    for (int i = 0; i < 9; i++) {
        ui->frequencyMenu->addItem(frequencyOptions[i]);
    }
}

FrequencyWindow::~FrequencyWindow()
{
    delete ui;
}

void FrequencyWindow::fetchBatteryLife() {
    ui->batteryStatus->setValue(batteryLevel);
}

void FrequencyWindow::on_upButton_clicked()
{
    if(selectionIndex == 0){
            selectionIndex = 8;
        } else {
        selectionIndex -=1;
        }
        ui->frequencyMenu->setCurrentRow(selectionIndex);
        ui->frequencyMenu->setFocus();
}

void FrequencyWindow::on_downButton_clicked()
{
    if(selectionIndex == 8){
            selectionIndex = 0;
        } else {
        selectionIndex +=1;
        }
        ui->frequencyMenu->setCurrentRow(selectionIndex);
        ui->frequencyMenu->setFocus();
}

void FrequencyWindow::on_selectButton_clicked()
{
    TreatmentWindow treatWindow;
    treatWindow.setWindowTitle(frequencyOptions[selectionIndex]);
    treatWindow.setModal(true);
    hide();
    treatWindow.exec();
    show();
}

void FrequencyWindow::on_pushButton_clicked()
{
    this->close();
}
