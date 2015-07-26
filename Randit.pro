#-------------------------------------------------
#
# Project created by QtCreator 2015-06-20T17:22:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = Randit
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogpage2.cpp \
    report.cpp \
    fileexplorerdialog.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    dialogpage2.h \
    report.h \
    fileexplorerdialog.h \
    qcustomplot.h

FORMS    += mainwindow.ui \
    dialogpage2.ui \
    report.ui \
    fileexplorerdialog.ui
