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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QPushButton *leftButton;
    QListWidget *settingsMenu;
    QPushButton *downButton;
    QProgressBar *batteryStatus;
    QPushButton *powerButton;
    QPushButton *selectButton;
    QPushButton *rightButton;
    QPushButton *upButton;
    QPushButton *backButton;

    void setupUi(QDialog *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QString::fromUtf8("SettingsWindow"));
        SettingsWindow->resize(258, 391);
        leftButton = new QPushButton(SettingsWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));
        settingsMenu = new QListWidget(SettingsWindow);
        settingsMenu->setObjectName(QString::fromUtf8("settingsMenu"));
        settingsMenu->setGeometry(QRect(0, 30, 256, 221));
        downButton = new QPushButton(SettingsWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        batteryStatus = new QProgressBar(SettingsWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setEnabled(true);
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        powerButton = new QPushButton(SettingsWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));
        selectButton = new QPushButton(SettingsWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        rightButton = new QPushButton(SettingsWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));
        upButton = new QPushButton(SettingsWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        upButton->setCheckable(false);
        backButton = new QPushButton(SettingsWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(140, 280, 61, 21));

        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QDialog *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QCoreApplication::translate("SettingsWindow", "Dialog", nullptr));
        leftButton->setText(QCoreApplication::translate("SettingsWindow", "\342\206\220 ", nullptr));
        downButton->setText(QCoreApplication::translate("SettingsWindow", "\342\206\223", nullptr));
        powerButton->setText(QCoreApplication::translate("SettingsWindow", "Power", nullptr));
        selectButton->setText(QCoreApplication::translate("SettingsWindow", "Select", nullptr));
        rightButton->setText(QCoreApplication::translate("SettingsWindow", "\342\206\222", nullptr));
        upButton->setText(QCoreApplication::translate("SettingsWindow", "\342\206\221", nullptr));
        backButton->setText(QCoreApplication::translate("SettingsWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
