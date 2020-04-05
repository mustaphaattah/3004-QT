#include "screeningwindow.h"
#include "ui_screeningwindow.h"
#include "mainwindow.h"

#include <QTimer>

QTimer *screeningBatteryUpdateTimer = new QTimer();
QTimer *screenModeTimer = new QTimer();
QTimer *scrClockTimer = new QTimer();

QTime screenTreatmentTime (0,10,0);
QTime scrCurrentTimeNow;

int counter;
ScreeningWindow::ScreeningWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScreeningWindow)
{
    ui->setupUi(this);
    connect(scrClockTimer,SIGNAL(timeout()),this,SLOT(scrUpdateClock()));
    scrClockTimer->start(1000);
    scrCurrentTimeNow = QTime().currentTime();
    this->setWindowTitle("SCREENING MODE");
    ui->batteryStatus->setValue(batteryLevel);
    ui->screeningTimer->setTime(screenTreatmentTime);
    connect(screeningBatteryUpdateTimer,SIGNAL(timeout()),this,SLOT(fetchBatteryLife()));
    screeningBatteryUpdateTimer->start(2500);
    connect(screenModeTimer,SIGNAL(timeout()),this,SLOT(updateScreenTimer()));
    ui->upButton->setEnabled(false);
    ui->downButton->setEnabled(false);
    ui->rightButton->setEnabled(false);
    ui->leftButton->setEnabled(false);
    ui->selectButton->setText("Back");
    counter = 0;

}

ScreeningWindow::~ScreeningWindow()
{
    delete ui;
}

void ScreeningWindow::fetchBatteryLife() {
    ui->batteryStatus->setValue(batteryLevel);
}

void ScreeningWindow::on_skinElectrode_clicked()
{
    if (screenModeTimer->isActive()) {
        screenModeTimer->stop();
    } else {
        screenModeTimer->start(1000);
    }
}

void ScreeningWindow::updateScreenTimer(){
    screenTreatmentTime = screenTreatmentTime.addSecs(1);

    if (counter == 5) {
        ui->measuredValue->setText(QString::number(qrand() % ((100 + 1) - 0) + 0));
        counter = 0;
    }

    ui->screeningTimer->setTime(screenTreatmentTime);
    counter +=1;
}

void ScreeningWindow::on_powerButton_clicked()
{
    exit(0);
}


void ScreeningWindow::on_selectButton_clicked()
{
    screenModeTimer->stop();
    this->close();
}

void ScreeningWindow::scrUpdateClock()
{
    scrCurrentTimeNow = scrCurrentTimeNow.addSecs(1);
    ui->currentTime->setTime(scrCurrentTimeNow);

}
