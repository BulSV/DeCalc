#include "rectrubberwidget.h"
#include "ui_rectrubberwidget.h"

RectRubberWidget::RectRubberWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RectRubberWidget)
{
    ui->setupUi(this);
    ui->le_R->setText(QString::number(rectRubber.R()));
    ui->le_k->setText(QString::number(rectRubber.k()));

    connect(ui->b_Calco, SIGNAL(clicked()), this, SLOT(calcoSlot()));
    connect(ui->b_Calc, SIGNAL(clicked()), this, SLOT(calcSlot()));
    connect(ui->chb_manual, SIGNAL(clicked(bool)), this, SLOT(chbManualDefault(bool)));
}

RectRubberWidget::~RectRubberWidget()
{
    delete ui;
}

void RectRubberWidget::calcoSlot()
{
    rectRubber.set_ar(ui->le_ar->text().toFloat());
    rectRubber.set_br(ui->le_br->text().toFloat());
    rectRubber.set_R(ui->le_R->text().toFloat());
    rectRubber.set_k(ui->le_k->text().toFloat());

    rectRubber.set_Dro(ui->le_Dro->text().toFloat());
    rectRubber.set_ako(ui->le_ako->text().toFloat());

    if(rectRubber.bko() > 0)
        ui->l_bko->setText(QString::fromUtf8("bk = ") + QString::number(rectRubber.bko()));
    else
        ui->l_bko->setText(QString::fromUtf8("bk = ") + QString::fromUtf8("Reduce R"));
    ui->l_Ako->setText(QString::fromUtf8("Ak = ") + QString::number(rectRubber.Ako()));
    ui->l_Bko->setText(QString::fromUtf8("Bk = ") + QString::number(rectRubber.Bko()));
    ui->l_Hko->setText(QString::fromUtf8("Hk = ") + QString::number(rectRubber.Hk()));
}

void RectRubberWidget::calcSlot()
{
    rectRubber.set_ar(ui->le_ar->text().toFloat());
    rectRubber.set_br(ui->le_br->text().toFloat());
    rectRubber.set_R(ui->le_R->text().toFloat());
    rectRubber.set_k(ui->le_k->text().toFloat());

    rectRubber.set_ak(ui->le_ak->text().toFloat());
    rectRubber.set_bk(ui->le_bk->text().toFloat());

    ui->l_Ak->setText(QString::fromUtf8("Ak = ") + QString::number(rectRubber.Ak()));
    ui->l_Bk->setText(QString::fromUtf8("Bk = ") + QString::number(rectRubber.Bk()));
    ui->l_Hk->setText(QString::fromUtf8("Hk = ") + QString::number(rectRubber.Hk()));
    if(rectRubber.lr() > 0)
        ui->l_lr->setText(QString::fromUtf8("lr = ") + QString::number(rectRubber.lr()));
    else
        ui->l_lr->setText(QString::fromUtf8("lr = ") + QString::fromUtf8("Reduce R"));
    if(rectRubber.Dr() > 0)
        ui->l_Dr->setText(QString::fromUtf8("Dr = ") + QString::number(rectRubber.Dr()));
    else
        ui->l_Dr->setText(QString::fromUtf8("Dr = ") + QString::fromUtf8("Reduce R"));
}

void RectRubberWidget::chbManualDefault(bool isActive)
{
    if(!isActive)
    {
        ui->le_k->setText(QString::number(rectRubber.kDefault()));
    }
}
