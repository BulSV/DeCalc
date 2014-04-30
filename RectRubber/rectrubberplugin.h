#ifndef RECTRUBBERPLUGIN_H
#define RECTRUBBERPLUGIN_H

#include <QObject>
#include "../DeCalc/interfaces.h"

class RectRubberPlugin : public QObject, public Interface
{
    Q_OBJECT
    Q_INTERFACES(Interface)
public:
    //    explicit RectRubberPlugin(QObject *parent = 0);
    virtual ~RectRubberPlugin() {}
    virtual QString pluginName() const; // имя плагина

    virtual QWidget* makePlugin();
    
signals:
    
public slots:
    
};

#endif // RECTRUBBERPLUGIN_H
