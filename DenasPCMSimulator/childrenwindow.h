#ifndef CHILDRENWINDOW_H
#define CHILDRENWINDOW_H

#include <QMainWindow>

using namespace std; 

namespace UI {
class ChildrenWindow;
}

class ChildrenWindow : public QMainWindow {
    Q_OBJECT


public:
    explicit ChildrenWindow(QWidget *parent = nullptr);
    ~ChildrenWindow();

private:
    UI::ChildrenWindow *ui;

private:
    QString childrenOptions[5] = {"DISABLE", "UP TO 1 YEAR", "1-3 YEARS", "4-7 YEARS", "7-12 YEARS"};
};

#endif // CHILDRENWINDOW_H
