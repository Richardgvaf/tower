#-------------------------------------------------
#
# Project created by QtCreator 2016-10-18T16:42:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = progra
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ventanajuego.cpp \
    games.cpp \
    datosespeciales.cpp

HEADERS  += mainwindow.h \
    ventanajuego.h \
    games.h \
    datosespeciales.h

FORMS    += mainwindow.ui \
    ventanajuego.ui \
    games.ui

RESOURCES += \
    misrecursos.qrc

DISTFILES += \
    imgs/torre de arqueras - copia.png
