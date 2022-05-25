/*
FileName: Constant.h
Description: The Constants of 24 problem
Version:1.0
Date:08/28/2018 
*/
#ifndef CONSTANT_H
#define CONSTANT_H
#include <iostream>
#include <algorithm>
class Constant
{
    public:
        const int sm_nNumber ; //数字数目
        const double sm_nFinal ; //要求结果
        int sm_nNumberArray[5]; //具体数字,除了在NumberList之外请不要使用
    public:
        Constant():sm_nNumber(4),sm_nFinal(24)
        {
            std::cout << "Please input four integers between 1 and 13" << std::endl;
            int i;
            for(i = 1; i <= Constant::sm_nNumber; i++)
                {
                    int temp;
                    std::cin >> temp;
                    sm_nNumberArray[i] = temp; 
                }
        }
        ~Constant(){}
};
//const int Constant::sm_nNumber=4;
//const double Constant::sm_nFinal=24;

extern Constant* g_Constant;

#endif