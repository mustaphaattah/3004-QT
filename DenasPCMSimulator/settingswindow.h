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
    void on_powerButton_clicked();
    
    void on_selectButton_clicked();
    
    void on_upButton_clicked();

    void on_downButton_clicked();

private:
    Ui::SettingsWindow *ui;
    QString settingsOptions[8] = {"SOUND", "BRIGHTNESS", "ECONOMY", "RECORDING", "CLOCK", "ALARM CLOCK", "LANGUAGE", "COLOUR"};
    int battery;
    int selectionIndex;

    void menuOptionHandler(int index);
};

#endif // SETTINGSWINDOW_H
