/********************************************************************************
** Form generated from reading UI file 'screeningwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENINGWINDOW_H
#define UI_SCREENINGWINDOW_H

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

class Ui_ScreeningWindow
{
public:
    QPushButton *downButton;
    QPushButton *selectButton;
    QPushButton *leftButton;
    QTextEdit *measuredValue;
    QProgressBar *batteryStatus;
    QLabel *measuredValueLabel;
    QPushButton *upButton;
    QPushButton *powerButton;
    QPushButton *rightButton;
    QRadioButton *skinElectrode;
    QListWidget *mainMenuOptions;
    QLabel *screeningTimerLabel;
    QTimeEdit *screeningTimer;

    void setupUi(QDialog *ScreeningWindow)
    {
        if (ScreeningWindow->objectName().isEmpty())
            ScreeningWindow->setObjectName(QString::fromUtf8("ScreeningWindow"));
        ScreeningWindow->resize(259, 391);
        downButton = new QPushButton(ScreeningWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        selectButton = new QPushButton(ScreeningWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        leftButton = new QPushButton(ScreeningWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));
        measuredValue = new QTextEdit(ScreeningWindow);
        measuredValue->setObjectName(QString::fromUtf8("measuredValue"));
        measuredValue->setGeometry(QRect(100, 120, 41, 31));
        batteryStatus = new QProgressBar(ScreeningWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setEnabled(true);
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        measuredValueLabel = new QLabel(ScreeningWindow);
        measuredValueLabel->setObjectName(QString::fromUtf8("measuredValueLabel"));
        measuredValueLabel->setGeometry(QRect(20, 80, 321, 31));
        upButton = new QPushButton(ScreeningWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        upButton->setCheckable(false);
        powerButton = new QPushButton(ScreeningWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));
        rightButton = new QPushButton(ScreeningWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));
        skinElectrode = new QRadioButton(ScreeningWindow);
        skinElectrode->setObjectName(QString::fromUtf8("skinElectrode"));
        skinElectrode->setGeometry(QRect(140, 290, 106, 23));
        mainMenuOptions = new QListWidget(ScreeningWindow);
        mainMenuOptions->setObjectName(QString::fromUtf8("mainMenuOptions"));
        mainMenuOptions->setGeometry(QRect(0, 30, 256, 221));
        screeningTimerLabel = new QLabel(ScreeningWindow);
        screeningTimerLabel->setObjectName(QString::fromUtf8("screeningTimerLabel"));
        screeningTimerLabel->setGeometry(QRect(10, 200, 251, 20));
        screeningTimer = new QTimeEdit(ScreeningWindow);
        screeningTimer->setObjectName(QString::fromUtf8("screeningTimer"));
        screeningTimer->setGeometry(QRect(60, 220, 118, 26));
        screeningTimer->setFrame(true);
        screeningTimer->setKeyboardTracking(true);
        screeningTimer->setTime(QTime(1, 0, 0));
        downButton->raise();
        selectButton->raise();
        leftButton->raise();
        batteryStatus->raise();
        upButton->raise();
        powerButton->raise();
        rightButton->raise();
        skinElectrode->raise();
        mainMenuOptions->raise();
        screeningTimerLabel->raise();
        screeningTimer->raise();
        measuredValueLabel->raise();
        measuredValue->raise();

        retranslateUi(ScreeningWindow);

        QMetaObject::connectSlotsByName(ScreeningWindow);
    } // setupUi

    void retranslateUi(QDialog *ScreeningWindow)
    {
        ScreeningWindow->setWindowTitle(QCoreApplication::translate("ScreeningWindow", "Dialog", nullptr));
        downButton->setText(QCoreApplication::translate("ScreeningWindow", "\342\206\223", nullptr));
        selectButton->setText(QCoreApplication::translate("ScreeningWindow", "Select", nullptr));
        leftButton->setText(QCoreApplication::translate("ScreeningWindow", "\342\206\220 ", nullptr));
        measuredValue->setHtml(QCoreApplication::translate("ScreeningWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        measuredValueLabel->setText(QCoreApplication::translate("ScreeningWindow", "\316\224LT (after every 5s of treatment)", nullptr));
        upButton->setText(QCoreApplication::translate("ScreeningWindow", "\342\206\221", nullptr));
        powerButton->setText(QCoreApplication::translate("ScreeningWindow", "Power", nullptr));
        rightButton->setText(QCoreApplication::translate("ScreeningWindow", "\342\206\222", nullptr));
        skinElectrode->setText(QCoreApplication::translate("ScreeningWindow", "Skin On/Off", nullptr));
        screeningTimerLabel->setText(QCoreApplication::translate("ScreeningWindow", "Screening timer (only works on skin)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreeningWindow: public Ui_ScreeningWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENINGWINDOW_H
