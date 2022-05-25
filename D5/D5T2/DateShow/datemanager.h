/*
 * Filename: DateManager.h
 * Function: Judge whether the date is valid, and show the date on a messagebox
 * version: 1.0
 * date: 08/31/2018
*/
#ifndef DATAMANAGER_H
#define DATAMANAGER_H
#include<QObject>
#include<QString>

class DateManager:public QObject
{
    Q_OBJECT
    private:
        int m_Year, m_Month, m_Day;
        bool JudgeValid();
    public:
        DateManager():m_Year(1999),m_Month(2),m_Day(8){}
        ~DateManager(){}
    public slots:
        void UpdateYear(int new_year);
        void UpdateMonth(int new_month);
        void UpdateDay(int new_day);
        void ShowDate();
    signals:
};





#endif // DATAMANAGER_H
