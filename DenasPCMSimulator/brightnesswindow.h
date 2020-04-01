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

private:
    Ui::BrightnessWindow *ui;
};

#endif // BRIGHTNESSWINDOW_H
