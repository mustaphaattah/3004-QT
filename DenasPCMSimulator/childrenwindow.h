#ifndef CHILDRENWINDOW_H
#define CHILDRENWINDOW_H

#include <QDialog>

namespace Ui {
class ChildrenWindow;
}
class ChildrenWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChildrenWindow(QDialog *parent = nullptr);
    ~ChildrenWindow();
public:
    bool getChildrenDoctor();

private slots:
    void on_upButton_clicked();

    void fetchBatteryLife();

    void on_downButton_clicked();

    void on_selectButton_clicked();

    void on_powerButton_clicked();

    void on_backButton_clicked();

private:
    Ui::ChildrenWindow *ui;
    QString childrenOptions[5] = {"DISABLE", "UP TO 1 YEAR", "1-3 YEARS", "4-7 YEARES", "7-12 YEARS"};
    int selectionIndex;
    bool childrenDoctor;
    void menuOptionHandler(QString selection);
};

#endif // CHILDRENWINDOW_H
