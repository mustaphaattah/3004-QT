#ifndef BATTERY_H
#define BATTERY_H

#include "mainwindow.h"

class Battery
{
public:
    Battery(Ui::MainWindow *ui);
    void setBatteryLevel(int &batteryLevelRef, int newLevel);
    void drainBattery(Ui::MainWindow *ui, int percent);
    void checkBatteryStatus();
    int batteryLevel;
    int powerIntensity;
    QTimer *batteryTimer;

private slots:
    void batteryManager();

};

#endif // BATTERY_H
