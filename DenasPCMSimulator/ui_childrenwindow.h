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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChildrenWindow
{
public:
    QProgressBar *batteryStatus;
    QPushButton *rightButton;
    QPushButton *downButton;
    QPushButton *selectButton;
    QListWidget *childrenMenu;
    QPushButton *powerButton;
    QPushButton *upButton;
    QPushButton *leftButton;

    void setupUi(QDialog *ChildrenWindow)
    {
        if (ChildrenWindow->objectName().isEmpty())
            ChildrenWindow->setObjectName(QString::fromUtf8("ChildrenWindow"));
        ChildrenWindow->resize(260, 400);
        batteryStatus = new QProgressBar(ChildrenWindow);
        batteryStatus->setObjectName(QString::fromUtf8("batteryStatus"));
        batteryStatus->setGeometry(QRect(210, 0, 41, 21));
        batteryStatus->setValue(24);
        rightButton = new QPushButton(ChildrenWindow);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(70, 290, 31, 25));
        downButton = new QPushButton(ChildrenWindow);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(40, 320, 31, 25));
        selectButton = new QPushButton(ChildrenWindow);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(110, 330, 71, 21));
        childrenMenu = new QListWidget(ChildrenWindow);
        childrenMenu->setObjectName(QString::fromUtf8("childrenMenu"));
        childrenMenu->setGeometry(QRect(0, 30, 261, 221));
        powerButton = new QPushButton(ChildrenWindow);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(190, 330, 61, 21));
        upButton = new QPushButton(ChildrenWindow);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(40, 260, 31, 25));
        leftButton = new QPushButton(ChildrenWindow);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 290, 31, 25));

        retranslateUi(ChildrenWindow);

        QMetaObject::connectSlotsByName(ChildrenWindow);
    } // setupUi

    void retranslateUi(QDialog *ChildrenWindow)
    {
        ChildrenWindow->setWindowTitle(QCoreApplication::translate("ChildrenWindow", "Dialog", nullptr));
        rightButton->setText(QCoreApplication::translate("ChildrenWindow", "\342\206\222", nullptr));
        downButton->setText(QCoreApplication::translate("ChildrenWindow", "\342\206\223", nullptr));
        selectButton->setText(QCoreApplication::translate("ChildrenWindow", "Select", nullptr));
        powerButton->setText(QCoreApplication::translate("ChildrenWindow", "Power", nullptr));
        upButton->setText(QCoreApplication::translate("ChildrenWindow", "\342\206\221", nullptr));
        leftButton->setText(QCoreApplication::translate("ChildrenWindow", "\342\206\220 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChildrenWindow: public Ui_ChildrenWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDRENWINDOW_H
