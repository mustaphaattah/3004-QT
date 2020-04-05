#ifndef FREQUENCYWINDOW_H
#define FREQUENCYWINDOW_H

#include <QDialog>

namespace Ui {
class FrequencyWindow;
}

class FrequencyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FrequencyWindow(QDialog *parent = nullptr);
    ~FrequencyWindow();

private slots:
    void fetchBatteryLife();

    void on_upButton_clicked();

    void on_downButton_clicked();

    void on_selectButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::FrequencyWindow *ui;
    QString frequencyOptions[9] = {"1.0-9.9 Hz","10 Hz","20 Hz","60 Hz","77 Hz","140 Hz","200 Hz","<<77 10>>","<<77AM>>"};
    int selectionIndex;
};

#endif // FREQUENCYWINDOW_H
