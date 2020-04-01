#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "batterywarningdialog.h"
#include "medwindow.h"
#include "screeningwindow.h"
#include "settingswindow.h"
#include "childrenwindow.h"
#include "frequencywindow.h"
#include "programswindow.h"
#include <QTimer>

using namespace std;

QTimer *batteryTimer = new QTimer;

int batteryLevel;
int brightness;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    //Setting the initial selection index to 0 and Battery to 100% and other global variables
    selectionIndex = 0;
    batteryLevel = 100;
    ui->batteryStatus->setValue(batteryLevel);
    connect(batteryTimer,SIGNAL(timeout()),this,SLOT(batteryManager()));
    batteryTimer->start(10000);
    brightness = 25;

    //Disabling the left and right buttons. Not needed in main menu
    ui->leftButton->setEnabled(false);
    ui->rightButton->setEnabled(false);

    //Adding all the options to the view
    for (int i =0; i < 6; i++){
        ui->mainMenuOptions->addItem(allOptions[i]);
    }

    //Setting the cursor to the first item and highlitghting it
    ui->mainMenuOptions->setCurrentRow(selectionIndex);
    ui->mainMenuOptions->setFocus();

}

MainWindow::~MainWindow()
{
    delete ui;
}

//Up Button Clicked
void MainWindow::on_upButton_clicked()
{
    if(selectionIndex == 0){
        selectionIndex = 5;
    } else {
    selectionIndex -=1;
    }
    ui->mainMenuOptions->setCurrentRow(selectionIndex);
    ui->mainMenuOptions->setFocus();
}

void MainWindow::on_downButton_clicked()
{
    if(selectionIndex == 5){
        selectionIndex = 0;
    } else {
    selectionIndex +=1;
    }
    ui->mainMenuOptions->setCurrentRow(selectionIndex);
    ui->mainMenuOptions->setFocus();
}

//Power Off Button
void MainWindow::on_powerButton_clicked()
{
    exit(0);
}


//Select Button clicked
void MainWindow::on_selectButton_clicked()
{
   QListWidgetItem *highlightedOption =  ui->mainMenuOptions->item(selectionIndex);
   changeMenu(highlightedOption->text());
}

////Change Menu
void MainWindow::changeMenu(QString selectedMenu)
{
    if (selectedMenu.contains(allOptions[0])){
        //CREATE INSTANCE OF PROGRAM MENU obj
        ProgramsWindow progWindow;
        progWindow.setModal(true);
        hide();
        progWindow.exec();
        show();
    }
    else if (selectedMenu.contains(allOptions[1])){
        //CREATE INSTANCE OF Frequency MENU obj
        FrequencyWindow freqWindow;
        freqWindow.setModal(true);
        hide();
        freqWindow.exec();
        show();
    }
    else if (selectedMenu.contains(allOptions[2])){
        //CREATE INSTANCE OF MED MENU obj
        MedWindow medMenu;
        medMenu.setModal(true);
        hide();
        medMenu.exec();
        show();
    }
    else if (selectedMenu.contains(allOptions[3])){
        //CREATE INSTANCE OF Screening MENU obj
        ScreeningWindow screeningMenu;
        screeningMenu.setModal(true);
        hide();
        screeningMenu.exec();
        show();
    }
    else if (selectedMenu.contains(allOptions[4])){
        //CREATE INSTANCE OF Children MENU obj
        ChildrenWindow childrenWindow;
        childrenWindow.setModal(true);
        hide();
        childrenWindow.exec();

        show();
    }
    else if (selectedMenu.contains(allOptions[5])){
        //CREATE INSTANCE OF Settings MENU obj
        SettingsWindow settingsMenu;
        settingsMenu.setModal(true);
        hide();
        settingsMenu.exec();
        show();
    }
    return;
}

//Change the battery level
void MainWindow::setBatteryLevel(int &batteryLevelRef, int newLevel){
    batteryLevelRef = newLevel;
}

//Get the current battery level
int MainWindow::getBatteryLevel(){
    return batteryLevel;
}

//Loosing a % of battery
void MainWindow::drainBattery(int percent){

    int newLevel = getBatteryLevel() - percent;
    setBatteryLevel(batteryLevel,newLevel);
    ui->batteryStatus->setValue(getBatteryLevel());

    //Determining if it is time to shut off the device (battery <= than 0%)
    checkBatteryStatus();

    }

void MainWindow::checkBatteryStatus(){
    //Battery is dead, display warning and power device off
    if(getBatteryLevel() <= 0){
        //display dialog saing battery low
        BatteryWarningDialog batteryWarning;
        batteryWarning.setModal(true);
        batteryWarning.exec();
        on_powerButton_clicked();
    }

}

void MainWindow::batteryManager() {
    //Loosing 2% of battery every 5seconds
    drainBattery(2);
    checkBatteryStatus();
}

