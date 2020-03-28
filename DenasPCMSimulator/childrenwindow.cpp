#include "childrenwindow.h"
#include "ui_childrenwindow.h"

ChildrenWindow::ChildrenWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ChildrenWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("CHILDREN Menu");
}

ChildrenWindow::~ChildrenWindow()
{
    delete ui;
}
