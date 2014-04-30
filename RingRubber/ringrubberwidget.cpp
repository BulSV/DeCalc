#include "ringrubberwidget.h"
#include <QGroupBox>
#include <QGridLayout>

RingRubberWidget::RingRubberWidget(QWidget *parent)
    : QWidget(parent)
    , le_ar(new QLineEdit(this))
    , le_br(new QLineEdit(this))
    , chb_manual(new QCheckBox(QString::fromUtf8("Задать самому"), this))
    , le_k(new QLineEdit(this))
    , le_Dr(new QLineEdit(this))
    , b_Calco(new QPushButton(QString::fromUtf8("Расчёт"), this))
    , l_dko(new QLabel(QString::fromUtf8("dk = ?"),this))
    , l_Dko(new QLabel(QString::fromUtf8("Dk = ?"), this))
    , l_Hko(new QLabel(QString::fromUtf8("Hk = ?"), this))
    , le_dk(new QLineEdit(this))
    , b_Calc(new QPushButton(QString::fromUtf8("Расчёт"), this))
    , l_Dk(new QLabel(QString::fromUtf8("Dk = ?"), this))
    , l_Hk(new QLabel(QString::fromUtf8("Hk = ?"), this))
    , l_lr(new QLabel(QString::fromUtf8("lr = ?"), this))
    , l_Dr(new QLabel(QString::fromUtf8("Dr = ?"), this))
{
    QGridLayout *glWhole = new QGridLayout(this);
    glWhole->addWidget(new QLabel(QString::fromUtf8("Dr"), this), 0, 0);
    glWhole->addWidget(le_Dr, 0, 1);
    glWhole->addWidget(b_Calco, 1, 0, 1, 2);
    glWhole->addWidget(l_dko, 2, 0, 1, 2);
    glWhole->addWidget(l_Dko, 3, 0, 1, 2);
    glWhole->addWidget(l_Hko, 4, 0, 1, 2);
    glWhole->setSpacing(5);

    QGroupBox *gbWhole = new QGroupBox(QString::fromUtf8("Целая"), this);
    gbWhole->setLayout(glWhole);

    QGridLayout *glCut = new QGridLayout(this);
    glCut->addWidget(new QLabel(QString::fromUtf8("dk"), this), 0, 0);
    glCut->addWidget(le_dk, 0, 1);
    glCut->addWidget(b_Calc, 2, 0, 1, 2);
    glCut->addWidget(l_Dk, 3, 0, 1, 2);
    glCut->addWidget(l_Hk, 4, 0, 1, 2);
    glCut->addWidget(l_lr, 5, 0, 1, 2);
    glCut->addWidget(l_Dr, 6, 0, 1, 2);
    glCut->setSpacing(5);

    QGroupBox *gbCut = new QGroupBox(QString::fromUtf8("Разрезанная"), this);
    gbCut->setLayout(glCut);

    QGridLayout *glMain = new QGridLayout(this);
    glMain->addWidget(new QLabel(QString::fromUtf8("ar"), this), 0, 0);
    glMain->addWidget(le_ar, 0, 1);
    glMain->addWidget(new QLabel(QString::fromUtf8("br"), this), 1, 0);
    glMain->addWidget(le_br, 1, 1);
    glMain->addWidget(chb_manual, 2, 0, 1, 2);
    glMain->addWidget(new QLabel(QString::fromUtf8("k"), this), 3, 0);
    glMain->addWidget(le_k, 3, 1);
    glMain->addWidget(gbWhole, 0, 2, 5, 2);
    glMain->addWidget(gbCut, 0, 4, 6, 2);
    glMain->setSpacing(5);

    setLayout(glMain);
    layout()->setSpacing(5);

    chb_manual->setChecked(false);

    le_k->setEnabled(false);
    le_k->setText(QString::number(ringRubber.k()));

    this->setToolTip(QString::fromUtf8("Резинка - круглая канавка"));

    connect(le_ar, SIGNAL(textChanged(QString)), le_br, SLOT(setText(QString)));
    connect(chb_manual, SIGNAL(clicked(bool)), le_k, SLOT(setEnabled(bool)));
    connect(chb_manual, SIGNAL(clicked(bool)), this, SLOT(chbManualDefault(bool)));
    connect(b_Calco, SIGNAL(clicked()), this, SLOT(calcoSlot()));
    connect(b_Calc, SIGNAL(clicked()), this, SLOT(calcSlot()));
}

void RingRubberWidget::calcoSlot()
{
    ringRubber.set_ar(QString(le_ar->text()).toFloat());
    ringRubber.set_br(QString(le_br->text()).toFloat());
    ringRubber.set_k(QString(le_k->text()).toFloat());
    ringRubber.set_Dr(QString(le_Dr->text()).toFloat());

    l_dko->setText(QString::fromUtf8("dk = ") + QString::number(ringRubber.dko()));
    l_Dko->setText(QString::fromUtf8("Dk = ") + QString::number(ringRubber.Dko()));
    l_Hko->setText(QString::fromUtf8("Hk = ") + QString::number(ringRubber.Hk()));

    le_dk->setText(QString::number(ringRubber.dko()));
}

void RingRubberWidget::calcSlot()
{
    ringRubber.set_ar(QString(le_ar->text()).toFloat());
    ringRubber.set_br(QString(le_br->text()).toFloat());
    ringRubber.set_k(QString(le_k->text()).toFloat());
    ringRubber.set_dk(QString(le_dk->text()).toFloat());

    l_Dk->setText(QString::fromUtf8("Dk = ") + QString::number(ringRubber.Dk()));
    l_Hk->setText(QString::fromUtf8("Hk = ") + QString::number(ringRubber.Hk()));
    l_lr->setText(QString::fromUtf8("lr = ") + QString::number(ringRubber.lr()));
    l_Dr->setText(QString::fromUtf8("Dr = ") + QString::number(ringRubber.Dr()));

    le_Dr->setText(QString::number(ringRubber.Dr()));
}

void RingRubberWidget::chbManualDefault(bool isActive)
{
    if(!isActive)
    {
        le_k->setText(QString::number(ringRubber.kDefault()));
    }
}
