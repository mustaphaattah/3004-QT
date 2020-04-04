/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *okButton;
    QPushButton *powerButton;
    QListWidget *mainMenu;
    QPushButton *backButton;
    QPushButton *menuButton;
    QProgressBar *batteryStatus;
    QTextEdit *powerLevel;
    QLabel *powerIndicator;
    QLabel *treatmentMin;
    QLabel *treatmentSec;
    QLabel *colon;
    QTimeEdit *medTimer;
    QLabel *medTimerLabel;
    QTimeEdit *screeningTimer;
    QLabel *screeningTimerLabel;
    QLabel *measuredValueLabel;
    QTextEdit *measuredValue;
    QRadioButton *skinElectrode;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(270, 337);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        leftButton = new QPushButton(centralWidget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(80, 200, 31, 25));
        rightButton = new QPushButton(centralWidget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(160, 200, 31, 25));
        upButton = new QPushButton(centralWidget);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(120, 170, 31, 25));
        downButton = new QPushButton(centralWidget);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(120, 230, 31, 25));
        okButton = new QPushButton(centralWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(120, 200, 31, 25));
        powerButton = new QPushButton(centralWidget);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(100, 270, 71, 25));
        mainMenu = new QListWidget(centralWidget);
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setGeometry(QRect(10, 30, 251, 121));
        backButton = new QPushButton(centralWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(40, 160, 51, 25));
        menuButton = new QPushButton(centralWidget);
        menuButton->setObjectName(QString::fromUtf8("menuButton"));
        menuButton->setGeometry(QRect(180, 160, 51, 25));
        batteryStatus = new QProgressBar(centralWidget);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setGeometry(QRect(10, 0, 251, 23));
        batteryStatus->setValue(24);
        powerLevel = new QTextEdit(centralWidget);
        powerLevel->setObjectName(QString::fromUtf8("powerLevel"));
        powerLevel->setGeometry(QRect(110, 60, 31, 31));
        powerIndicator = new QLabel(centralWidget);
        powerIndicator->setObjectName(QString::fromUtf8("powerIndicator"));
        powerIndicator->setGeometry(QRect(90, 40, 91, 17));
        treatmentMin = new QLabel(centralWidget);
        treatmentMin->setObjectName(QString::fromUtf8("treatmentMin"));
        treatmentMin->setGeometry(QRect(100, 100, 21, 17));
        treatmentSec = new QLabel(centralWidget);
        treatmentSec->setObjectName(QString::fromUtf8("treatmentSec"));
        treatmentSec->setGeometry(QRect(130, 100, 21, 17));
        colon = new QLabel(centralWidget);
        colon->setObjectName(QString::fromUtf8("colon"));
        colon->setGeometry(QRect(120, 100, 16, 17));
        medTimer = new QTimeEdit(centralWidget);
        medTimer->setObjectName(QString::fromUtf8("medTimer"));
        medTimer->setGeometry(QRect(80, 80, 118, 26));
        medTimer->setFrame(true);
        medTimer->setKeyboardTracking(true);
        medTimer->setTime(QTime(1, 0, 0));
        medTimerLabel = new QLabel(centralWidget);
        medTimerLabel->setObjectName(QString::fromUtf8("medTimerLabel"));
        medTimerLabel->setGeometry(QRect(30, 60, 231, 20));
        screeningTimer = new QTimeEdit(centralWidget);
        screeningTimer->setObjectName(QString::fromUtf8("screeningTimer"));
        screeningTimer->setGeometry(QRect(80, 50, 118, 26));
        screeningTimer->setFrame(true);
        screeningTimer->setKeyboardTracking(true);
        screeningTimer->setTime(QTime(1, 0, 0));
        screeningTimerLabel = new QLabel(centralWidget);
        screeningTimerLabel->setObjectName(QString::fromUtf8("screeningTimerLabel"));
        screeningTimerLabel->setGeometry(QRect(20, 30, 251, 20));
        measuredValueLabel = new QLabel(centralWidget);
        measuredValueLabel->setObjectName(QString::fromUtf8("measuredValueLabel"));
        measuredValueLabel->setGeometry(QRect(30, 80, 321, 31));
        measuredValue = new QTextEdit(centralWidget);
        measuredValue->setObjectName(QString::fromUtf8("measuredValue"));
        measuredValue->setGeometry(QRect(110, 110, 41, 31));
        skinElectrode = new QRadioButton(centralWidget);
        skinElectrode->setObjectName(QString::fromUtf8("skinElectrode"));
        skinElectrode->setGeometry(QRect(10, 240, 106, 23));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "\342\206\220 ", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        upButton->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        downButton->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        okButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        powerButton->setText(QCoreApplication::translate("MainWindow", "POWER", nullptr));
        backButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        menuButton->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        powerIndicator->setText(QCoreApplication::translate("MainWindow", "Power Level", nullptr));
        treatmentMin->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        treatmentSec->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        colon->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        medTimerLabel->setText(QCoreApplication::translate("MainWindow", "MED timer (only operates on skin)", nullptr));
        screeningTimerLabel->setText(QCoreApplication::translate("MainWindow", "Screening timer (only works on skin)", nullptr));
        measuredValueLabel->setText(QCoreApplication::translate("MainWindow", "\316\224LT (after every 5s of treatment)", nullptr));
        measuredValue->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        skinElectrode->setText(QCoreApplication::translate("MainWindow", "Skin On/Off", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
