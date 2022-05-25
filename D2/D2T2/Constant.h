/*
FileName: Constant.h
Description: The Constants of 114514
Version:1.0
Date:08/29/2018 
*/
#ifndef CONSTANT_H
#define CONSTANT_H
class Constant
{
    public:
        int m_nQuantityOfNumbers;
        long long int m_nValue;
        int m_nNumberList[25];
    public:
        Constant();
        ~Constant(){}
};
extern Constant* g_Constant;





#endif