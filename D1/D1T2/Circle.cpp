/*
 * 文件名
 * Circle.cpp
 * 文件中所包含的类或接口等的名称列表
 * Circle类覆盖的getarea函数实现
 * 文件本身内容的描述或其他说明。
 * getarea函数实现
 * 版本，日期
 * 1.0,08/27/2018
 */
#include<iostream>
#include"Shape.h"
#include"Circle.h"
#define PI 3.1415926

double Circle::getarea()
{
    area=PI*radius*radius;
    return area;
}