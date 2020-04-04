#include "battery.h"
#include <QTimer>
#include "ui_mainwindow.h"

Battery::Battery(Ui::MainWindow *ui)
{
    batteryLevel = 0;
    powerIntensity = 0;
    batteryTimer = new QTimer;
    ui->batteryStatus->setValue(batteryLevel);
    //connect(batteryTimer,SIGNAL(timeout()),this,SLOT(batteryManager()));
    batteryTimer->start(5000);
}


void Battery::setBatteryLevel(int &batteryLevelRef, int newLevel){
    batteryLevelRef = newLevel;
}

//Loosing a % of battery
void Battery::drainBattery(Ui::MainWindow *ui ,int percent){

    int newLevel = batteryLevel - percent;
    setBatteryLevel(batteryLevel,newLevel);
    ui->batteryStatus->setValue(batteryLevel);

    //Determining if it is time to shut off the device (battery <= than 0%)
    checkBatteryStatus();

}


void Battery::checkBatteryStatus(){
    //Battery is dead, display warning and power device off
    if(batteryLevel <= 0){
        //
    }

}

void Battery::batteryManager(Ui::MainWindow *ui) {
    //Losing % of battery every 5 seconds
    if (powerIntensity < 10)
        drainBattery(ui,2);
    else if (powerIntensity < 25)
        drainBattery(ui,4);
    else if (powerIntensity < 50)
        drainBattery(ui,8);
    else {
        drainBattery(ui,10);
    }
    checkBatteryStatus();
}

