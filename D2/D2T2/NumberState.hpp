/*
FileName: NumberState.hpp
Description: The Final Situations of Numbers
Version:1.0
Date:08/29/2018 
*/
#ifndef NUMBERSTATE_H
#define NUMBERSTATE_H
#include"Constant.h"
class NumberList;
class NumberState
{
    private:
    bool m_eCalculation[25];
    long long int m_nValue;
    friend class NumberList;
    public:
    NumberState():m_nValue(0)
    {
        for(int i=0; i<=24; i++)
        {
            m_eCalculation[i]=0;
        }
    }
    NumberState(long long int temp_value, bool temp_calculation[])
    {
        m_nValue = temp_value;
        for(int i = 0; i <= 24; i++)
        {
            m_eCalculation[i]=temp_calculation[i];
        }
    }
    ~NumberState(){}
};

#endif


