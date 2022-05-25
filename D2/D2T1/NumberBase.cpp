/*
FileName: NumberBase.cpp
Description: The Construction,Destruction and Comparison Functions
Version:1.0
Date:08/28/2018 
*/
#include <algorithm>
#include "Constant.h"
#include "NumberBase.h"
        /* double m_nNumber;  本情况的具体数字
        int m_nUsedNumber; 得到本情况用了几个数字
        int m_nUsedNumberList[5]; 得到本情况用了哪些数字
        m_pFather; 得到本情况的左边数字
        m_pMother; 得到本情况的右边数字
        int m_nUsedWay;//得到本情况的运算，1是加，2是减，3是乘，4是除*/
NumberBase::NumberBase(double nNum, int nUsedNum, int nUsedNumList[], int pfather, int pmother, int nUsedWay)
{
    m_nNumber = nNum;
    m_nUsedNumber = nUsedNum;
    for(int i = 1; i <= nUsedNum; i ++)
    {
        m_nUsedNumberList[i] = nUsedNumList[i];
    }
    m_pFather = pfather;
    m_pMother = pmother;
    m_nUsedWay = nUsedWay;
}

/*
Function:Check Whether the new Number is legal
Warning:the nUsedNum must be the same as the Constant number
*/
bool NumberBase::JudgeLegal()
{
    for(int i = 1; i <= g_Constant->sm_nNumber; i++)
    {
        if(m_nUsedNumberList[i] != g_Constant -> sm_nNumberArray[i])
        {
            return 0;
        }
    }
    return 1;
}

