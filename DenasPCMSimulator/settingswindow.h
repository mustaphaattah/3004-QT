#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QDialog>

namespace Ui {
class settingsWindow;
}

class settingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit settingsWindow(QDialog *parent = nullptr);
    ~settingsWindow();

private slots:
    void fetchBatteryLife();

private:
    Ui::settingsWindow *ui;
};

#endif // SETTINGSWINDOW_H
