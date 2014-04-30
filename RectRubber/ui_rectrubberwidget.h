/********************************************************************************
** Form generated from reading UI file 'rectrubberwidget.ui'
**
** Created: Tue 28. Aug 10:26:04 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTRUBBERWIDGET_H
#define UI_RECTRUBBERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RectRubberWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *l_ar;
    QLineEdit *le_ar;
    QLabel *l_br;
    QLineEdit *le_br;
    QLabel *l_R;
    QLineEdit *le_R;
    QCheckBox *chb_manual;
    QLabel *l_k;
    QLineEdit *le_k;
    QGroupBox *gb_Whole;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *l_Dro;
    QLineEdit *le_Dro;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_ako;
    QLineEdit *le_ako;
    QPushButton *b_Calco;
    QLabel *l_bko;
    QLabel *l_Ako;
    QLabel *l_Bko;
    QLabel *l_Hko;
    QGroupBox *gb_Cut;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *l_ak;
    QLineEdit *le_ak;
    QHBoxLayout *horizontalLayout_4;
    QLabel *l_bk;
    QLineEdit *le_bk;
    QPushButton *b_Calc;
    QLabel *l_Ak;
    QLabel *l_Bk;
    QLabel *l_Hk;
    QLabel *l_lr;
    QLabel *l_Dr;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *RectRubberWidget)
    {
        if (RectRubberWidget->objectName().isEmpty())
            RectRubberWidget->setObjectName(QString::fromUtf8("RectRubberWidget"));
        RectRubberWidget->resize(528, 228);
        gridLayout_2 = new QGridLayout(RectRubberWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_ar = new QLabel(RectRubberWidget);
        l_ar->setObjectName(QString::fromUtf8("l_ar"));

        gridLayout->addWidget(l_ar, 0, 0, 1, 2);

        le_ar = new QLineEdit(RectRubberWidget);
        le_ar->setObjectName(QString::fromUtf8("le_ar"));

        gridLayout->addWidget(le_ar, 0, 2, 1, 1);

        l_br = new QLabel(RectRubberWidget);
        l_br->setObjectName(QString::fromUtf8("l_br"));

        gridLayout->addWidget(l_br, 1, 0, 1, 2);

        le_br = new QLineEdit(RectRubberWidget);
        le_br->setObjectName(QString::fromUtf8("le_br"));

        gridLayout->addWidget(le_br, 1, 2, 1, 1);

        l_R = new QLabel(RectRubberWidget);
        l_R->setObjectName(QString::fromUtf8("l_R"));

        gridLayout->addWidget(l_R, 2, 0, 1, 2);

        le_R = new QLineEdit(RectRubberWidget);
        le_R->setObjectName(QString::fromUtf8("le_R"));

        gridLayout->addWidget(le_R, 2, 2, 1, 1);

        chb_manual = new QCheckBox(RectRubberWidget);
        chb_manual->setObjectName(QString::fromUtf8("chb_manual"));

        gridLayout->addWidget(chb_manual, 3, 0, 1, 3);

        l_k = new QLabel(RectRubberWidget);
        l_k->setObjectName(QString::fromUtf8("l_k"));

        gridLayout->addWidget(l_k, 4, 0, 1, 1);

        le_k = new QLineEdit(RectRubberWidget);
        le_k->setObjectName(QString::fromUtf8("le_k"));
        le_k->setEnabled(false);

        gridLayout->addWidget(le_k, 4, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        gb_Whole = new QGroupBox(RectRubberWidget);
        gb_Whole->setObjectName(QString::fromUtf8("gb_Whole"));
        gridLayout_4 = new QGridLayout(gb_Whole);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        l_Dro = new QLabel(gb_Whole);
        l_Dro->setObjectName(QString::fromUtf8("l_Dro"));

        horizontalLayout->addWidget(l_Dro);

        le_Dro = new QLineEdit(gb_Whole);
        le_Dro->setObjectName(QString::fromUtf8("le_Dro"));

        horizontalLayout->addWidget(le_Dro);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        l_ako = new QLabel(gb_Whole);
        l_ako->setObjectName(QString::fromUtf8("l_ako"));

        horizontalLayout_2->addWidget(l_ako);

        le_ako = new QLineEdit(gb_Whole);
        le_ako->setObjectName(QString::fromUtf8("le_ako"));

        horizontalLayout_2->addWidget(le_ako);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        b_Calco = new QPushButton(gb_Whole);
        b_Calco->setObjectName(QString::fromUtf8("b_Calco"));

        gridLayout_4->addWidget(b_Calco, 2, 0, 1, 1);

        l_bko = new QLabel(gb_Whole);
        l_bko->setObjectName(QString::fromUtf8("l_bko"));

        gridLayout_4->addWidget(l_bko, 3, 0, 1, 1);

        l_Ako = new QLabel(gb_Whole);
        l_Ako->setObjectName(QString::fromUtf8("l_Ako"));

        gridLayout_4->addWidget(l_Ako, 4, 0, 1, 1);

        l_Bko = new QLabel(gb_Whole);
        l_Bko->setObjectName(QString::fromUtf8("l_Bko"));

        gridLayout_4->addWidget(l_Bko, 5, 0, 1, 1);

        l_Hko = new QLabel(gb_Whole);
        l_Hko->setObjectName(QString::fromUtf8("l_Hko"));

        gridLayout_4->addWidget(l_Hko, 6, 0, 1, 1);


        gridLayout_2->addWidget(gb_Whole, 0, 1, 2, 1);

        gb_Cut = new QGroupBox(RectRubberWidget);
        gb_Cut->setObjectName(QString::fromUtf8("gb_Cut"));
        gridLayout_3 = new QGridLayout(gb_Cut);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        l_ak = new QLabel(gb_Cut);
        l_ak->setObjectName(QString::fromUtf8("l_ak"));

        horizontalLayout_3->addWidget(l_ak);

        le_ak = new QLineEdit(gb_Cut);
        le_ak->setObjectName(QString::fromUtf8("le_ak"));

        horizontalLayout_3->addWidget(le_ak);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        l_bk = new QLabel(gb_Cut);
        l_bk->setObjectName(QString::fromUtf8("l_bk"));

        horizontalLayout_4->addWidget(l_bk);

        le_bk = new QLineEdit(gb_Cut);
        le_bk->setObjectName(QString::fromUtf8("le_bk"));

        horizontalLayout_4->addWidget(le_bk);


        verticalLayout_3->addLayout(horizontalLayout_4);

        b_Calc = new QPushButton(gb_Cut);
        b_Calc->setObjectName(QString::fromUtf8("b_Calc"));

        verticalLayout_3->addWidget(b_Calc);

        l_Ak = new QLabel(gb_Cut);
        l_Ak->setObjectName(QString::fromUtf8("l_Ak"));

        verticalLayout_3->addWidget(l_Ak);

        l_Bk = new QLabel(gb_Cut);
        l_Bk->setObjectName(QString::fromUtf8("l_Bk"));

        verticalLayout_3->addWidget(l_Bk);

        l_Hk = new QLabel(gb_Cut);
        l_Hk->setObjectName(QString::fromUtf8("l_Hk"));

        verticalLayout_3->addWidget(l_Hk);

        l_lr = new QLabel(gb_Cut);
        l_lr->setObjectName(QString::fromUtf8("l_lr"));

        verticalLayout_3->addWidget(l_lr);

        l_Dr = new QLabel(gb_Cut);
        l_Dr->setObjectName(QString::fromUtf8("l_Dr"));

        verticalLayout_3->addWidget(l_Dr);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);


        gridLayout_2->addWidget(gb_Cut, 0, 2, 2, 1);

        verticalSpacer = new QSpacerItem(20, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(RectRubberWidget);
        QObject::connect(chb_manual, SIGNAL(clicked(bool)), le_k, SLOT(setEnabled(bool)));
        QObject::connect(le_ar, SIGNAL(textChanged(QString)), le_br, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(RectRubberWidget);
    } // setupUi

    void retranslateUi(QWidget *RectRubberWidget)
    {
        RectRubberWidget->setWindowTitle(QApplication::translate("RectRubberWidget", "RectRubberWidget", 0, QApplication::UnicodeUTF8));
        l_ar->setText(QApplication::translate("RectRubberWidget", "ar", 0, QApplication::UnicodeUTF8));
        l_br->setText(QApplication::translate("RectRubberWidget", "br", 0, QApplication::UnicodeUTF8));
        l_R->setText(QApplication::translate("RectRubberWidget", "R", 0, QApplication::UnicodeUTF8));
        chb_manual->setText(QApplication::translate("RectRubberWidget", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\201\320\260\320\274\320\276\320\274\321\203", 0, QApplication::UnicodeUTF8));
        l_k->setText(QApplication::translate("RectRubberWidget", "k", 0, QApplication::UnicodeUTF8));
        gb_Whole->setTitle(QApplication::translate("RectRubberWidget", "\320\246\320\265\320\273\320\260\321\217", 0, QApplication::UnicodeUTF8));
        l_Dro->setText(QApplication::translate("RectRubberWidget", "Dr", 0, QApplication::UnicodeUTF8));
        l_ako->setText(QApplication::translate("RectRubberWidget", "ak", 0, QApplication::UnicodeUTF8));
        b_Calco->setText(QApplication::translate("RectRubberWidget", "\320\240\320\260\321\201\321\207\321\221\321\202", 0, QApplication::UnicodeUTF8));
        l_bko->setText(QApplication::translate("RectRubberWidget", "bk = ?", 0, QApplication::UnicodeUTF8));
        l_Ako->setText(QApplication::translate("RectRubberWidget", "Ak = ?", 0, QApplication::UnicodeUTF8));
        l_Bko->setText(QApplication::translate("RectRubberWidget", "Bk = ?", 0, QApplication::UnicodeUTF8));
        l_Hko->setText(QApplication::translate("RectRubberWidget", "Hk = ?", 0, QApplication::UnicodeUTF8));
        gb_Cut->setTitle(QApplication::translate("RectRubberWidget", "\320\240\320\260\320\267\321\200\320\265\320\267\320\260\320\275\320\275\320\260\321\217", 0, QApplication::UnicodeUTF8));
        l_ak->setText(QApplication::translate("RectRubberWidget", "ak", 0, QApplication::UnicodeUTF8));
        l_bk->setText(QApplication::translate("RectRubberWidget", "bk", 0, QApplication::UnicodeUTF8));
        b_Calc->setText(QApplication::translate("RectRubberWidget", "\320\240\320\260\321\201\321\207\321\221\321\202", 0, QApplication::UnicodeUTF8));
        l_Ak->setText(QApplication::translate("RectRubberWidget", "Ak = ?", 0, QApplication::UnicodeUTF8));
        l_Bk->setText(QApplication::translate("RectRubberWidget", "Bk = ?", 0, QApplication::UnicodeUTF8));
        l_Hk->setText(QApplication::translate("RectRubberWidget", "Hk = ?", 0, QApplication::UnicodeUTF8));
        l_lr->setText(QApplication::translate("RectRubberWidget", "lr = ?", 0, QApplication::UnicodeUTF8));
        l_Dr->setText(QApplication::translate("RectRubberWidget", "Dr = ?", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RectRubberWidget: public Ui_RectRubberWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTRUBBERWIDGET_H
