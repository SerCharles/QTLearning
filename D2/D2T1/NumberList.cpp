/*
FileName: NumberList.cpp
Description: The Calculation and Answer Retrival of Number List
Version:1.0
Date:08/28/2018 
*/
#include<iostream>
#include<vector>
#include<string>
#include"Constant.h"
#include"NumberBase.h"
#include"NumberList.h"
using namespace std;


NumberList::NumberList()
{
    for(int i = 1; i <= g_Constant->sm_nNumber; i++)
    {
        if(g_Constant->sm_nNumberArray[i] != g_Constant->sm_nNumberArray[i-1]) //初始化去重
        {
            int temp_array[2] = {0,g_Constant->sm_nNumberArray[i]};
            NumberBase temp(g_Constant->sm_nNumberArray[i],1,temp_array,-1,-1,0);
            m_eNumberList.push_back(temp);
        }
    }
}


//Calculate_Numbers函数专用，合并数组
void merge(const int nArray1[], const int nArray2[], int nArrayFinal[], const int nNumArrayLeft, const int nNumArrayRight)
{
    for(int i = 1; i <= nNumArrayLeft; i ++)
    {
        nArrayFinal[i] = nArray1[i];
    }
    for(int i = 1; i <= nNumArrayRight; i ++)
    {
        nArrayFinal[i+nNumArrayLeft] = nArray2[i];
    }
    sort(nArrayFinal+1, nArrayFinal+1+nNumArrayLeft+nNumArrayRight);
}
//生成各种中间情况
//参数：生成中间情况用的数字个数
void NumberList::CalculateNumbers(int nQuantityOfNumbers)
{
    int flag_left=0,flag_right=0,nPreviousEnd=m_eNumberList.size()-1;
    for(flag_left=0; flag_left <= nPreviousEnd; flag_left++)
    {
        for(flag_right = flag_left; flag_right <= nPreviousEnd; flag_right++)
        {
            const int temp_left = flag_left;
            const int temp_right = flag_right;

            if(m_eNumberList[temp_left].m_nUsedNumber + m_eNumberList[temp_right].m_nUsedNumber == nQuantityOfNumbers)
            {
                int temp_array[5];
                merge(m_eNumberList[temp_left].m_nUsedNumberList,m_eNumberList[temp_right].m_nUsedNumberList, temp_array, m_eNumberList[temp_left].m_nUsedNumber, m_eNumberList[temp_right].m_nUsedNumber);

                for(int i=1;i<=8;i++) //生成新情况
                {
                    double temp_num=0;
                    int temp_father=-1;int temp_mother=-1;
                    int temp_mode=0;
                    if(i==1)
                    { 
                        temp_num = m_eNumberList[temp_left].m_nNumber + m_eNumberList[temp_right].m_nNumber; 
                        temp_father=temp_left;
                        temp_mother=temp_right;
                        temp_mode=1;
                    }
                    if(i==2)
                    { 
                        temp_num = m_eNumberList[temp_right].m_nNumber + m_eNumberList[temp_left].m_nNumber; 
                        temp_father=temp_right;
                        temp_mother=temp_left;
                        temp_mode=1;
                    }
                    if(i==3)
                    { 
                        temp_num = m_eNumberList[temp_left].m_nNumber - m_eNumberList[temp_right].m_nNumber; 
                        temp_father=temp_left;
                        temp_mother=temp_right;
                        temp_mode=2;
                    }
                     if(i==4)
                    { 
                        temp_num = m_eNumberList[temp_right].m_nNumber - m_eNumberList[temp_left].m_nNumber; 
                        temp_father=temp_right;
                        temp_mother=temp_left;
                        temp_mode=2;
                    }
                     if(i==5)
                    { 
                        temp_num = m_eNumberList[temp_left].m_nNumber * m_eNumberList[temp_right].m_nNumber; 
                        temp_father=temp_left;
                        temp_mother=temp_right;
                        temp_mode=3;
                    }
                    if(i==6)
                    { 
                        temp_num = m_eNumberList[temp_right].m_nNumber * m_eNumberList[temp_left].m_nNumber; 
                        temp_father=temp_right;
                        temp_mother=temp_left;
                        temp_mode=3;
                    }
                       if(i==7)
                    { 
                         if(m_eNumberList[temp_right].m_nNumber==0) 
                        {
                            continue;
                        }
                        temp_num = m_eNumberList[temp_left].m_nNumber / m_eNumberList[temp_right].m_nNumber; 
                        temp_father=temp_left;
                        temp_mother=temp_right;
                        temp_mode=4;
                    }
                       if(i==1)
                    { 
                         if(m_eNumberList[temp_left].m_nNumber==0) 
                        {
                            continue;
                        }
                        temp_num = m_eNumberList[temp_right].m_nNumber / m_eNumberList[temp_left].m_nNumber; 
                        temp_father=temp_right;
                        temp_mother=temp_left;
                        temp_mode=4;
                    }


                    //add situation into list
                    NumberBase temp_final(temp_num, nQuantityOfNumbers, temp_array, temp_father, temp_mother, temp_mode);                
                    if(nQuantityOfNumbers < g_Constant->sm_nNumber)
                    {
                        m_eNumberList.push_back(temp_final);
                        
                    }
                    else if(nQuantityOfNumbers == g_Constant->sm_nNumber&&temp_final.m_nNumber==g_Constant->sm_nFinal)                        
                    {
                        if(temp_final.JudgeLegal())
                        {
                            m_eNumberList.push_back(temp_final);
                        }
                    }
                }


            }
        }
    }
}


//仅用于GetAnswers,进行二叉树中序遍历获取答案字符串
void NumberList::GetAnswerString(string& answer, int root)
{
    if(m_eNumberList[root].m_pFather==-1||m_eNumberList[root].m_pMother==-1)
    {
        if(m_eNumberList[root].m_nNumber<10)
        {
            answer += char('0'+int(m_eNumberList[root].m_nNumber));
        }
        else
        {
            answer += '1';
            answer += char('0'+int(m_eNumberList[root].m_nNumber-10));
        }
    }
    else
    {
        if(m_eNumberList[root].m_nUsedNumber<g_Constant->sm_nNumber)
        {
        answer+='(';
        }
        GetAnswerString(answer,m_eNumberList[root].m_pFather); //遍历左叶子节点
        if(m_eNumberList[root].m_nUsedWay==1)
            {
             answer += '+'; 
            }
        if(m_eNumberList[root].m_nUsedWay==2)
            {
             answer += '-'; 
            }
        if(m_eNumberList[root].m_nUsedWay==3)
            {
             answer += '*'; 
            }
        if(m_eNumberList[root].m_nUsedWay==4)
            {
            answer += '/'; 
            }
        GetAnswerString(answer,m_eNumberList[root].m_pMother);
        if(m_eNumberList[root].m_nUsedNumber<g_Constant->sm_nNumber)
        {
        answer+=')';
        }
    }
    
}


//生成答案
bool NumberList::GetAnswers()
{
    bool WhetherHasAnswer=0;
    for(int i=0;i<m_eNumberList.size();i++)
    {
        if(m_eNumberList[i].m_nUsedNumber==g_Constant->sm_nNumber)
        {
            WhetherHasAnswer=1;
            string temp_ans;
            GetAnswerString(temp_ans, i);
            m_eAnswerList.push_back(temp_ans);
        }
    }
    return WhetherHasAnswer;
}