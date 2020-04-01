#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
using namespace std;

namespace Ui {
class MainWindow;
}

extern int batteryLevel;
extern int brightness;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_upButton_clicked();

    void on_powerButton_clicked();

    void on_downButton_clicked();

    void on_selectButton_clicked();

    void batteryManager();

private:
    void changeMenu(QString selectedMenu);

public:
    int getBatteryLevel();
    int getBrightness();


public:
    void setBatteryLevel(int &batteryLevelRef, int newLevel);
    void setBrightness(int &brightness, int newLevel);

public:
    void checkBatteryStatus();

public:
    void drainBattery(int percent);

private:
    Ui::MainWindow *ui;

private:
    QString allOptions [6] = {"PROGRAM","FREQUENCY","MED","SCREENING","CHILDREN","SETTINGS"};

private:
    int selectionIndex;

};




#endif // MAINWINDOW_H
