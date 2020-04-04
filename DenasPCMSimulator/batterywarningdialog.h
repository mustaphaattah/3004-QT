#ifndef BATTERYWARNINGDIALOG_H
#define BATTERYWARNINGDIALOG_H

#include <QDialog>

namespace Ui {
class BatteryWarningDialog;
}

class BatteryWarningDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BatteryWarningDialog(QWidget *parent = nullptr);
    ~BatteryWarningDialog();

private slots:
    void on_okayButton_clicked();

private:
    Ui::BatteryWarningDialog *ui;
};

#endif // BATTERYWARNINGDIALOG_H
