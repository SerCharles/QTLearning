/*
 * 文件名
 * Member.h
 * 文件中所包含的类或接口等的名称列表
 * Member,MemberList类
 * 文件本身内容的描述或其他说明。
 * 类Member,MemberList的声明
 * 版本，日期
 * 1.0,08/27/2018
 */


#ifndef MEMBER_H
#define MEMBER_H
#include<iostream>
#include<string>
#include<vector>
class MemberList;
class Member
{
    private:
        std::string name;
        int age;
    public:
        Member():name("?"),age(0){}
        Member(std::string n,int a):name(n),age(a){}
        ~Member(){}
    friend std::ostream& operator << (std::ostream& os,Member& c);
    friend class MemberList;
};
    extern std::ostream& operator << (std::ostream& os,Member& c);
class MemberList
{
    public:
        MemberList(){}
        MemberList(Member a[],int num);
        ~MemberList();
        std::vector<Member> players;
        int operator [] (std::string qname);
};

#endif