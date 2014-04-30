#include "zenkovkaplugin.h"
#include <QtPlugin>

QString ZenkovkaPlugin::pluginName() const
{
    return QString::fromUtf8("Зеньковка");
}

QWidget* ZenkovkaPlugin::makePlugin()
{          
    return new ZenkovkaWidget;
}

Q_EXPORT_PLUGIN2(Interface, ZenkovkaPlugin)
