#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_okButton_clicked();

    void on_downButton_clicked();

    void on_upButton_clicked();

    void on_leftButton_clicked();

    void on_rightButton_clicked();

    void on_backButton_clicked();

    void treatmentManager();

    void on_menuButton_clicked();

    void on_powerButton_clicked();

    void on_skinElectrode_clicked();

private:
    Ui::MainWindow *ui;
    void displayMenu(QString arr[], int size);
    void hideMenu();
    void menuOptionHandler(QString selection);
    void treatmentHandler(QString treatment);
    QString menuOptions [6] = {"PROGRAM","FREQUENCY","MED","SCREENING","CHILDREN","SETTINGS"};
    QString programsOptions[3] = {"PAIN", "HEAD", "COLD"};
    QString frequencyOptions[9] = {"1.0-9.9 Hz","10 Hz","20 Hz","60 Hz","77 Hz","140 Hz","200 Hz","<<77 10>>","<<77AM>>"};
    QString settingsOptions[8] = {"SOUND", "BRIGHTNESS", "ECONOMY", "RECORDING", "CLOCK", "ALARM CLOCK", "LANGUAGE", "CONTACT"};
    QString childrenOptions[5] = {"DISABLE", "UP TO 1 YEAR", "1-3 YEARS", "4-7 YEARES", "7-12 YEARS"};
    QString soundOptions[3] = {"GENERAL", "SOUND CONT.", "SOUND BUT."};
    QString onOffOptions[2] = {"OFF", "ON"};
    QString enableOptions[2] = {"DISABLE", "ENABLE"};
};

#endif // MAINWINDOW_H
