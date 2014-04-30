#ifndef RINGRUBBERPLUGIN_H
#define RINGRUBBERPLUGIN_H

#include <QObject>
#include "../DeCalc/interfaces.h"

class RingRubberPlugin : public QObject, public Interface
{
    Q_OBJECT
    Q_INTERFACES(Interface)
public:
    virtual ~RingRubberPlugin() {}
    virtual QString pluginName() const; // имя плагина

    virtual QWidget* makePlugin();
    
signals:
    
public slots:
    
};

#endif // RINGRUBBERPLUGIN_H
