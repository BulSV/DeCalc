#ifndef ZENKOVKAPLUGIN_H
#define ZENKOVKAPLUGIN_H

#include <QObject>
#include "../DeCalc/interfaces.h"
#include "zenkovkawidget.h"

class ZenkovkaPlugin : public QObject, public Interface
{
    Q_OBJECT
    Q_INTERFACES(Interface)

public:
    virtual ~ZenkovkaPlugin() {}
    virtual QString pluginName() const;
    // имя плагина

    virtual QWidget* makePlugin(/*QWidget *wdgt*/);
    
signals:
    
public slots:
    
};

#endif // ZENKOVKAPLUGIN_H
