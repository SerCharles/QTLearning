/*
Filename: TestTimeArray.cpp
Description: Test the time taken with different ways of calculating the sum of two arries.
Version: 1.0.0
Date:08/29/2018
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include"TestTimeArray.h"
using namespace std;

//构造函数
TestTimeArray::TestTimeArray():m_nArraySize(50) //修改初始化表的默认参数就可以修改规模
{
    srand((unsigned)time(NULL));  
    int n = m_nArraySize;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0;k<n;k++)
            {
                m_3DArray1[i][j][k]=rand();
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0;k<n;k++)
            {
                m_3DArray2[i][j][k]=rand();
            }
        }
    }
}



//子类6个函数
int TestTimeArray_IJK::MeasureCalculationTime()
{
    m_BeginTime = clock();
    for(int time = 1; time <= 10; time++)
    {
        for (int i = 0; i < m_nArraySize; i++)
        {
            for(int j = 0; j < m_nArraySize; j++)
            {
                for(int k = 0; k < m_nArraySize; k++)
                {
                    m_3DArrayAnswer[i][j][k] = m_3DArray1[i][j][k] + m_3DArray2[i][j][k];
                }
            }
        }
    }
    m_EndTime = clock();
    m_TimePerRound = (m_EndTime-m_BeginTime)/10;
    return int(m_TimePerRound);
}

int TestTimeArray_IKJ::MeasureCalculationTime()
{
    m_BeginTime = clock();
    for(int time = 1; time <= 10; time++)
    {
        for (int i = 0; i < m_nArraySize; i++)
        {
            for(int k = 0; k < m_nArraySize; k++)
            {
                for(int j = 0; j < m_nArraySize; j++)
                {
                    m_3DArrayAnswer[i][j][k] = m_3DArray1[i][j][k] + m_3DArray2[i][j][k];
                }
            }
        }
    }
    m_EndTime = clock();
    m_TimePerRound = (m_EndTime-m_BeginTime)/10;
    return int(m_TimePerRound);
}

int TestTimeArray_JIK::MeasureCalculationTime()
{
    m_BeginTime = clock();
    for(int time = 1; time <= 10; time++)
    {
        for (int j = 0; j < m_nArraySize; j++)
        {
            for(int i = 0; i < m_nArraySize; i++)
            {
                for(int k = 0; k < m_nArraySize; k++)
                {
                    m_3DArrayAnswer[i][j][k] = m_3DArray1[i][j][k] + m_3DArray2[i][j][k];
                }
            }
        }
    }
    m_EndTime = clock();
    m_TimePerRound = (m_EndTime-m_BeginTime)/10;
    return int(m_TimePerRound);
}

int TestTimeArray_JKI::MeasureCalculationTime()
{
    m_BeginTime = clock();
    for(int time = 1; time <= 10; time++)
    {
        for (int j = 0; j < m_nArraySize; j++)
        {
            for(int k = 0; k < m_nArraySize; k++)
            {
                for(int i = 0; i < m_nArraySize; i++)
                {
                    m_3DArrayAnswer[i][j][k] = m_3DArray1[i][j][k] + m_3DArray2[i][j][k];
                }
            }
        }
    }
    m_EndTime = clock();
    m_TimePerRound = (m_EndTime-m_BeginTime)/10;
    return int(m_TimePerRound);
}

int TestTimeArray_KIJ::MeasureCalculationTime()
{
    m_BeginTime = clock();
    for(int time = 1; time <= 10; time++)
    {
        for (int k = 0; k < m_nArraySize; k++)
        {
            for(int i = 0; i < m_nArraySize; i++)
            {
                for(int j = 0; j < m_nArraySize; j++)
                {
                    m_3DArrayAnswer[i][j][k] = m_3DArray1[i][j][k] + m_3DArray2[i][j][k];
                }
            }
        }
    }
    m_EndTime = clock();
    m_TimePerRound = (m_EndTime-m_BeginTime)/10;
    return int(m_TimePerRound);
}

int TestTimeArray_KJI::MeasureCalculationTime()
{
    m_BeginTime = clock();
    for(int time = 1; time <= 10; time++)
    {
        for (int k = 0; k < m_nArraySize; k++)
        {
            for(int j = 0; j < m_nArraySize; j++)
            {
                for(int i = 0; i < m_nArraySize; i++)
                {
                    m_3DArrayAnswer[i][j][k] = m_3DArray1[i][j][k] + m_3DArray2[i][j][k];
                }
            }
        }
    }
    m_EndTime = clock();
    m_TimePerRound = (m_EndTime-m_BeginTime)/10;
    return int(m_TimePerRound);
}
