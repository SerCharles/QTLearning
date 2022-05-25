/*
FileName: NumberList.h
Description: The List of Final Situations of Numbers
Version:1.0
Date:08/29/2018 
*/
#ifndef NUMBERLIST_H
#define NUMBERLIST_H
#include<iostream>
#include<string>
#include<vector>
#include"Constant.h"
#include"NumberState.hpp"



class NumberList
{
    private:
        std::vector <NumberState> m_ListOfNumbers ;
    public:
        NumberList(){}
        ~NumberList(){m_ListOfNumbers.clear();}
        void CalculateNumbers(int step, long long int temp_value, bool temp_calculation[]);
        std::string GetAnswer(bool& WhetherHasAnswer);
        std::string IntToString(int temp_int);
};





#endif