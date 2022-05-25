/*
 * 文件名
 * MemberList.cpp
 * 文件中所包含的类或接口等的名称列表
 * MemberList 类的构造，析构,数组重载函数
 * 文件本身内容的描述或其他说明。
 * 类MemberList的实现
 * 版本，日期
 * 1.0,08/27/2018
 */

#include<iostream>
#include"Member.h"
#include<vector>
#include<string>
MemberList::MemberList(Member a[],int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        players.push_back(a[i]);
    }
}
MemberList::~MemberList()
{
    players.clear();
}
int MemberList::operator [] (std::string qname)
{
    int i;
    for(i=0;i<players.size();i++)
    {
        std::string temp_string=players[i].name;
        int temp_age=players[i].age;
      if(qname==temp_string) return temp_age;
    }
    return -1;
}
