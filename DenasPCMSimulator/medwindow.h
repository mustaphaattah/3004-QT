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


    void on_skinElectrode_clicked();

private:
    Ui::MedWindow *ui;
};

#endif // MEDWINDOW_H
