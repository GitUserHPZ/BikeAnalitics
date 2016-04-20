#-------------------------------------------------
#
# Project created by QtCreator 2016-04-15T11:01:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BikeAnalitics
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    bikeanaliticsdoc.cpp \
    trainingitem.cpp \
    trainingdata.cpp \
    trainingstats.cpp \
    trainingitemlist.cpp

HEADERS  += mainwindow.h \
    bikeanaliticsdefs.h \
    bikeanaliticsdoc.h \
    trainingitem.h \
    trainingdata.h \
    trainingstats.h \
    trainingitemlist.h

FORMS    += mainwindow.ui
