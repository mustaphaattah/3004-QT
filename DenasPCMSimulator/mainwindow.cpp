#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "battery.h"
#include <iostream>
#include <QTimer>

int selectionIndex;
int menuSize;
int minTreatment;
int secTreatment;
bool treatment;
bool electrodeOn;
int treatmentIntensity;
//Battery *a;
QString selection;
QTimer *TreatmentTimer = new QTimer;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    Battery *a = new Battery;
    ui->setupUi(this);
    minTreatment = 10;
    secTreatment = 0;
    treatmentIntensity = 0;
    electrodeOn = true;
    displayMenu(menuOptions,6);
    connect(TreatmentTimer,SIGNAL(timeout()),this,SLOT(treatmentManager()));
    TreatmentTimer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayMenu(QString arr[], int size){
    //populate menu
    ui->powerLevel->setVisible(false);
    ui->powerIndicator->setVisible(false);
    ui->treatmentMin->setVisible(false);
    ui->treatmentSec->setVisible(false);
    ui->colon->setVisible(false);
    ui->medTimer->setVisible(false);
    ui->medTimerLabel->setVisible(false);
    ui->mainMenu->clear();
    ui->measuredValue->setVisible(false);
    ui->measuredValueLabel->setVisible(false);
    ui->screeningTimer->setVisible(false);
    ui->screeningTimerLabel->setVisible(false);
    this->setWindowTitle(selection);

    for (int i = 0; i < size; i++) {
        ui->mainMenu->addItem(arr[i]);
    }
    menuSize = size;
    selectionIndex = 0;
    ui->mainMenu->setCurrentRow(selectionIndex);
    ui->mainMenu->setFocus();
}

void MainWindow::hideMenu()
{
    ui->mainMenu->clear();
}

void MainWindow::menuOptionHandler(QString selection)
{
    if (selection == "PROGRAM"){
        this->setWindowTitle("PROGRAM");
        displayMenu(programsOptions, 3);
    } else if (selection == "FREQUENCY"){
        this->setWindowTitle("FREQUENCY");
        displayMenu(frequencyOptions, 9);
    } else if (selection == "MED"){
        hideMenu();
        this->setWindowTitle("MED");
        ui->medTimer->setVisible(true);
        ui->medTimerLabel->setVisible(true);
    } else if (selection == "SCREENING"){
        hideMenu();
        this->setWindowTitle("SCREENING");
        ui->measuredValue->setVisible(true);
        ui->measuredValueLabel->setVisible(true);
        ui->screeningTimer->setVisible(true);
        ui->screeningTimerLabel->setVisible(true);
    } else if (selection == "CHILDREN"){
        this->setWindowTitle("CHILDREN");
        displayMenu(childrenOptions, 5);
    } else if (selection == "SETTINGS"){
        this->setWindowTitle("SETTINGS");
        displayMenu(settingsOptions, 8);
    //Setting Options
    }else if(selection == ("SOUND")){
        displayMenu(soundOptions, 3);
    }else if (selection == ("BRIGHTNESS")) {
        displayMenu(onOffOptions, 2);
    }else if (selection == ("RECORDING")) {
        displayMenu(enableOptions, 2);
    }else if (selection == ("CLOCK")) {
    }else if (selection == ("ON") || selection == ("OFF") ||
              selection == ("DISABLE") || selection == ("ENABLE") ||
              selection == "GENERAL") {
        selection = "SETTINGS";
        displayMenu(settingsOptions, 8);
    }

    for (int i = 0; i < 3; i++){
        if (selection == programsOptions[i]){
            treatmentHandler(programsOptions[i]);
        }
    }
    for (int i = 0; i < 9; i++){
        if (selection == frequencyOptions[i]){
            treatmentHandler(frequencyOptions[i]);
        }
    }
}

void MainWindow::on_okButton_clicked()
{
    selection = ui->mainMenu->currentItem()->text();
    menuOptionHandler(selection);
}

void MainWindow::on_downButton_clicked()
{
    if(selectionIndex == menuSize-1){
            selectionIndex = 0;
        } else {
        selectionIndex +=1;
        }
        ui->mainMenu->setCurrentRow(selectionIndex);
        ui->mainMenu->setFocus();
}

void MainWindow::on_upButton_clicked()
{
    if(selectionIndex == 0){
            selectionIndex = menuSize-1;
        } else {
        selectionIndex -=1;
        }
        ui->mainMenu->setCurrentRow(selectionIndex);
        ui->mainMenu->setFocus();
}

void MainWindow::on_leftButton_clicked()
{
    if (treatmentIntensity > 0) {
        treatmentIntensity -= 1;
        ui->powerLevel->setText(QString::number(treatmentIntensity));
    } else
        ui->powerLevel->setText(QString::number(0));
}

void MainWindow::on_rightButton_clicked()
{
    treatmentIntensity += 1;
    ui->powerLevel->setText(QString::number(treatmentIntensity));
}

void MainWindow::on_backButton_clicked()
{
    if (selection == "PROGRAM" || selection == "FREQUENCY" || selection == "CHILDREN" || selection == "SETTINGS" || selection == "MED" || selection == "SCREENING") {
        selection = "DenasPCMSimulator";
        displayMenu(menuOptions, 6);
    }
    for (int i = 0; i < 8; i++){
        if (selection == settingsOptions[i]){
            selection = "SETTINGS";
            displayMenu(settingsOptions, 8);
        }
    }
    for (int i = 0; i < 3; i++){
        if (selection == programsOptions[i]){
            selection = "PROGRAM";
            displayMenu(programsOptions, 3);
        }
    }
    for (int i = 0; i < 9; i++){
        if (selection == frequencyOptions[i]){
            selection = "FREQUENCY";
            displayMenu(frequencyOptions, 9);
        }
    }


}

void MainWindow::treatmentHandler(QString treatment)
{
    minTreatment = 10;
    secTreatment = 0;
    hideMenu();
    this->setWindowTitle(treatment);
    ui->powerLevel->setText(QString::number(treatmentIntensity));
    ui->powerLevel->setVisible(true);
    ui->powerIndicator->setVisible(true);
    ui->treatmentMin->setVisible(true);
    ui->treatmentSec->setVisible(true);
    ui->colon->setVisible(true);
}

void MainWindow::treatmentManager()
{
    if (minTreatment < 10)
        ui->treatmentMin->setText("0"+QString::number(minTreatment));
    else
        ui->treatmentMin->setText(QString::number(minTreatment));
    if (secTreatment < 10){
        ui->treatmentSec->setText("0"+QString::number(secTreatment));
    }
    else
        ui->treatmentSec->setText(QString::number(secTreatment));
    if (secTreatment > 0)
        secTreatment -= 1;
    if (secTreatment == 0){
        if (minTreatment == 0){
            this->close();
        }
        minTreatment -= 1;
        secTreatment = 59;
    }
}

void MainWindow::on_menuButton_clicked()
{
    selection = "DenasPCMSimulator";
    displayMenu(menuOptions, 6);
}

void MainWindow::on_powerButton_clicked()
{
    exit(0);
}

void MainWindow::on_skinElectrode_clicked()
{
    if (electrodeOn){
     TreatmentTimer->stop();
    electrodeOn = false;
    } else {
     TreatmentTimer->start();
     electrodeOn = true;
    }
}
