/********************************************************************************
** Form generated from reading UI file 'medwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDWINDOW_H
#define UI_MEDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_MedWindow
{
public:
    QPushButton *leftButton;
    QPushButton *downButton;
    QPushButton *selectButton;
    QPushButton *powerButton;
    QListWidget *mainMenuOptions;
    QPushButton *rightButton;
    QProgressBar *batteryStatus;
    QPushButton *upButton;
    QRadioButton *skinElectrode;
    QLabel *intensityLevelLabel;
    QLabel *medTimerLabel;
    QTimeEdit *medTimer;
    QTextEdit *intensityIndicator;

    void setupUi(QDialog *MedWindow)
    {
        if (MedWindow->objectName().isEmpty())
            MedWindow->setObjectName(QString::fromUtf8("MedWindow"));
        MedWindow->resize(258, 391);
        leftButton = new QPushButton(MedWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));
        downButton = new QPushButton(MedWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        selectButton = new QPushButton(MedWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        powerButton = new QPushButton(MedWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));
        mainMenuOptions = new QListWidget(MedWindow);
        mainMenuOptions->setObjectName(QString::fromUtf8("mainMenuOptions"));
        mainMenuOptions->setGeometry(QRect(0, 30, 256, 221));
        rightButton = new QPushButton(MedWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));
        batteryStatus = new QProgressBar(MedWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setEnabled(true);
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        upButton = new QPushButton(MedWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        upButton->setCheckable(false);
        skinElectrode = new QRadioButton(MedWindow);
        skinElectrode->setObjectName(QString::fromUtf8("skinElectrode"));
        skinElectrode->setGeometry(QRect(140, 290, 106, 23));
        intensityLevelLabel = new QLabel(MedWindow);
        intensityLevelLabel->setObjectName(QString::fromUtf8("intensityLevelLabel"));
        intensityLevelLabel->setGeometry(QRect(80, 80, 111, 31));
        medTimerLabel = new QLabel(MedWindow);
        medTimerLabel->setObjectName(QString::fromUtf8("medTimerLabel"));
        medTimerLabel->setGeometry(QRect(20, 200, 231, 20));
        medTimer = new QTimeEdit(MedWindow);
        medTimer->setObjectName(QString::fromUtf8("medTimer"));
        medTimer->setGeometry(QRect(60, 220, 118, 26));
        medTimer->setFrame(true);
        medTimer->setKeyboardTracking(true);
        medTimer->setTime(QTime(1, 0, 0));
        intensityIndicator = new QTextEdit(MedWindow);
        intensityIndicator->setObjectName(QString::fromUtf8("intensityIndicator"));
        intensityIndicator->setGeometry(QRect(100, 120, 41, 31));

        retranslateUi(MedWindow);

        QMetaObject::connectSlotsByName(MedWindow);
    } // setupUi

    void retranslateUi(QDialog *MedWindow)
    {
        MedWindow->setWindowTitle(QCoreApplication::translate("MedWindow", "MED MODE", nullptr));
        leftButton->setText(QCoreApplication::translate("MedWindow", "\342\206\220 ", nullptr));
        downButton->setText(QCoreApplication::translate("MedWindow", "\342\206\223", nullptr));
        selectButton->setText(QCoreApplication::translate("MedWindow", "Select", nullptr));
        powerButton->setText(QCoreApplication::translate("MedWindow", "Power", nullptr));
        rightButton->setText(QCoreApplication::translate("MedWindow", "\342\206\222", nullptr));
        upButton->setText(QCoreApplication::translate("MedWindow", "\342\206\221", nullptr));
        skinElectrode->setText(QCoreApplication::translate("MedWindow", "Skin On/Off", nullptr));
        intensityLevelLabel->setText(QCoreApplication::translate("MedWindow", "Intensity Level", nullptr));
        medTimerLabel->setText(QCoreApplication::translate("MedWindow", "MED timer (only operates on skin)", nullptr));
        intensityIndicator->setHtml(QCoreApplication::translate("MedWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MedWindow: public Ui_MedWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDWINDOW_H
