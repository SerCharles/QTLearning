/*
 * 文件名
 * Member.cpp
 * 文件中所包含的类或接口等的名称列表
 * Member 类的输出重载函数
 * 文件本身内容的描述或其他说明。
 * 类Member的实现
 * 版本，日期
 * 1.0,08/27/2018
 */

#include<iostream>
#include"Member.h"


std::ostream& operator << (std::ostream& os,Member& c)
{
    os<<"The name of the player is "<<c.name<<", and his age is "<<c.age<<std::endl;
    return os;
}