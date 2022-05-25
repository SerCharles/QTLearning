/*
FileName: NumberList.cpp
Description: The List of Final Situations of Numbers
Version:1.0
Date:08/29/2018 
*/
#include<iostream>
#include<string>
#include<vector>
#include"Constant.h"
#include"NumberState.hpp"
#include"NumberList.h"
using namespace std;

/*
Function:CalculateNumbers
功能：枚举所有结果，并储存到List里
参数：step：递归步数
temp_value: 目前取值
temp_calculation:目前运算情况 0+,1*
*/
void NumberList::CalculateNumbers(int step, long long int temp_value, bool temp_calculation[])
{
    if(step==1)//初始化
    {
        temp_value = g_Constant->m_nNumberList[1];
        for (int i = 0; i <= 24; i++)
        {
            temp_calculation[i] = 0;
        }
        step +=1;
        CalculateNumbers(step, temp_value, temp_calculation);
        step -=1;
    }
    else
    {
        //更新加法
        temp_value += g_Constant->m_nNumberList[step];
        temp_calculation[step-1] = 0;
        if(step == g_Constant->m_nQuantityOfNumbers)
        {
            NumberState new_state(temp_value, temp_calculation);
            m_ListOfNumbers.push_back(new_state);
        }
        else
        {
            step += 1;
            CalculateNumbers(step, temp_value, temp_calculation);
            step-=1;
        }
        temp_value -= g_Constant->m_nNumberList[step];
        temp_calculation[step-1] = 0;


        //更新乘法
        temp_value *= g_Constant->m_nNumberList[step];
        temp_calculation[step-1] = 1;
        if(step == g_Constant->m_nQuantityOfNumbers)
        {
            NumberState new_state(temp_value, temp_calculation);
            m_ListOfNumbers.push_back(new_state);
        }
        else
        {
            step += 1;
            CalculateNumbers(step, temp_value, temp_calculation);
            step-=1;
        }
        temp_value /= g_Constant->m_nNumberList[step];
        temp_calculation[step-1] = 0;
    }
}

//int转化为string
string NumberList::IntToString(int temp_int)
{
    string temp_ans;
    if(temp_int==0)
    {
        temp_ans+='0';
        return temp_ans;
    }
    while(temp_int>0)
    {
        char last=(temp_int%10)+'0';
        temp_ans.insert(0,1,last);
        temp_int/=10;
    }
    return temp_ans;
}
/*功能：处理得到的结果，返回string
*/
string NumberList::GetAnswer(bool& WhetherHasAnswer)
{
    WhetherHasAnswer=0;
    int temp_min = 0;
    for(int i = 0; i < m_ListOfNumbers.size(); i++)
    {
        if(m_ListOfNumbers[i].m_nValue == g_Constant->m_nValue)
        {
            //存在相等
            string temp_answer;
            WhetherHasAnswer=1;
            for(int j = 1; j <= g_Constant->m_nQuantityOfNumbers; j++)
            {
                temp_answer += IntToString(g_Constant->m_nNumberList[j]);
                if(j != g_Constant->m_nQuantityOfNumbers)
                {
                    if(m_ListOfNumbers[i].m_eCalculation[j]==0)
                    {
                        temp_answer += '+';
                    }
                    else
                    {
                        temp_answer += '*';
                    }
                }
            }
           // temp_answer += '=';
            //temp_answer += IntToString(g_Constant->m_nValue);
            return temp_answer;
        }



        else if(m_ListOfNumbers[i].m_nValue > g_Constant->m_nValue)
        {
            if(m_ListOfNumbers[i].m_nValue > temp_min)
            {
                temp_min = m_ListOfNumbers[i].m_nValue;
            }
        }
    }

    //不存在最小值
    if(temp_min==0)
    {
        string temp_answer = "-1";
        return temp_answer;
    }

    //存在最小值
    else
    {
        string temp_answer = IntToString(temp_min);
        return temp_answer;
    }
}