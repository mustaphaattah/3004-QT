#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "childrenwindow.h"
#include "settingswindow.h"
#include <iostream>
#include <QtGui>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    //Setting the initial selection index to 0 and Battery to 100%
    selectionIndex = 0;
    batteryLevel = 100;
    ui->batteryStatus->setValue(batteryLevel);

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
    //for console log
    cout << "Switching off device..."<< endl;
    exit(0);
}


//Select Button clicked
void MainWindow::on_selectButton_clicked()
{
   QListWidgetItem *highlightedOption =  ui->mainMenuOptions->item(selectionIndex);
   //for console log
   cout << highlightedOption->text().toStdString() <<" Option selected"<< endl;
   changeMenu(highlightedOption->text());

}

////Change Menu
void MainWindow::changeMenu(QString selectedMenu)
{
    if (selectedMenu.contains(allOptions[0])){
        //CREATE INSTANCE OF PROGRAM MENU obj
        cout<<"choose an program"<<endl;
    }
    else if (selectedMenu.contains(allOptions[1])){
        //CREATE INSTANCE OF Frequency MENU obj
    }
    else if (selectedMenu.contains(allOptions[2])){
        //CREATE INSTANCE OF MED MENU obj
    }
    else if (selectedMenu.contains(allOptions[3])){
        //CREATE INSTANCE OF Screening MENU obj
    }
    else if (selectedMenu.contains(allOptions[4])){
        //CREATE INSTANCE OF Children MENU obj
        ChildrenWindow childMenu;
        childMenu.setModal(true);
        hide();
        childMenu.exec();

        show();
    }
    else if (selectedMenu.contains(allOptions[5])){
        //CREATE INSTANCE OF Settings MENU obj
        cout <<"switching to settings window"<< endl;
        SettingsWindow settingsMenu;
        settingsMenu.setModal(true);
        hide();
        settingsMenu.exec();
        settingsMenu.show();

        //drain battery %1
        show();

    }
    return;
}

//Change the battery level
void MainWindow::setBatteryLevel(int newBatteryLevel){
    batteryLevel = newBatteryLevel;
}

//Get the current battery level
int MainWindow::getBatteryLevel(){
    return batteryLevel;
}



