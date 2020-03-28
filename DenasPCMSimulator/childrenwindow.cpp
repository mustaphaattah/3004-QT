#include "childrenwindow.h"
#include "ui_childrenwindow.h"

bool childrenDoctor = false;

ChildrenWindow::ChildrenWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ChildrenWindow)
{
    ui->setupUi(this);
    ui->leftButton->setEnabled(false);
    ui->rightButton->setEnabled(false);
    selectionIndex = 0;


    for (int i = 0; i < sizeof (childrenOptions); ++i) {
        ui->childrenMenu->addItem(childrenOptions[i]);
    }

}

ChildrenWindow::~ChildrenWindow()
{
    delete ui;
}


void ChildrenWindow::on_selectButton_clicked()
{
    menuOptionHandler(selectionIndex);
}

void ChildrenWindow::on_powerButton_clicked()
{
    exit(0);
}

void ChildrenWindow::on_upButton_clicked()
{
    if(selectionIndex == 0){
        selectionIndex = sizeof (childrenOptions);
    } else {
    selectionIndex +=1;
    }
    ui->childrenMenu->setCurrentRow(selectionIndex);
    ui->childrenMenu->setFocus();
}

void ChildrenWindow::on_downButton_clicked()
{
    if(selectionIndex == sizeof (childrenOptions)){
        selectionIndex = 0;
    } else {
    selectionIndex +=1;
    }
    ui->childrenMenu->setCurrentRow(selectionIndex);
    ui->childrenMenu->setFocus();
}

void ChildrenWindow::menuOptionHandler(int index)
{
    if(index == 0)
        setChildrenDoctor(false);
    else
        setChildrenDoctor(true);
}

void ChildrenWindow::setChildrenDoctor(bool status)
{
    childrenDoctor = status;
}

bool ChildrenWindow::getChildrenDoctor()
{
    return childrenDoctor;
}
