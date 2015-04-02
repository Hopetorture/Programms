#-------------------------------------------------
#
# Project created by QtCreator 2015-02-12T22:53:08
#
#-------------------------------------------------
QT -= gui

TARGET = prog_4
TEMPLATE = lib

DEFINES += PROG_4_LIBRARY

SOURCES += prog_4.cpp

HEADERS += prog_4.h\
        prog_4_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
