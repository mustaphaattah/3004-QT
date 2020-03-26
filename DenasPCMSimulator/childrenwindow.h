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
    explicit ChildrenWindow(QWidget *parent = nullptr);
    ~ChildrenWindow();

private:
    Ui::ChildrenWindow *ui;
};

#endif // CHILDRENWINDOW_H
