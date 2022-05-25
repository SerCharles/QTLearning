/*
 * 文件名
 * main.cpp
 * 文件中所包含的类或接口等的名称列表
 * Shape类和其三个子类：Circle，Rectangle，Square
 * 文件本身内容的描述或其他说明。
 * 主函数main，不可修改
 * 版本，日期
 * 1.0,08/27/2018
 */
#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"Square.h"
#include"Rectangle.h"
using namespace std;


int main(int argc, char **argv) 
{
    Shape * shapes[4];
    Circle circle(2.0);
    Rectangle rectangle(3.0, 4.0);
    Square square1(5.0);
    Square square2(4.0);
    shapes[0] = &circle;
    shapes[1] = &rectangle;
    shapes[2] = &square1;
    shapes[3] = &square2;
    for (int k = 0; k<4; k++) 
    {
        cout << "Area is " << shapes[k]->getarea() << endl;
    }
    return 0;
}

