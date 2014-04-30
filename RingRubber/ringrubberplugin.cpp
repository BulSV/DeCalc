#include "ringrubberplugin.h"
#include <QtPlugin>
#include "ringrubberwidget.h"

QString RingRubberPlugin::pluginName() const
{
    return QString::fromUtf8("Резинка - круглая конавка");
}

QWidget *RingRubberPlugin::makePlugin()
{
    return new RingRubberWidget;
}

Q_EXPORT_PLUGIN2(Interface, RingRubberPlugin)
