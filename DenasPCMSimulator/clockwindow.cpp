#include "clockwindow.h"
#include "ui_clockwindow.h"

#include <QDateTime>
#include <iostream>


ClockWindow::ClockWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClockWindow)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(clockFunction()));
    timer->start(1000);

    ui->upButton->setEnabled(false);
    ui->downButton->setEnabled(false);
    ui->rightButton->setEnabled(false);
    ui->leftButton->setEnabled(false);
    clockFunction();

}

ClockWindow::~ClockWindow()
{
    delete ui;
}

void ClockWindow::on_selectButton_clicked()
{
    close();
}

void ClockWindow::clockFunction(){
    QTime time = QTime::currentTime();
    QString timeText = time.toString("hh:mm:ss");
    ui->timeLabel->setText(timeText);
    std::cout<<"tick"<<std::endl;

}



void ClockWindow::on_powerButton_clicked()
{
    exit(0);
}
