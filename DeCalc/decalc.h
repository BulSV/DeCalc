#ifndef DECALC_H
#define DECALC_H

#include <QTabWidget>
#include <QSplashScreen>

class DeCalc : public QWidget
{
    Q_OBJECT
    QTabWidget *tab;
    QWidget *w;
    void insertNewTab(QObject *parent);
    QStringList *itsPluginsList;
//    QSplashScreen *splash;
public:
    explicit DeCalc(QWidget *parent = 0);
    void loadPlugins();    
    
signals:
    
public slots:
    void unloadPlugin(int plugin);
    void loadProgram(QSplashScreen *splash);
    
};

#endif // DECALC_H
