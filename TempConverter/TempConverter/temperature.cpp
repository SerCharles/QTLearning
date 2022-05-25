#include"temperature.h"
void temperature::Fahrenheit_changed(int number)
{
    if(Fahrenheit==number) return;
    Fahrenheit=number;
    Celcius=int(double((number-32))/1.8);
    emit set_Fahrenheit(Fahrenheit);
    emit set_Celcius(Celcius);
}
void temperature::Celcius_changed(int number)
{
    if(Celcius==number) return;
    Celcius=number;
    Fahrenheit=int(double(number)*1.8)+32;
    emit set_Fahrenheit(Fahrenheit);
    emit set_Celcius(Celcius);
}
