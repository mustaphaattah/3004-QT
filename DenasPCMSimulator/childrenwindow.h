#ifndef CHILDRENWINDOW_H
#define CHILDRENWINDOW_H

#include <QDialog>

namespace Ui {
class ChildrenWindow;
}

extern bool childrenDoctor;

class ChildrenWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChildrenWindow(QWidget *parent = nullptr);
    ~ChildrenWindow();
    static void setChildrenDoctor(bool status);
    static bool getChildrenDoctor();

private slots:
    void on_selectButton_clicked();

    void on_powerButton_clicked();

    void on_upButton_clicked();

    void on_downButton_clicked();

private:
    Ui::ChildrenWindow *ui;
    QString childrenOptions[5] = {"DISABLE", "UP TO 1 YEAR", "1-3 YEARS", "4-7 YEARES", "7-12 YEARS"};
    int selectionIndex;
    void menuOptionHandler(int index);
};

#endif // CHILDRENWINDOW_H