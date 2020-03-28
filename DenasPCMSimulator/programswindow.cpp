#include "programswindow.h"
#include "ui_programswindow.h"

ProgramsWindow::ProgramsWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::ProgramsWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("PROGRAMS Menu");
}

ProgramsWindow::~ProgramsWindow()
{
    delete ui;
}
