/*
FileName: main.cpp
Version:1.0
Date:08/28/2018 
*/
#include <iostream>
#include <vector>
#include <string>
#include "Constant.h"
#include "NumberBase.h"
#include "NumberList.h"
using namespace std;


int main()
{
    sort(g_Constant -> sm_nNumberArray + 1, g_Constant -> sm_nNumberArray + g_Constant -> sm_nNumber + 1);
    NumberList* TheList = new NumberList();
    for(int i = 2; i <= g_Constant->sm_nNumber; i ++)
    {
        TheList -> CalculateNumbers(i);
    }
    //标号
    for(int i = 0; i < TheList->m_eNumberList.size(); i ++)
    {
        TheList -> m_eNumberList[i].SequenceInList = i;
    }
    //计算结果
    if(TheList -> GetAnswers())
    {
        sort(TheList -> m_eAnswerList.begin(),TheList -> m_eAnswerList.end());
        for(int i = 0; i < TheList->m_eAnswerList.size(); i ++)
        {
            cout << TheList -> m_eAnswerList[i] << endl;
        }
    }
    else
    {
        cout << "no" << endl;
    }
    delete(TheList);
    return 0;

}
