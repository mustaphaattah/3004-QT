#include "childrenwindow.h"
#include "ui_childrenwindow.h"

ChildrenWindow::ChildrenWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChildrenWindow)
{
    ui->setupUi(this);
}

ChildrenWindow::~ChildrenWindow()
{
    delete ui;
}
