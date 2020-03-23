/********************************************************************************
** Form generated from reading UI file 'batterywarningdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTERYWARNINGDIALOG_H
#define UI_BATTERYWARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_BatteryWarningDialog
{
public:
    QTextEdit *textEdit;
    QPushButton *okayButton;

    void setupUi(QDialog *BatteryWarningDialog)
    {
        if (BatteryWarningDialog->objectName().isEmpty())
            BatteryWarningDialog->setObjectName(QString::fromUtf8("BatteryWarningDialog"));
        BatteryWarningDialog->resize(342, 115);
        textEdit = new QTextEdit(BatteryWarningDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 30, 281, 31));
        okayButton = new QPushButton(BatteryWarningDialog);
        okayButton->setObjectName(QString::fromUtf8("okayButton"));
        okayButton->setGeometry(QRect(130, 70, 83, 25));

        retranslateUi(BatteryWarningDialog);

        QMetaObject::connectSlotsByName(BatteryWarningDialog);
    } // setupUi

    void retranslateUi(QDialog *BatteryWarningDialog)
    {
        BatteryWarningDialog->setWindowTitle(QCoreApplication::translate("BatteryWarningDialog", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("BatteryWarningDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">BATTERY IS DEAD! Powering Device Off</p></body></html>", nullptr));
        okayButton->setText(QCoreApplication::translate("BatteryWarningDialog", "\342\234\224\357\270\217Okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BatteryWarningDialog: public Ui_BatteryWarningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTERYWARNINGDIALOG_H
