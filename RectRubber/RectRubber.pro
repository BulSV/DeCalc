#-------------------------------------------------
#
# Project created by QtCreator 2012-08-26T21:19:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#TARGET = RectRubber
TEMPLATE = lib
CONFIG += plugin
DESTDIR = ../plugins
CONFIG(debug, debug|release){
    TARGET = RectRubberPlugind
}
else{
    TARGET = RectRubberPlugin
}


SOURCES += main.cpp\
        rectrubberwidget.cpp \
    rectrubber.cpp \
    rectrubberplugin.cpp

HEADERS  += rectrubberwidget.h\
        ../DeCalc/interfaces.h \
    rectrubber.h \
    rectrubberplugin.h

FORMS    += rectrubberwidget.ui
