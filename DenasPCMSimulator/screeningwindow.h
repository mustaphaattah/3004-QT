#ifndef SCREENINGWINDOW_H
#define SCREENINGWINDOW_H

#include <QDialog>

namespace Ui {
class ScreeningWindow;
}

class ScreeningWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ScreeningWindow(QWidget *parent = nullptr);
    ~ScreeningWindow();

private slots:
    void on_powerButton_clicked();

    void fetchBatteryLife();

    void on_skinElectrode_clicked();

    void updateScreenTimer();

    void on_selectButton_clicked();

    void scrUpdateClock();

private:
    Ui::ScreeningWindow *ui;
};

#endif // SCREENINGWINDOW_H
