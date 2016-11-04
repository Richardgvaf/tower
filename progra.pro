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
    games.cpp \
    datosespeciales.cpp \
    clickablelabel.cpp \
    torres.cpp \
    Ogro.cpp \
    magos.cpp \
    bombardero.cpp

HEADERS  += mainwindow.h \
    games.h \
    datosespeciales.h \
    clickablelabel.h \
    torres.h \
    Ogro.h \
    magos.h \
    bombardero.h

FORMS    += mainwindow.ui \
    games.ui

RESOURCES += \
    misrecursos.qrc

DISTFILES += \
    imgs/torre de arqueras - copia.png
