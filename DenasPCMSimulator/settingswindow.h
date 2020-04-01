#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QDialog>
#include <QDateTime>

namespace Ui {
class SettingsWindow;
}

class SettingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsWindow(QDialog *parent = nullptr);
    ~SettingsWindow();

private slots:
    void fetchBatteryLife();

    void on_upButton_clicked();

    void on_downButton_clicked();

    void on_powerButton_clicked();

    void on_selectButton_clicked();

    void on_backButton_clicked();

private:
    Ui::SettingsWindow *ui;
    QTime time;
    QString settingsOptions[8] = {"SOUND", "BRIGHTNESS", "ECONOMY", "RECORDING", "CLOCK", "ALARM CLOCK", "LANGUAGE", "CONTACT"};
    QString soundOptions[3] = {"GENERAL", "SOUND CONT.", "SOUND BUT."};
    QString onOffOptions[2] = {"OFF", "ON"};
    QString enableOptions[2] = {"DISABLE", "ENABLE"};
    QString screenTitle;
    int selectionIndex;
    int menuSize;
    void menuOptionHandler(QString selection);
    void displayMenu(QString arr[], int size);
    void setTime();
    void brightness();

};

#endif // SETTINGSWINDOW_H
