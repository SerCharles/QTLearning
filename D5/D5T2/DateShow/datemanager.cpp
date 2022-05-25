/*
 * Filename: DateManager.cpp
 * Function: Judge whether the date is valid, and show the date on a messagebox
 * version: 1.0
 * date: 08/31/2018
*/
#include<QObject>
#include<QString>
#include<QMessageBox>
#include"datemanager.h"


//Update day,month,year due to the change of spinboxes
void DateManager::UpdateDay(int new_day)
{
    m_Day=new_day;
}
void DateManager::UpdateMonth(int new_month)
{
    m_Month=new_month;
}
void DateManager::UpdateYear(int new_year)
{
    m_Year=new_year;
}


//Judge whether the date is valid()
bool DateManager::JudgeValid()
{
    //Judge odd years
    bool whether_is_odd=0;
    if(m_Year % 4 == 0)
    {
        whether_is_odd = 1;
        if(m_Year % 100 == 0 && m_Year % 400 != 0)
        {
            whether_is_odd = 0;
        }
    }


    //initialize constants
    int day_per_month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(whether_is_odd==1)
    {
        day_per_month[2]=29;
    }
    if(m_Day > day_per_month[m_Month])
    {
        return 0;
    }
    return 1;
}


//show messagebox
void DateManager::ShowDate()
{
    const bool whether_valid = JudgeValid();
    if(whether_valid)
    {
        //switch year,month,day to qstring
        QString str_month,str_day,str_year;
        str_year = QString::number(m_Year);
        str_month = QString::number(m_Month);
        str_day = QString::number(m_Day);


        //generate the text shown on the messagebox
        QString messagebox_show;
        messagebox_show.push_back("The date is ");
        messagebox_show.push_back(str_year);
        messagebox_show.push_back('/');
        messagebox_show.push_back(str_month);
        messagebox_show.push_back('/');
        messagebox_show.push_back(str_day);


        //show the messagebox
        QMessageBox::about(NULL, "Date", messagebox_show);
    }
    else
    {
        QMessageBox::warning(NULL, "Invalid Date", "The date you input is invalid", QMessageBox::Yes);
    }
}
