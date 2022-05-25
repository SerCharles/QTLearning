#include<QWidget>
#include<QPainter>
#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent* qev)
{
    int radius=0;
    QPainter q(this);
    if(height()>width()) radius=(width()-40)/2;
    else radius=(height()-40)/2;
    q.setPen(QPen(Qt::red,Qt::SolidLine));
    q.setBrush(QBrush(Qt::black,Qt::SolidPattern));
    QPoint circle(width()/2-radius,height()/2-radius);
    QPoint center(width()/2,height()/2);
    qreal angle=30;
    q.save();
    q.translate(circle);
    q.drawEllipse(0,0,radius*2,radius*2);
    q.translate(-circle);
    q.restore();
    int i;
    for(i=1;i<=12;i++)
    {
       q.save();
       q.translate(center);
       q.rotate(angle*(i-1));
        if(i==1)
        {
            q.setPen(QPen(Qt::red,Qt::SolidLine));
            q.drawLine(radius*0.5,0,radius*0.9,0);
        }
        else
        {
            q.setPen(QPen(Qt::white,Qt::SolidLine));
            q.drawLine(radius*0.7,0,radius*0.9,0);
        }
        q.rotate(angle*(1-i));
        q.translate(-center);
       q.restore();
    }
    q.save();
    q.translate(center);
    q.setPen(Qt::NoPen);
    q.setBrush(QBrush(Qt::blue,Qt::SolidPattern));
    QPolygon pointer;
            pointer << QPoint(0,-radius*0.1)
            << QPoint(0, radius*0.1)
            << QPoint(radius*0.9, 0);
            q.drawPolygon(pointer);
    q.translate(-center);
    q.restore();
}
