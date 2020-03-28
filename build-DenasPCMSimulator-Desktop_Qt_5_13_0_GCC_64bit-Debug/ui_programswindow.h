/********************************************************************************
** Form generated from reading UI file 'programswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMSWINDOW_H
#define UI_PROGRAMSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_ProgramsWindow
{
public:
    QPushButton *upButton;
    QListWidget *childrenMenu;
    QPushButton *rightButton;
    QPushButton *powerButton;
    QPushButton *downButton;
    QPushButton *selectButton;
    QProgressBar *batteryStatus;
    QPushButton *leftButton;
    QRadioButton *skinElectrode;

    void setupUi(QDialog *ProgramsWindow)
    {
        if (ProgramsWindow->objectName().isEmpty())
            ProgramsWindow->setObjectName(QString::fromUtf8("ProgramsWindow"));
        ProgramsWindow->resize(260, 392);
        upButton = new QPushButton(ProgramsWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        upButton->setCheckable(false);
        childrenMenu = new QListWidget(ProgramsWindow);
        childrenMenu->setObjectName(QString::fromUtf8("childrenMenu"));
        childrenMenu->setGeometry(QRect(0, 30, 256, 221));
        rightButton = new QPushButton(ProgramsWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));
        powerButton = new QPushButton(ProgramsWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));
        downButton = new QPushButton(ProgramsWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        selectButton = new QPushButton(ProgramsWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        batteryStatus = new QProgressBar(ProgramsWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setEnabled(true);
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        leftButton = new QPushButton(ProgramsWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));
        skinElectrode = new QRadioButton(ProgramsWindow);
        skinElectrode->setObjectName(QString::fromUtf8("skinElectrode"));
        skinElectrode->setGeometry(QRect(140, 290, 106, 23));

        retranslateUi(ProgramsWindow);

        QMetaObject::connectSlotsByName(ProgramsWindow);
    } // setupUi

    void retranslateUi(QDialog *ProgramsWindow)
    {
        ProgramsWindow->setWindowTitle(QCoreApplication::translate("ProgramsWindow", "Dialog", nullptr));
        upButton->setText(QCoreApplication::translate("ProgramsWindow", "\342\206\221", nullptr));
        rightButton->setText(QCoreApplication::translate("ProgramsWindow", "\342\206\222", nullptr));
        powerButton->setText(QCoreApplication::translate("ProgramsWindow", "Power", nullptr));
        downButton->setText(QCoreApplication::translate("ProgramsWindow", "\342\206\223", nullptr));
        selectButton->setText(QCoreApplication::translate("ProgramsWindow", "Select", nullptr));
        leftButton->setText(QCoreApplication::translate("ProgramsWindow", "\342\206\220 ", nullptr));
        skinElectrode->setText(QCoreApplication::translate("ProgramsWindow", "Skin On/Off", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgramsWindow: public Ui_ProgramsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMSWINDOW_H
