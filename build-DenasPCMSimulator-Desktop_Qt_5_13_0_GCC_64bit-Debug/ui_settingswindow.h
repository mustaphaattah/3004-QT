/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

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

class Ui_settingsWindow
{
public:
    QPushButton *leftButton;
    QListWidget *mainMenuOptions;
    QPushButton *downButton;
    QProgressBar *batteryStatus;
    QLabel *screeningTimerLabel;
    QPushButton *powerButton;
    QRadioButton *skinElectrode;
    QPushButton *selectButton;
    QTextEdit *measuredValue;
    QPushButton *rightButton;
    QLabel *measuredValueLabel;
    QTimeEdit *screeningTimer;
    QPushButton *upButton;

    void setupUi(QDialog *settingsWindow)
    {
        if (settingsWindow->objectName().isEmpty())
            settingsWindow->setObjectName(QString::fromUtf8("settingsWindow"));
        settingsWindow->resize(258, 391);
        leftButton = new QPushButton(settingsWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));
        mainMenuOptions = new QListWidget(settingsWindow);
        mainMenuOptions->setObjectName(QString::fromUtf8("mainMenuOptions"));
        mainMenuOptions->setGeometry(QRect(0, 30, 256, 221));
        downButton = new QPushButton(settingsWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        batteryStatus = new QProgressBar(settingsWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setEnabled(true);
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        screeningTimerLabel = new QLabel(settingsWindow);
        screeningTimerLabel->setObjectName(QString::fromUtf8("screeningTimerLabel"));
        screeningTimerLabel->setGeometry(QRect(10, 200, 251, 20));
        powerButton = new QPushButton(settingsWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));
        skinElectrode = new QRadioButton(settingsWindow);
        skinElectrode->setObjectName(QString::fromUtf8("skinElectrode"));
        skinElectrode->setGeometry(QRect(140, 290, 106, 23));
        selectButton = new QPushButton(settingsWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        measuredValue = new QTextEdit(settingsWindow);
        measuredValue->setObjectName(QString::fromUtf8("measuredValue"));
        measuredValue->setGeometry(QRect(100, 120, 41, 31));
        rightButton = new QPushButton(settingsWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));
        measuredValueLabel = new QLabel(settingsWindow);
        measuredValueLabel->setObjectName(QString::fromUtf8("measuredValueLabel"));
        measuredValueLabel->setGeometry(QRect(20, 80, 321, 31));
        screeningTimer = new QTimeEdit(settingsWindow);
        screeningTimer->setObjectName(QString::fromUtf8("screeningTimer"));
        screeningTimer->setGeometry(QRect(60, 220, 118, 26));
        screeningTimer->setFrame(true);
        screeningTimer->setKeyboardTracking(true);
        screeningTimer->setTime(QTime(1, 0, 0));
        upButton = new QPushButton(settingsWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        upButton->setCheckable(false);

        retranslateUi(settingsWindow);

        QMetaObject::connectSlotsByName(settingsWindow);
    } // setupUi

    void retranslateUi(QDialog *settingsWindow)
    {
        settingsWindow->setWindowTitle(QCoreApplication::translate("settingsWindow", "Dialog", nullptr));
        leftButton->setText(QCoreApplication::translate("settingsWindow", "\342\206\220 ", nullptr));
        downButton->setText(QCoreApplication::translate("settingsWindow", "\342\206\223", nullptr));
        screeningTimerLabel->setText(QCoreApplication::translate("settingsWindow", "Screening timer (only works on skin)", nullptr));
        powerButton->setText(QCoreApplication::translate("settingsWindow", "Power", nullptr));
        skinElectrode->setText(QCoreApplication::translate("settingsWindow", "Skin On/Off", nullptr));
        selectButton->setText(QCoreApplication::translate("settingsWindow", "Select", nullptr));
        measuredValue->setHtml(QCoreApplication::translate("settingsWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        rightButton->setText(QCoreApplication::translate("settingsWindow", "\342\206\222", nullptr));
        measuredValueLabel->setText(QCoreApplication::translate("settingsWindow", "\316\224LT (after every 5s of treatment)", nullptr));
        upButton->setText(QCoreApplication::translate("settingsWindow", "\342\206\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settingsWindow: public Ui_settingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
