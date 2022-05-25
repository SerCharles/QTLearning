/*
 * Filename:TemperatureManager.cpp
 * Description: manage the change of temperatures
 * version: 1.0
 * date: 08/30/2018
*/
#include<QObject>
#include"temperaturemanager.h"
void TemperatureManager::ManageCelciusChange(const int new_celcius)
{
    if(new_celcius == m_TempCelcius)
    {
        return;
    }
    m_TempCelcius = new_celcius;
    m_TempFahrenheit = int(double(m_TempCelcius) * (1.8) + 32.0);
    emit ChangeCelcius(m_TempCelcius);
    emit ChangeFahrenheit(m_TempFahrenheit);
}

void TemperatureManager::ManageFahrenheitChange(const int new_fahrenheit)
{
    if(new_fahrenheit == m_TempFahrenheit)
    {
        return;
    }
    m_TempFahrenheit = new_fahrenheit;
    m_TempCelcius = int(double(m_TempFahrenheit - 32)/(1.8));
    emit ChangeCelcius(m_TempCelcius);
    emit ChangeFahrenheit(m_TempFahrenheit);
}
