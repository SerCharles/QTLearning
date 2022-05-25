/*
FileName: NumberList.h
Description: The basic information of the list of numbers
Version:1.0
Date:08/28/2018 
*/
#ifndef NUMBERLIST_H
#define NUMBERLIST_H
#include<string>
#include<vector>
#include"NumberBase.h"

class NumberList
{
    public:
        std::vector<NumberBase> m_eNumberList;
        std::vector<std::string> m_eAnswerList;
    public:
        NumberList();
        ~NumberList(){m_eNumberList.clear();m_eAnswerList.clear();}
        void CalculateNumbers(int nQuantityOfNumbers);
        bool GetAnswers();
        void GetAnswerString(std::string& answer, int root);
};







#endif