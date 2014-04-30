#ifndef ZENKOVKAWIDGET_H
#define ZENKOVKAWIDGET_H

#include <QWidget>
#include "../DeCalc/interfaces.h"
#include <QObject>
#include "zenkovka.h"
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QComboBox>
#include <QPushButton>

struct Screws
{
    float dv;
    float dgv;
    float hgv;
};

#define RANGESCREWS 14

class ZenkovkaWidget : public QWidget
{
    Q_OBJECT    

    Zenkovka zenkovka;
    Screws screws[RANGESCREWS];

    QLineEdit *le_h;
    QLineEdit *le_dz;
    QLineEdit *le_dgv;
    QLineEdit *le_hgv;
    QLineEdit *le_dv;
    QLineEdit *le_Dz;
    QLineEdit *le_hm;
    QLineEdit *le_hmO;

    QComboBox *cb_vint;

    QCheckBox *chb_manual;

    QLabel *l_Dz;
    QLabel *l_Hz;
    QLabel *l_hO;
    QLabel *l_HzO;
    QLabel *l_dm;
    QLabel *l_dmO;

    QPushButton *b_Calc;
    QPushButton *b_Test;
public:
    explicit ZenkovkaWidget(QWidget *parent = 0);
    
signals:
    
public slots:
    void dgvSlot(int index);
    void hgvSlot(int index);
    void dvSlot(int index);

    void calcSlot();
    void testSlot();
    
};

#endif // ZENKOVKAWIDGET_H
