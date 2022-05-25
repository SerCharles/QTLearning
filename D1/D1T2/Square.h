/*
 * 文件名
 * Square.h
 * 文件中所包含的类或接口等的名称列表
 * Shape类的子类Square
 * 文件本身内容的描述或其他说明。
 * Square类的声明
 * 版本，日期
 * 1.0,08/27/2018
 */
#ifndef SQUARE_H
#define SQUARE_H
#include"Shape.h"

class Square:public Shape
{
protected:
    double edge_length;
public:
    Square():edge_length(0){}
    Square(double r):edge_length(r){}
    ~Square(){}
    virtual double getarea();
};






#endif