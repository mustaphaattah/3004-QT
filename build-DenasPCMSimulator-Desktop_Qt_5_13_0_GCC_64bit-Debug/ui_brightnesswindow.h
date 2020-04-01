/********************************************************************************
** Form generated from reading UI file 'brightnesswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRIGHTNESSWINDOW_H
#define UI_BRIGHTNESSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_BrightnessWindow
{
public:
    QProgressBar *batteryStatus;
    QPushButton *leftButton;
    QPushButton *powerButton;
    QListWidget *brightnessMenu;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *selectButton;
    QPushButton *rightButton;
    QTextEdit *brightnessIndicator;
    QLabel *brightnessLabel;
    QProgressBar *brightnessBar;

    void setupUi(QDialog *BrightnessWindow)
    {
        if (BrightnessWindow->objectName().isEmpty())
            BrightnessWindow->setObjectName(QString::fromUtf8("BrightnessWindow"));
        BrightnessWindow->resize(260, 400);
        batteryStatus = new QProgressBar(BrightnessWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setEnabled(true);
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        leftButton = new QPushButton(BrightnessWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));
        powerButton = new QPushButton(BrightnessWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));
        brightnessMenu = new QListWidget(BrightnessWindow);
        brightnessMenu->setObjectName(QString::fromUtf8("brightnessMenu"));
        brightnessMenu->setGeometry(QRect(0, 30, 256, 221));
        upButton = new QPushButton(BrightnessWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        upButton->setCheckable(false);
        downButton = new QPushButton(BrightnessWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        selectButton = new QPushButton(BrightnessWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        rightButton = new QPushButton(BrightnessWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));
        brightnessIndicator = new QTextEdit(BrightnessWindow);
        brightnessIndicator->setObjectName(QString::fromUtf8("brightnessIndicator"));
        brightnessIndicator->setGeometry(QRect(90, 120, 80, 60));
        QFont font;
        font.setPointSize(30);
        brightnessIndicator->setFont(font);
        brightnessLabel = new QLabel(BrightnessWindow);
        brightnessLabel->setObjectName(QString::fromUtf8("brightnessLabel"));
        brightnessLabel->setGeometry(QRect(75, 80, 111, 31));
        QFont font1;
        font1.setPointSize(15);
        brightnessLabel->setFont(font1);
        brightnessBar = new QProgressBar(BrightnessWindow);
        brightnessBar->setObjectName(QString::fromUtf8("brightnessBar"));
        brightnessBar->setGeometry(QRect(40, 200, 181, 23));
        brightnessBar->setMaximum(50);
        brightnessBar->setValue(24);

        retranslateUi(BrightnessWindow);

        QMetaObject::connectSlotsByName(BrightnessWindow);
    } // setupUi

    void retranslateUi(QDialog *BrightnessWindow)
    {
        BrightnessWindow->setWindowTitle(QCoreApplication::translate("BrightnessWindow", "Dialog", nullptr));
        leftButton->setText(QCoreApplication::translate("BrightnessWindow", "\342\206\220 ", nullptr));
        powerButton->setText(QCoreApplication::translate("BrightnessWindow", "Power", nullptr));
        upButton->setText(QCoreApplication::translate("BrightnessWindow", "\342\206\221", nullptr));
        downButton->setText(QCoreApplication::translate("BrightnessWindow", "\342\206\223", nullptr));
        selectButton->setText(QCoreApplication::translate("BrightnessWindow", "Select", nullptr));
        rightButton->setText(QCoreApplication::translate("BrightnessWindow", "\342\206\222", nullptr));
        brightnessIndicator->setHtml(QCoreApplication::translate("BrightnessWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:30pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p></body></html>", nullptr));
        brightnessLabel->setText(QCoreApplication::translate("BrightnessWindow", "Brightness", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrightnessWindow: public Ui_BrightnessWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRIGHTNESSWINDOW_H
