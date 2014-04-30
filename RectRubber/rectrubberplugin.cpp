#include "rectrubberplugin.h"
#include <QtPlugin>
#include "rectrubberwidget.h"

//RectRubberPlugin::RectRubberPlugin(QObject *parent) :
//    QObject(parent)
//{
//}


QString RectRubberPlugin::pluginName() const
{
    return QString::fromUtf8("Резинка - прямоугольная конавка");
}

QWidget *RectRubberPlugin::makePlugin()
{
    return new RectRubberWidget;
}

Q_EXPORT_PLUGIN2(Interface, RectRubberPlugin)
