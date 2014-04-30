#ifndef RINGRUBBERWIDGET_H
#define RINGRUBBERWIDGET_H

#include <QWidget>
#include "ringrubber.h"
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>

class RingRubberWidget : public QWidget
{
    Q_OBJECT
    RingRubber ringRubber;
    QLineEdit *le_ar;
    QLineEdit *le_br;
    QCheckBox *chb_manual;
    QLineEdit *le_k;

    QLineEdit *le_Dr;
    QPushButton *b_Calco;
    QLabel *l_dko;
    QLabel *l_Dko;
    QLabel *l_Hko;

    QLineEdit *le_dk;
    QPushButton *b_Calc;
    QLabel *l_Dk;
    QLabel *l_Hk;
    QLabel *l_lr;
    QLabel *l_Dr;
public:
    explicit RingRubberWidget(QWidget *parent = 0);
    
signals:
    
public slots:
    void calcoSlot();
    void calcSlot();
    void chbManualDefault(bool isActive);
    
};

#endif // RINGRUBBERWIDGET_H
