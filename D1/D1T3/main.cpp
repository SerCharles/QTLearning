/*
 * 文件名
 * main.cpp
 * 文件中所包含的类或接口等的名称列表
 * Max 模板函数
 * 文件本身内容的描述或其他说明。
 * 主函数main，不可修改
 * 版本，日期
 * 1.0,08/27/2018
 */
#include<iostream>
#include<string>
#include"Max.hpp"
using namespace std;
int main()
{
    int i = 1;
    int j = 2;
    cout << "Max(i, j): " << Max(i, j) << endl;
    double f1 = 11.1;
    double f2 = 22.2;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;
    string s1 = "AAAAA";
    string s2 = "BBBBB";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;
    return 0;
}