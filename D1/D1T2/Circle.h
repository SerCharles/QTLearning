/*
 * 文件名
 * Circle.h
 * 文件中所包含的类或接口等的名称列表
 * Shape类的子类Circle
 * 文件本身内容的描述或其他说明。
 * Circle类的声明
 * 版本，日期
 * 1.0,08/27/2018
 */
#ifndef CIRCLE_H
#define CIRCLE_H
#include"Shape.h"

class Circle:public Shape
{
protected:
    double radius;
public:
    Circle():radius(0){}
    Circle(double r):radius(r){}
    ~Circle(){}
    virtual double getarea();
};






#endif