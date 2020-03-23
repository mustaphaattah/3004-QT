#include "batterywarningdialog.h"
#include "ui_batterywarningdialog.h"

BatteryWarningDialog::BatteryWarningDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BatteryWarningDialog)
{
    ui->setupUi(this);
}

BatteryWarningDialog::~BatteryWarningDialog()
{
    delete ui;
}
