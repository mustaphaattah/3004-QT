#ifndef BRIGHTNESSWINDOW_H
#define BRIGHTNESSWINDOW_H

#include <QDialog>

namespace Ui {
class BrightnessWindow;
}

class BrightnessWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BrightnessWindow(QWidget *parent = nullptr);
    ~BrightnessWindow();

    void fetchBatteryLife();

private slots:
    void on_rightButton_clicked();

    void on_leftButton_clicked();

    void on_selectButton_clicked();

    void on_powerButton_clicked();

private:
    Ui::BrightnessWindow *ui;
};

#endif // BRIGHTNESSWINDOW_H
