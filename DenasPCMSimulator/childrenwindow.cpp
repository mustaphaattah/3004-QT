#include "childrenwindow.h"
#include "mainwindow.h"
#include "ui
using namespace std;

ChildrenWindow::ChildrenWindow(QWidget *parent):
    QMainWindow (parent),
    ui(new UI::ChildrenWindow)
{
    ui->setupUi(this);
    ui->batteryStatus->setValue(batteryLevel);
    ui->upButton->setEnabled(false);
    ui->downButton->setEnabled(false);
    ui->skinElectrode->setChecked(false);
}

ChildrenWindow::~ChildrenWindow()
{
    delete ui;
}

int ChildrenWindow::
