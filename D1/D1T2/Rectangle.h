/*
 * 文件名
 * Rectangle.h
 * 文件中所包含的类或接口等的名称列表
 * Shape类的子类Rectangle
 * 文件本身内容的描述或其他说明。
 * Rectangle类的声明
 * 版本，日期
 * 1.0,08/27/2018
 */
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"Shape.h"

class Rectangle:public Shape
{
protected:
    double length,width;
public:
    Rectangle():length(0),width(0){}
    Rectangle(double l,double w):length(l),width(w){}
    ~Rectangle(){}
    virtual double getarea();
};






#endif