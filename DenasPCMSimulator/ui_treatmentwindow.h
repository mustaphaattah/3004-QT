/********************************************************************************
** Form generated from reading UI file 'treatmentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREATMENTWINDOW_H
#define UI_TREATMENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_TreatmentWindow
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
    QLabel *TreatmentMin;
    QTextEdit *intensityIndicator;
    QLabel *TreatmentSec;

    void setupUi(QDialog *TreatmentWindow)
    {
        if (TreatmentWindow->objectName().isEmpty())
            TreatmentWindow->setObjectName(QString::fromUtf8("TreatmentWindow"));
        TreatmentWindow->resize(258, 391);
        leftButton = new QPushButton(TreatmentWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));
        downButton = new QPushButton(TreatmentWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        selectButton = new QPushButton(TreatmentWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        powerButton = new QPushButton(TreatmentWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));
        mainMenuOptions = new QListWidget(TreatmentWindow);
        mainMenuOptions->setObjectName(QString::fromUtf8("mainMenuOptions"));
        mainMenuOptions->setGeometry(QRect(0, 30, 256, 221));
        rightButton = new QPushButton(TreatmentWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));
        batteryStatus = new QProgressBar(TreatmentWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setEnabled(true);
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        upButton = new QPushButton(TreatmentWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        upButton->setCheckable(false);
        skinElectrode = new QRadioButton(TreatmentWindow);
        skinElectrode->setObjectName(QString::fromUtf8("skinElectrode"));
        skinElectrode->setGeometry(QRect(140, 290, 106, 23));
        intensityLevelLabel = new QLabel(TreatmentWindow);
        intensityLevelLabel->setObjectName(QString::fromUtf8("intensityLevelLabel"));
        intensityLevelLabel->setGeometry(QRect(60, 80, 111, 31));
        TreatmentMin = new QLabel(TreatmentWindow);
        TreatmentMin->setObjectName(QString::fromUtf8("TreatmentMin"));
        TreatmentMin->setGeometry(QRect(90, 200, 21, 20));
        intensityIndicator = new QTextEdit(TreatmentWindow);
        intensityIndicator->setObjectName(QString::fromUtf8("intensityIndicator"));
        intensityIndicator->setGeometry(QRect(100, 120, 41, 31));
        TreatmentSec = new QLabel(TreatmentWindow);
        TreatmentSec->setObjectName(QString::fromUtf8("TreatmentSec"));
        TreatmentSec->setGeometry(QRect(120, 200, 21, 17));

        retranslateUi(TreatmentWindow);

        QMetaObject::connectSlotsByName(TreatmentWindow);
    } // setupUi

    void retranslateUi(QDialog *TreatmentWindow)
    {
        TreatmentWindow->setWindowTitle(QCoreApplication::translate("TreatmentWindow", "MED MODE", nullptr));
        leftButton->setText(QCoreApplication::translate("TreatmentWindow", "\342\206\220 ", nullptr));
        downButton->setText(QCoreApplication::translate("TreatmentWindow", "\342\206\223", nullptr));
        selectButton->setText(QCoreApplication::translate("TreatmentWindow", "Select", nullptr));
        powerButton->setText(QCoreApplication::translate("TreatmentWindow", "Power", nullptr));
        rightButton->setText(QCoreApplication::translate("TreatmentWindow", "\342\206\222", nullptr));
        upButton->setText(QCoreApplication::translate("TreatmentWindow", "\342\206\221", nullptr));
        skinElectrode->setText(QCoreApplication::translate("TreatmentWindow", "Skin On/Off", nullptr));
        intensityLevelLabel->setText(QCoreApplication::translate("TreatmentWindow", "Intensity Level", nullptr));
        TreatmentMin->setText(QCoreApplication::translate("TreatmentWindow", "10", nullptr));
        intensityIndicator->setHtml(QCoreApplication::translate("TreatmentWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        TreatmentSec->setText(QCoreApplication::translate("TreatmentWindow", "00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TreatmentWindow: public Ui_TreatmentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREATMENTWINDOW_H
