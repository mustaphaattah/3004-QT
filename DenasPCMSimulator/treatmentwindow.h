#ifndef TREATMENTWINDOW_H
#define TREATMENTWINDOW_H

#include <QDialog>

namespace Ui {
class TreatmentWindow;
}

class TreatmentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TreatmentWindow(QDialog *parent = nullptr);
    ~TreatmentWindow();

private slots:
    void on_powerButton_clicked();

    void fetchBatteryLife();

    void on_skinElectrode_clicked();

    void on_rightButton_clicked();

    void on_leftButton_clicked();

    void on_selectButton_clicked();

    void treatmentManager();

    void updateClock();

private:
    Ui::TreatmentWindow *ui;

};

#endif // TREATMENTWINDOW_H
