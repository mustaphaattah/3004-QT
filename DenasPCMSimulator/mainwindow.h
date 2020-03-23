#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
using namespace std;

namespace Ui {
class MainWindow;
}

extern int batteryLevel;

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

private:
    void changeMenu(QString selectedMenu);

public:
    int getBatteryLevel();

public:
    void setBatteryLevel(int &batteryLevelRef, int newLevel);

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
