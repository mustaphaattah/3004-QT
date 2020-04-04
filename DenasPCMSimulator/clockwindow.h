#ifndef CLOCKWINDOW_H
#define CLOCKWINDOW_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class ClockWindow;
}

class ClockWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ClockWindow(QWidget *parent = nullptr);
    ~ClockWindow();

private slots:
    void on_selectButton_clicked();
    void clockFunction();
    void on_powerButton_clicked();
    void fetchBatteryLife();

private:
    Ui::ClockWindow *ui;
    QTimer *timer;

};

#endif // CLOCKWINDOW_H
