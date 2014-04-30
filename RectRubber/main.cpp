#include <QApplication>
#include "rectrubberwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RectRubberWidget w;
    w.show();
    
    return a.exec();
}
