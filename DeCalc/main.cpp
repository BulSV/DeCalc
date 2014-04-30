#include <QApplication>
#include "decalc.h"
//#include <QWindowsStyle>
#include <QPixmap>

int main(int argc, char** argv)
{
    QApplication  app(argc, argv);
//    app.setStyle(new QWindowsStyle);
    DeCalc win;
    win.setWindowTitle(QString::fromUtf8("В помощь конструктору"));
//    QSplashScreen splash(QPixmap("plugins/Oblivion___Wallpaper_by_AKAcorn.jpg"));
    QSplashScreen splash(QPixmap("plugins/DeCalc.png"));
    splash.show();

    win.loadProgram(&splash);
    splash.finish(&win);
    win.show();
    return app.exec();
}

