#-------------------------------------------------
#
# Project created by QtCreator 2020-03-15T14:35:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DenasPCMSimulator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        batterywarningdialog.cpp \
        brightnesswindow.cpp \
        childrenwindow.cpp \
        clockwindow.cpp \
        frequencywindow.cpp \
        main.cpp \
        mainwindow.cpp \
        medwindow.cpp \
        programswindow.cpp \
        screeningwindow.cpp \
        settingswindow.cpp \
        treatmentwindow.cpp

HEADERS += \
        batterywarningdialog.h \
        brightnesswindow.h \
        childrenwindow.h \
        clockwindow.h \
        frequencywindow.h \
        mainwindow.h \
        medwindow.h \
        programswindow.h \
        screeningwindow.h \
        settingswindow.h \
        treatmentwindow.h

FORMS += \
        batterywarningdialog.ui \
        brightnesswindow.ui \
        childrenwindow.ui \
        clockwindow.ui \
        frequencywindow.ui \
        mainwindow.ui \
        medwindow.ui \
        programswindow.ui \
        screeningwindow.ui \
        settingswindow.ui \
        treatmentwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
