#include <QDir>
#include <QMessageBox>
#include <QApplication>
#include <QPluginLoader>
#include "interfaces.h"
#include "decalc.h"
#include <QLabel>
#include <QHBoxLayout>
#include <QTime>

#define debugus0

#ifdef debugus
#include <QDebug>
#endif

#define TABWIDTH 300

DeCalc::DeCalc(QWidget *parent)
    : QWidget(parent)
    , itsPluginsList(new QStringList())
{
    tab = new QTabWidget(this);
    tab->setMovable(true);
    tab->setTabShape(QTabWidget::Triangular);
    tab->setTabPosition(QTabWidget::North);
//    tab->setElideMode(Qt::ElideMiddle);
//    tab->setTabWhatsThis(tab->currentIndex(), tab->tabText(tab->currentIndex()));
    tab->setTabToolTip(tab->currentIndex(), tab->tabText(tab->currentIndex()));
    tab->setToolTip(tab->tabText(tab->currentIndex()));
//    tab->setTabsClosable(true);
    w = new QWidget(this);
    setLayout(new QHBoxLayout(this));
    layout()->addWidget(tab);
    layout()->setSpacing(5);
    tab->setMinimumWidth(TABWIDTH);
    loadPlugins();    

//    connect(tab, SIGNAL(tabCloseRequested(int)), this, SLOT(unloadPlugin(int)));
}

void DeCalc::loadPlugins()
{
    QDir dir(QApplication::applicationDirPath());
    if(!dir.cd("plugins"))
    {
        QMessageBox::critical(0, "", QString::fromUtf8("Папки plugins не существует"));
        return;
    }
    foreach(QString strFileName, dir.entryList(QDir::Files))
    {
        QPluginLoader loader(dir.absoluteFilePath(strFileName));
        insertNewTab(qobject_cast<QObject*>(loader.instance()));      
        if(loader.instance())
        {
            itsPluginsList->push_back(strFileName);
        }
    }
}

void DeCalc::unloadPlugin(int plugin)
{
    QDir dir(QApplication::applicationDirPath());
    dir.cd("plugins");
    QPluginLoader unloader(dir.absoluteFilePath(itsPluginsList->at(plugin)));
    qobject_cast<QObject*>(unloader.instance());
    unloader.unload();
#ifdef debugus
    qDebug() << "void DeCalc::unloadPlugin(int plugin): plugin =" << plugin;// << unloader.unload();
    qDebug() << "void DeCalc::unloadPlugin(int plugin): itsPluginsList->at(plugin) =" << itsPluginsList->at(plugin);
#endif
}

void DeCalc::insertNewTab(QObject *parent)
{
#ifdef debugus
    qDebug() <<"void DeCalc::insertNewTab(QObject *parent): parent" << parent;
#endif
    if(!parent)
    {
        return;
    }
    Interface *pI = qobject_cast<Interface*>(parent);
#ifdef debugus
    qDebug() <<"void DeCalc::insertNewTab(QObject *parent): pI" << pI;
#endif
    if(pI)
    {
        tab->addTab(pI->makePlugin(), pI->pluginName());
    }
}

void DeCalc::loadProgram(QSplashScreen *splash)
{
    QTime *time = new QTime;
    time->start();
    for(int i = 0; i < 100; )
    {
        if(time->elapsed() > 5)
        {
            time->start();
            ++i;
        }
        splash->showMessage(QString::fromUtf8("<br><br><br><br><br><br><br><br><br><br><br><br><br><br>")
                            + QString::fromUtf8("<br><br><br><br><br><br><br><br><br>")
                            + QString::fromUtf8("<b>DeCalc v.1.0<br>© & ® 2012 BulSV<br>")
                            + QString::fromUtf8("This program is licensed under the terms<br>")
                            + QString::fromUtf8("of the GNU General Public License version 3<br>")
                            + QString::fromUtf8("Available online under:<br>")
                            + QString::fromUtf8("http://www.gnu.org/licenses/gpl-3.0.html.</b><br><br>Загружаю плагины ")
                            + QString::number(i)
                            + "%<br>"
                            + itsPluginsList->at(i % tab->count()),
                            Qt::AlignCenter | Qt::AlignBottom,
                            Qt::white);
    }
}
