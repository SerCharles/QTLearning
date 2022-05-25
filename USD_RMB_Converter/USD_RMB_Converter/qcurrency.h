#ifndef QCURRENCY_H
#define QCURRENCY_H
#include<QObject>
class QCurrency: public QObject
{
    Q_OBJECT
private:
    int USD_number,RMB_number;
    const double rate=6.8309;
public:
    QCurrency():USD_number(0),RMB_number(0){}
    ~QCurrency(){}
public slots:
    void set_number(int num);
signals:
    void number_changed(int num);

};

#endif // QCURRENCY_H
