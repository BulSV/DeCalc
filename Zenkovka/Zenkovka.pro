TEMPLATE = lib
CONFIG += plugin
DESTDIR = ../plugins
CONFIG(debug, debug|release){
    TARGET = ZenkovkaPlugind
}
else{
    TARGET = ZenkovkaPlugin
}
HEADERS +=  \
    ../DeCalc/interfaces.h \
    zenkovka.h \
    zenkovkawidget.h \
    zenkovkaplugin.h

SOURCES += \
    zenkovka.cpp \
    zenkovkawidget.cpp \
    zenkovkaplugin.cpp
