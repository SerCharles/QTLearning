#include<QWidget>
#include<QPainter>
#include"qtgauge.h"
void QTGauge::paintEvent(QPaintEvent *pev)
{
    QPainter p;
    int radius=0;
    p.setPen(QPen(Qt::red,Qt::SolidLine));
    p.setBrush(QBrush(Qt::black,Qt::SolidPattern));
    if(height()>width()) radius=(width()-20)/2;
    else radius=(height()-20)/2;
    p.drawEllipse(width()/2-radius,height()/2-radius,width()/2+radius,height()/2+radius);

}
