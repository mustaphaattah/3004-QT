#include "frequencywindow.h"
#include "ui_frequencywindow.h"

FrequencyWindow::FrequencyWindow(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::FrequencyWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("FREQUENCY Menu");
}

FrequencyWindow::~FrequencyWindow()
{
    delete ui;
}
