#include "zenkovkawidget.h"
#include <QGroupBox>
#include <QGridLayout>

#define debugus

#ifdef debugus
#include <QDebug>
#endif

float arrayScrews[] =
{
    1.6, 3, 0.96,
    2, 3.8, 1.2,
    2.5, 4.7, 1.5,
    3, 5.6, 1.65,
    4, 7.4, 2.2,
    5, 9.2, 2.5,
    6, 11, 3,
    8, 14.5, 4,
    10, 18, 5,
    12, 21.5, 6,
    14, 25, 7,
    16, 28.5, 8,
    18, 32.5, 9,
    20, 36, 10
};

ZenkovkaWidget::ZenkovkaWidget(QWidget *parent)
    : QWidget(parent)
    , le_h(new QLineEdit(this))
    , le_dz(new QLineEdit(this))
    , le_dgv(new QLineEdit(this))
    , le_hgv(new QLineEdit(this))
    , le_dv(new QLineEdit(this))
    , le_Dz(new QLineEdit(this))
    , le_hm(new QLineEdit(this))
    , le_hmO(new QLineEdit(this))
    , cb_vint(new QComboBox(this))
    , chb_manual(new QCheckBox(QString::fromUtf8("Задать самому"), this))
    , l_Dz(new QLabel("Dz = ?", this))
    , l_Hz(new QLabel("Hz = ?", this))
    , l_hO(new QLabel("h = ?", this))
    , l_HzO(new QLabel("Hz = ?", this))
    , l_dm(new QLabel("dm = ?", this))
    , l_dmO(new QLabel("dm = ?", this))
    , b_Calc(new QPushButton(QString::fromUtf8("Расчёт"), this))
    , b_Test(new QPushButton(QString::fromUtf8("Расчёт"), this))

{    
    int j = 0;
    for(int i = 0; i < RANGESCREWS; ++i)
    {
        screws[i].dv = arrayScrews[j++];
        screws[i].dgv = arrayScrews[j++];
        screws[i].hgv = arrayScrews[j++];
    }

    QGridLayout *gLayout = new QGridLayout(this);
    gLayout->addWidget(new QLabel(QString::fromUtf8("М")), 0, 0, Qt::AlignRight);
    gLayout->addWidget(cb_vint, 0, 1);
    gLayout->addWidget(chb_manual, 1, 1, 1, 1, Qt::AlignLeft);
    gLayout->addWidget(new QLabel(QString::fromUtf8("dgv")), 2, 0, Qt::AlignRight);
    gLayout->addWidget(le_dgv, 2, 1);
    gLayout->addWidget(new QLabel(QString::fromUtf8("hgv")), 3, 0, Qt::AlignRight);
    gLayout->addWidget(le_hgv, 3, 1);
    gLayout->addWidget(new QLabel(QString::fromUtf8("dv")), 4, 0, Qt::AlignRight);
    gLayout->addWidget(le_dv, 4, 1);
    gLayout->setSpacing(5);

    QGroupBox *gbLayout = new QGroupBox(QString::fromUtf8("Винт"), this);
    gbLayout->setLayout(gLayout);

    QGridLayout *gCalc = new QGridLayout(this);
    gCalc->addWidget(new QLabel(QString::fromUtf8("h")), 0, 0, Qt::AlignRight);
    gCalc->addWidget(le_h, 0, 1);
    gCalc->addWidget(new QLabel(QString::fromUtf8("dz")), 1, 0, Qt::AlignRight);
    gCalc->addWidget(le_dz, 1, 1);
    gCalc->addWidget(new QLabel(QString::fromUtf8("hm")), 2, 0, Qt::AlignRight);
    gCalc->addWidget(le_hm, 2, 1);
    gCalc->addWidget(l_Dz, 3, 0, 1, 2);
    gCalc->addWidget(l_Hz, 4, 0, 1 , 2);
    gCalc->addWidget(l_dm, 5, 0, 1, 2);
    gCalc->addItem(new QSpacerItem(1, 1), 6, 0, 1, 2);
    gCalc->addWidget(b_Calc, 7, 0, 1, 2);
    gCalc->setSpacing(5);

    QGroupBox *gbCalc = new QGroupBox(QString::fromUtf8("Результаты"), this);
    gbCalc->setLayout(gCalc);

    QGridLayout *gTest = new QGridLayout(this);
    gTest->addWidget(new QLabel(QString::fromUtf8("Dz")), 0, 0, Qt::AlignRight);
    gTest->addWidget(le_Dz, 0, 1);
    gTest->addWidget(new QLabel(QString::fromUtf8("hm")), 1, 0, Qt::AlignRight);
    gTest->addWidget(le_hmO, 1, 1);
    gTest->addItem(new QSpacerItem(1, 25), 2, 0, 1, 2);
//    gTest->addWidget(new QLabel("111"), 1, 0, 1, 2);
    gTest->addWidget(l_hO, 3, 0, 1, 2);
    gTest->addWidget(l_HzO, 4, 0, 1, 2);
    gTest->addWidget(l_dmO, 5, 0, 1, 2);
    gTest->addItem(new QSpacerItem(1, 1), 6, 0, 1, 2);
    gTest->addWidget(b_Test, 7, 0, 1, 2);
    gTest->setSpacing(10);

    QGroupBox *gbTest = new QGroupBox(QString::fromUtf8("Проверка"), this);
    gbTest->setLayout(gTest);

    QGridLayout *gMainLayout = new QGridLayout(this);
    gMainLayout->addWidget(gbLayout, 0, 0, 5, 2);
    gMainLayout->addWidget(gbCalc, 0, 6, 5, 2);
    gMainLayout->addWidget(gbTest, 0, 9, 5, 2);
    gMainLayout->setSpacing(5);

    setLayout(gMainLayout);
    layout()->setSpacing(5);

    chb_manual->setChecked(false);
    for(int i =0; i < RANGESCREWS; ++i)
    {
        cb_vint->insertItem(i, QString::number(screws[i].dv));
    }

    le_dgv->setEnabled(false);
    le_hgv->setEnabled(false);
    le_dv->setEnabled(false);

    dgvSlot(0);
    hgvSlot(0);
    dvSlot(0);
    le_h->setText("0.2");
    le_hm->setText("1");
    le_hmO->setText("1");
    le_dz->setText(le_dv->text());

    connect(chb_manual, SIGNAL(clicked(bool)), le_dgv, SLOT(setEnabled(bool)));
    connect(chb_manual, SIGNAL(clicked(bool)), le_hgv, SLOT(setEnabled(bool)));
    connect(chb_manual, SIGNAL(clicked(bool)), le_dv, SLOT(setEnabled(bool)));

    connect(cb_vint, SIGNAL(activated(int)), this, SLOT(dgvSlot(int)));
    connect(cb_vint, SIGNAL(activated(int)), this, SLOT(hgvSlot(int)));
    connect(cb_vint, SIGNAL(activated(int)), this, SLOT(dvSlot(int)));
    connect(cb_vint, SIGNAL(activated(QString)), le_dz, SLOT(setText(QString)));

    connect(b_Calc, SIGNAL(clicked()), this, SLOT(calcSlot()));
    connect(b_Test, SIGNAL(clicked()), this, SLOT(testSlot()));
}

void ZenkovkaWidget::dgvSlot(int index)
{
    le_dgv->setText(QString::number(screws[index].dgv));
}

void ZenkovkaWidget::hgvSlot(int index)
{
    le_hgv->setText(QString::number(screws[index].hgv));
}

void ZenkovkaWidget::dvSlot(int index)
{
    le_dv->setText(QString::number(screws[index].dv));
}

void ZenkovkaWidget::calcSlot()
{
    zenkovka.set_h(QString(le_h->text()).toFloat());
    zenkovka.set_dz(QString(le_dz->text()).toFloat());
    zenkovka.set_dgv(QString(le_dgv->text()).toFloat());
    zenkovka.set_hgv(QString(le_hgv->text()).toFloat());
    zenkovka.set_dv(QString(le_dv->text()).toFloat());
    zenkovka.set_hm(QString(le_hm->text()).toFloat());
    l_Dz->setText(QString("Dz = ") + QString::number(zenkovka.Dz()));
    l_Hz->setText(QString("Hz = ") + QString::number(zenkovka.Hz()));
    le_Dz->setText(QString::number(zenkovka.Dz()));
    l_dm->setText(QString("dm = ") + QString::number(zenkovka.dm()));
}

void ZenkovkaWidget::testSlot()
{
    zenkovka.set_Dz(QString(le_Dz->text()).toFloat());
    l_hO->setText(QString("h = ") + QString::number(zenkovka.hO()));
    l_HzO->setText(QString("Hz = ") + QString::number(zenkovka.HzO()));
    zenkovka.set_hm(QString(le_hmO->text()).toFloat());
    l_dmO->setText(QString("dm = ") + QString::number(zenkovka.dmO()));
}
