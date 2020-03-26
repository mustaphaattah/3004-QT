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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QPushButton *leftButton;
    QListWidget *settingsMenu;
    QPushButton *powerButton;
    QProgressBar *batteryStatus;
    QPushButton *selectButton;
    QPushButton *upButton;
    QPushButton *downButton;
    QPushButton *rightButton;

    void setupUi(QWidget *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QString::fromUtf8("SettingsWindow"));
        SettingsWindow->resize(260, 400);
        leftButton = new QPushButton(SettingsWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));
        settingsMenu = new QListWidget(SettingsWindow);
        settingsMenu->setObjectName(QString::fromUtf8("settingsMenu"));
        settingsMenu->setGeometry(QRect(0, 30, 261, 221));
        powerButton = new QPushButton(SettingsWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));
        batteryStatus = new QProgressBar(SettingsWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        selectButton = new QPushButton(SettingsWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        upButton = new QPushButton(SettingsWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        downButton = new QPushButton(SettingsWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        rightButton = new QPushButton(SettingsWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));

        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QWidget *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QCoreApplication::translate("SettingsWindow", "Form", nullptr));
        leftButton->setText(QCoreApplication::translate("SettingsWindow", "\342\206\220 ", nullptr));
        powerButton->setText(QCoreApplication::translate("SettingsWindow", "Power", nullptr));
        selectButton->setText(QCoreApplication::translate("SettingsWindow", "Select", nullptr));
        upButton->setText(QCoreApplication::translate("SettingsWindow", "\342\206\221", nullptr));
        downButton->setText(QCoreApplication::translate("SettingsWindow", "\342\206\223", nullptr));
        rightButton->setText(QCoreApplication::translate("SettingsWindow", "\342\206\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
