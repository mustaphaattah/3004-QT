#include "batterywarningdialog.h"
#include "ui_batterywarningdialog.h"

BatteryWarningDialog::BatteryWarningDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BatteryWarningDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Low Battery!!!");
}

BatteryWarningDialog::~BatteryWarningDialog()
{
    delete ui;
}

void BatteryWarningDialog::on_okayButton_clicked()
{
    exit(0);
}
