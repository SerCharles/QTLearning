/*
 * 文件名
 * Shape.h
 * 文件中所包含的类或接口等的名称列表
 * Shape类
 * 文件本身内容的描述或其他说明。
 * Shape类的声明
 * 版本，日期
 * 1.0,08/27/2018
 */
#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
protected:
    double area;
public:
    Shape():area(0){}
    ~Shape(){}
    virtual double getarea(){return 0;}
};






#endif