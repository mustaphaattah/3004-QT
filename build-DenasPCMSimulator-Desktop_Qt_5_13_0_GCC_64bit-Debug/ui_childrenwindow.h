/********************************************************************************
** Form generated from reading UI file 'childrenwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILDRENWINDOW_H
#define UI_CHILDRENWINDOW_H

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

class Ui_ChildrenWindow
{
public:
    QProgressBar *batteryStatus;
    QPushButton *rightButton;
    QListWidget *mainMenuOptions;
    QPushButton *downButton;
    QPushButton *upButton;
    QPushButton *selectButton;
    QPushButton *leftButton;
    QPushButton *powerButton;
    QRadioButton *skinElectrode;
    QTextEdit *measuredValue;
    QLabel *measuredValueLabel;
    QTimeEdit *screeningTimer;
    QLabel *screeningTimerLabel;

    void setupUi(QDialog *ChildrenWindow)
    {
        if (ChildrenWindow->objectName().isEmpty())
            ChildrenWindow->setObjectName(QString::fromUtf8("ChildrenWindow"));
        ChildrenWindow->resize(258, 391);
        batteryStatus = new QProgressBar(ChildrenWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setEnabled(true);
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        rightButton = new QPushButton(ChildrenWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));
        mainMenuOptions = new QListWidget(ChildrenWindow);
        mainMenuOptions->setObjectName(QString::fromUtf8("mainMenuOptions"));
        mainMenuOptions->setGeometry(QRect(0, 30, 256, 221));
        downButton = new QPushButton(ChildrenWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        upButton = new QPushButton(ChildrenWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        upButton->setCheckable(false);
        selectButton = new QPushButton(ChildrenWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        leftButton = new QPushButton(ChildrenWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));
        powerButton = new QPushButton(ChildrenWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));
        skinElectrode = new QRadioButton(ChildrenWindow);
        skinElectrode->setObjectName(QString::fromUtf8("skinElectrode"));
        skinElectrode->setGeometry(QRect(140, 290, 106, 23));
        measuredValue = new QTextEdit(ChildrenWindow);
        measuredValue->setObjectName(QString::fromUtf8("measuredValue"));
        measuredValue->setGeometry(QRect(100, 120, 41, 31));
        measuredValueLabel = new QLabel(ChildrenWindow);
        measuredValueLabel->setObjectName(QString::fromUtf8("measuredValueLabel"));
        measuredValueLabel->setGeometry(QRect(20, 80, 321, 31));
        screeningTimer = new QTimeEdit(ChildrenWindow);
        screeningTimer->setObjectName(QString::fromUtf8("screeningTimer"));
        screeningTimer->setGeometry(QRect(60, 220, 118, 26));
        screeningTimer->setFrame(true);
        screeningTimer->setKeyboardTracking(true);
        screeningTimer->setTime(QTime(1, 0, 0));
        screeningTimerLabel = new QLabel(ChildrenWindow);
        screeningTimerLabel->setObjectName(QString::fromUtf8("screeningTimerLabel"));
        screeningTimerLabel->setGeometry(QRect(10, 200, 251, 20));

        retranslateUi(ChildrenWindow);

        QMetaObject::connectSlotsByName(ChildrenWindow);
    } // setupUi

    void retranslateUi(QDialog *ChildrenWindow)
    {
        ChildrenWindow->setWindowTitle(QCoreApplication::translate("ChildrenWindow", "Dialog", nullptr));
        rightButton->setText(QCoreApplication::translate("ChildrenWindow", "\342\206\222", nullptr));
        downButton->setText(QCoreApplication::translate("ChildrenWindow", "\342\206\223", nullptr));
        upButton->setText(QCoreApplication::translate("ChildrenWindow", "\342\206\221", nullptr));
        selectButton->setText(QCoreApplication::translate("ChildrenWindow", "Select", nullptr));
        leftButton->setText(QCoreApplication::translate("ChildrenWindow", "\342\206\220 ", nullptr));
        powerButton->setText(QCoreApplication::translate("ChildrenWindow", "Power", nullptr));
        skinElectrode->setText(QCoreApplication::translate("ChildrenWindow", "Skin On/Off", nullptr));
        measuredValue->setHtml(QCoreApplication::translate("ChildrenWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        measuredValueLabel->setText(QCoreApplication::translate("ChildrenWindow", "\316\224LT (after every 5s of treatment)", nullptr));
        screeningTimerLabel->setText(QCoreApplication::translate("ChildrenWindow", "Screening timer (only works on skin)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChildrenWindow: public Ui_ChildrenWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDRENWINDOW_H
