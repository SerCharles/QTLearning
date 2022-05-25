/*
FileName: NumberBase.h
Description: The basic information of beginning and medium numbers
Version:1.0
Date:08/28/2018 
*/
#ifndef NUMBERBASE_H
#define NUMBERBASE_H
class NumberList;
class NumberBase
{
    private:
        double m_nNumber;  //本情况的具体数字
        int m_nUsedNumber; //得到本情况用了几个数字
        int m_nUsedNumberList[5]; //得到本情况用了哪些数字
        int m_pFather; //得到本情况的左边数字
        int m_pMother; //得到本情况的右边数字
        int m_nUsedWay;//得到本情况的运算，1是加，2是减，3是乘，4是除,0是原始数字
    public:
        int SequenceInList;//在表里的位置 
        NumberBase(double nNum, int nUsedNum, int nUsedNumList[], int pfather, int pmother, int nUsedWay);    
        ~NumberBase(){}
        bool JudgeLegal();
        friend class NumberList;
};



#endif