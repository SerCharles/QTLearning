/*
FileName: Constant.cpp
Description: The Constants of 114514
Version:1.0
Date:08/29/2018 
*/
#include<iostream>
#include"Constant.h"
using namespace std;

/*Constant类的构造函数，负责读入个数，结果和具体数字列表*/
Constant::Constant()
{
    cout << "Please input two integers as the number of integers and the final result." << endl;
    int temp_Value = 0, temp_QuantityNumber = 0;  
    cin >> temp_QuantityNumber >> temp_Value;
    m_nQuantityOfNumbers = temp_QuantityNumber;
    m_nValue = temp_Value;

    cout << "Now input the list of numbers." <<endl;
    for(int i = 1; i <= m_nQuantityOfNumbers; i++)
    {
        cin >> m_nNumberList[i];
    }  
}

Constant* g_Constant = new Constant();