#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QDialog>

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

private:
    Ui::SettingsWindow *ui;
    QString settingsOptions[8] = {"SOUND", "BRIGHTNESS", "ECONOMY", "RECORDING", "CLOCK", "ALARM CLOCK", "LANGUAGE", "COLOUR"};
    int selectionIndex;
};

#endif // SETTINGSWINDOW_H
