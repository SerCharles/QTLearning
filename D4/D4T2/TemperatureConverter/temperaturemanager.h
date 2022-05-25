/*
 * Filename:TemperatureManager.h
 * Description: manage the change of temperatures
 * version: 1.0
 * date: 08/30/2018
*/

#ifndef TEMPERATUREMANAGER_H
#define TEMPERATUREMANAGER_H
#include<QObject>
class TemperatureManager:public QObject
{
    Q_OBJECT
    private:
        int m_TempFahrenheit,m_TempCelcius;
    signals:
        void ChangeFahrenheit(int new_fahrenheit);
        void ChangeCelcius(int new_celcius);
    public slots:
        void ManageFahrenheitChange(const int new_fahrenheit);
        void ManageCelciusChange(const int new_celcius);
};

#endif // TEMPERATUREMANAGER_H
