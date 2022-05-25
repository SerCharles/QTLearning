#ifndef QTGAUGE_H
#define QTGAUGE_H
#include<QWidget>
class QTGauge:QWidget
{
private:
    double ratio;
public:
    void paintEvent(QPaintEvent* pev);
    void keyPressEvent(QKeyEvent* kev);
    QTGauge():ratio(0){}
    ~QTGauge(){}
};

#endif // QTGAUGE_H
