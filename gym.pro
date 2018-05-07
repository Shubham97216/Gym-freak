#-------------------------------------------------
#
# Project created by QtCreator 2018-04-24T14:14:58
#
#-------------------------------------------------

QT       += core sql
QT       -= gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gym
TEMPLATE = app


SOURCES += main.cpp\
        start.cpp \
    login.cpp \
    signup.cpp \
    inputdata.cpp \
    dashboard.cpp \
    updatedata.cpp \
    dietchart.cpp \
    exercisechart.cpp

HEADERS  += start.h \
    login.h \
    signup.h \
    inputdata.h \
    dashboard.h \
    updatedata.h \
    dietchart.h \
    exercisechart.h

FORMS    += start.ui \
    login.ui \
    signup.ui \
    inputdata.ui \
    dashboard.ui \
    updatedata.ui \
    dietchart.ui \
    exercisechart.ui

RESOURCES += \
    image.qrc

DISTFILES += \
    WEEKLY MEAL PLANNER.jpg
