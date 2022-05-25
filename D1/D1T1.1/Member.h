/*
 * 文件名
 * Member.h
 * 文件中所包含的类或接口等的名称列表
 * Member 类
 * 文件本身内容的描述或其他说明。
 * 类Member的声明
 * 版本，日期
 * 1.0,08/27/2018
 */


#ifndef MEMBER_H
#define MEMBER_H
#include<iostream>
#include<string>

class Member
{
    private:
        const std::string name;
        const int age;
    public:
        Member():name("?"),age(0){}
        Member(std::string n,int a):name(n),age(a){}
        ~Member(){}
    friend std::ostream& operator << (std::ostream& os,Member& c);
};
    extern std::ostream& operator << (std::ostream& os,Member& c);


#endif