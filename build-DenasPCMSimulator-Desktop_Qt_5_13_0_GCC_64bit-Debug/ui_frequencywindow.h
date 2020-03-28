/********************************************************************************
** Form generated from reading UI file 'frequencywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FREQUENCYWINDOW_H
#define UI_FREQUENCYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_FrequencyWindow
{
public:
    QPushButton *leftButton;
    QRadioButton *skinElectrode;
    QPushButton *selectButton;
    QPushButton *upButton;
    QPushButton *rightButton;
    QListWidget *childrenMenu;
    QPushButton *downButton;
    QProgressBar *batteryStatus;
    QPushButton *powerButton;

    void setupUi(QDialog *FrequencyWindow)
    {
        if (FrequencyWindow->objectName().isEmpty())
            FrequencyWindow->setObjectName(QString::fromUtf8("FrequencyWindow"));
        FrequencyWindow->resize(259, 391);
        leftButton = new QPushButton(FrequencyWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));
        skinElectrode = new QRadioButton(FrequencyWindow);
        skinElectrode->setObjectName(QString::fromUtf8("skinElectrode"));
        skinElectrode->setGeometry(QRect(140, 290, 106, 23));
        selectButton = new QPushButton(FrequencyWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        upButton = new QPushButton(FrequencyWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        upButton->setCheckable(false);
        rightButton = new QPushButton(FrequencyWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));
        childrenMenu = new QListWidget(FrequencyWindow);
        childrenMenu->setObjectName(QString::fromUtf8("childrenMenu"));
        childrenMenu->setGeometry(QRect(0, 30, 256, 221));
        downButton = new QPushButton(FrequencyWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        batteryStatus = new QProgressBar(FrequencyWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setEnabled(true);
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        powerButton = new QPushButton(FrequencyWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));

        retranslateUi(FrequencyWindow);

        QMetaObject::connectSlotsByName(FrequencyWindow);
    } // setupUi

    void retranslateUi(QDialog *FrequencyWindow)
    {
        FrequencyWindow->setWindowTitle(QCoreApplication::translate("FrequencyWindow", "Dialog", nullptr));
        leftButton->setText(QCoreApplication::translate("FrequencyWindow", "\342\206\220 ", nullptr));
        skinElectrode->setText(QCoreApplication::translate("FrequencyWindow", "Skin On/Off", nullptr));
        selectButton->setText(QCoreApplication::translate("FrequencyWindow", "Select", nullptr));
        upButton->setText(QCoreApplication::translate("FrequencyWindow", "\342\206\221", nullptr));
        rightButton->setText(QCoreApplication::translate("FrequencyWindow", "\342\206\222", nullptr));
        downButton->setText(QCoreApplication::translate("FrequencyWindow", "\342\206\223", nullptr));
        powerButton->setText(QCoreApplication::translate("FrequencyWindow", "Power", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrequencyWindow: public Ui_FrequencyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FREQUENCYWINDOW_H
