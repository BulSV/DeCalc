TEMPLATE = lib
CONFIG += plugin
DESTDIR = ../plugins
CONFIG(debug, debug|release){
    TARGET = RingRubberPlugind
}
else{
    TARGET = RingRubberPlugin
}

HEADERS += \
    ../DeCalc/interfaces.h \
    ringrubber.h \
    ringrubberplugin.h \
    ringrubberwidget.h

SOURCES += \
    ringrubber.cpp \
    ringrubberplugin.cpp \
    ringrubberwidget.cpp
