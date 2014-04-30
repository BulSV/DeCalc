#ifndef INTERFACES_H
#define INTERFACES_H

#include <QWidget>
#include <QString>

class Interface
{
public:
    virtual ~Interface() {}
    virtual QString pluginName() const = 0;
    virtual QWidget* makePlugin(/*QWidget *wdgt*/) = 0;
};

Q_DECLARE_INTERFACE(Interface,
                    "ru.example.bulsv.DeCalc.Interface/1.0")

#endif // INTERFACES_H
