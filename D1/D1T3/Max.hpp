/*
 * 文件名
 * Max.hpp
 * 文件中所包含的类或接口等的名称列表
 * Max 模板函数的声明和实现
 * 文件本身内容的描述或其他说明。
 * Max 模板函数的声明和实现
 * 版本，日期
 * 1.0,08/27/2018
 */

#ifndef MAX_H
#define MAX_H

template<class T>
extern T Max(T a,T b)
{
    if(a>b) return a;
    else return b;
}


#endif