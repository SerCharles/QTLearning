#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include<QObject>

class temperature: public QObject
{
    Q_OBJECT
private:
    int Fahrenheit,Celcius;
public:
    temperature():Celcius(0),Fahrenheit(32){}
    temperature(int c):Celcius(c),Fahrenheit(int(double(c)*1.8+32)){}
    ~temperature(){}
public slots:
    void Fahrenheit_changed(int number);
    void Celcius_changed(int number);
signals:
    void set_Fahrenheit(int number);
    void set_Celcius(int number);
};


#endif // TEMPERATURE_H
