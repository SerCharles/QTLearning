/*
 * 文件名
 * main.cpp
 * 文件中所包含的类或接口等的名称列表
 * Member 类
 * 文件本身内容的描述或其他说明。
 * 主函数main，不可修改
 * 版本，日期
 * 1.0,08/27/2018
 */
#include<iostream>
#include"Member.h"
using namespace std;
int main()
{
    Member newCommers[5] = { Member("Zhang San", 22),
    Member("Li Si", 19),
    Member("Wang Wu", 18),
    Member("Zhao Liu", 24) };
    for (int i = 0; i < 5; i++)
    {
        cout << newCommers[i] << endl;
    }
    string name[5] = { "Zhang San", "Li Si", "Wang Wu", "Zhao Liu", "Pin Yin" };
    MemberList list(newCommers, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << list[name[i]] << endl; //重载数组操作符
    }
    return 0;
}
