TEMPLATE = app
unix:DESTDIR  = ..
win32:DESTDIR  = ..
CONFIG(debug, debug|release){
    TARGET = DeCalcProd
}
else{
    TARGET = DeCalcPro
}
SOURCES += \
    main.cpp \
    decalc.cpp

HEADERS += \
    interfaces.h \
    decalc.h

