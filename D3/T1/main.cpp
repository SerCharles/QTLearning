/*
Filename: main.cpp
Description: Comparison
Version: 1.0.0
Date:08/29/2018
*/
#include<iostream>
#include<time.h>
#include"TestTimeArray.h"
using namespace std;


int main()
{
    TestTimeArray* situations[7];
    situations[1]=new TestTimeArray_IJK();
    situations[2]=new TestTimeArray_IKJ();
    situations[3]=new TestTimeArray_JIK();
    situations[4]=new TestTimeArray_JKI();
    situations[5]=new TestTimeArray_KIJ();
    situations[6]=new TestTimeArray_KJI();
    //以上是初始化


    //以下是输出时间
    for(int i=1;i<=6;i++)
    {
        int temp_time=0;
        temp_time = situations[i]->MeasureCalculationTime();
        cout<< "The "<<i<<" th Group, which uses the sequense of ";
        switch(i)
        {
            case 1:
            cout <<"ijk";
            break;
            case 2:
            cout <<"ikj";
            break;
            case 3:
            cout <<"jik";
            break;
            case 4:
            cout <<"jki";
            break;
            case 5:
            cout <<"kij";
            break;
            case 6:
            cout <<"kji";
            break;
        }
        cout<<", spends "<<temp_time<<" ms per calculation."<<endl;
    }


    //清理
    for(int i=1;i<=6;i++)
    {
        delete (situations[i]);
    }
    return 0;
}