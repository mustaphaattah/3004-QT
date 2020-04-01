/********************************************************************************
** Form generated from reading UI file 'clockwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCKWINDOW_H
#define UI_CLOCKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ClockWindow
{
public:
    QListWidget *clockMenu;
    QPushButton *selectButton;
    QPushButton *upButton;
    QPushButton *rightButton;
    QProgressBar *batteryStatus;
    QPushButton *powerButton;
    QLabel *clockLabel;
    QPushButton *downButton;
    QPushButton *leftButton;
    QLabel *timeLabel;

    void setupUi(QDialog *ClockWindow)
    {
        if (ClockWindow->objectName().isEmpty())
            ClockWindow->setObjectName(QString::fromUtf8("ClockWindow"));
        ClockWindow->resize(260, 400);
        clockMenu = new QListWidget(ClockWindow);
        clockMenu->setObjectName(QString::fromUtf8("clockMenu"));
        clockMenu->setGeometry(QRect(0, 30, 256, 221));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        clockMenu->setFont(font);
        selectButton = new QPushButton(ClockWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        upButton = new QPushButton(ClockWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        upButton->setCheckable(false);
        rightButton = new QPushButton(ClockWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));
        batteryStatus = new QProgressBar(ClockWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setEnabled(true);
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        powerButton = new QPushButton(ClockWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));
        clockLabel = new QLabel(ClockWindow);
        clockLabel->setObjectName(QString::fromUtf8("clockLabel"));
        clockLabel->setGeometry(QRect(75, 80, 111, 31));
        QFont font1;
        font1.setPointSize(20);
        clockLabel->setFont(font1);
        clockLabel->setAlignment(Qt::AlignCenter);
        downButton = new QPushButton(ClockWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        leftButton = new QPushButton(ClockWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));
        timeLabel = new QLabel(ClockWindow);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(80, 130, 100, 30));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        timeLabel->setFont(font2);
        timeLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(ClockWindow);

        QMetaObject::connectSlotsByName(ClockWindow);
    } // setupUi

    void retranslateUi(QDialog *ClockWindow)
    {
        ClockWindow->setWindowTitle(QCoreApplication::translate("ClockWindow", "Dialog", nullptr));
        selectButton->setText(QCoreApplication::translate("ClockWindow", "Select", nullptr));
        upButton->setText(QCoreApplication::translate("ClockWindow", "\342\206\221", nullptr));
        rightButton->setText(QCoreApplication::translate("ClockWindow", "\342\206\222", nullptr));
        powerButton->setText(QCoreApplication::translate("ClockWindow", "Power", nullptr));
        clockLabel->setText(QCoreApplication::translate("ClockWindow", "CLOCK", nullptr));
        downButton->setText(QCoreApplication::translate("ClockWindow", "\342\206\223", nullptr));
        leftButton->setText(QCoreApplication::translate("ClockWindow", "\342\206\220 ", nullptr));
        timeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClockWindow: public Ui_ClockWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCKWINDOW_H
