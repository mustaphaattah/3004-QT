#ifndef MEDWINDOW_H
#define MEDWINDOW_H

#include <QDialog>

namespace Ui {
class MedWindow;
}

class MedWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MedWindow(QDialog *parent = nullptr);
    ~MedWindow();

private slots:
    void on_powerButton_clicked();

    void fetchBatteryLife();

    void updateMedTimer();

    void on_skinElectrode_clicked();

    void on_rightButton_clicked();

    void on_leftButton_clicked();

    void on_selectButton_clicked();

    void medUpdateClock();

private:
    Ui::MedWindow *ui;
};

#endif // MEDWINDOW_H
