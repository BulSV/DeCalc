#ifndef RECTRUBBERWIDGET_H
#define RECTRUBBERWIDGET_H

#include <QWidget>
#include "rectrubber.h"

namespace Ui {
class RectRubberWidget;
}

class RectRubberWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit RectRubberWidget(QWidget *parent = 0);
    ~RectRubberWidget();

public slots:
    void calcoSlot();
    void calcSlot();
    void chbManualDefault(bool isActive);
    
private:
    Ui::RectRubberWidget *ui;
    RectRubber rectRubber;
};

#endif // RECTRUBBERWIDGET_H
