/*
FileName: main.cpp
Description: The main function
Version:1.0
Date:08/29/2018 
*/
#include<iostream>
#include<vector>
#include<string>
#include"Constant.h"
#include"NumberState.hpp"
#include"NumberList.h"
using namespace std;


int main()
{
    NumberList* TheList = new NumberList();
    bool temp_calculation[25];
    TheList->CalculateNumbers(1,0,temp_calculation);
    bool WhetherHasAnswer=0;
    string answer=TheList->GetAnswer(WhetherHasAnswer);
    if(WhetherHasAnswer==0)
    {
        cout<<"no"<<endl;
    }
    cout<<answer<<endl;
    delete(TheList); TheList=NULL;
    return 0;
}