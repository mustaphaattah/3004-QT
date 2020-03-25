#ifndef CHILDRENWINDOW_H
#define CHILDRENWINDOW_H

#include <QDialog>

using namespace std; 

namespace Ui {
class ChildrenWindow;
}

class ChildrenWindow: public QDialog{
    Q_OBJECT


public:
    explicit ChildrenWindow(QDialog *parent = nullptr);
    ~ChildrenWindow();

private slots:

    void on_selectButton_clicked();

    void on_upButton_clicked();

    void on_downButton_clicked();

    void on_powerButton_clicked();

    void show();

private:
    Ui::ChildrenWindow *ui;

private:
    QString childrenOptions[5] = {"DISABLE", "UP TO 1 YEAR", "1-3 YEARS", "4-7 YEARS", "7-12 YEARS"};

private:
    int selectionIndex;

private:
    void menuOptionHandler(int);
};

#endif // CHILDRENWINDOW_H
