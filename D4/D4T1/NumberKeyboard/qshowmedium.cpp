/*
 Filename: QShowMedium.cpp
 Description: The Medium that receives button click message and change the
 version: 1.0
 date:08/30/2018
 */
#include<QObject>
#include<QString>
#include"qshowmedium.h"


//receive button click, and change the show.
void QShowMedium::ChangeString(const char order)
{
    if(order>=0)
    {
        ShowString.push_back(order);
    }
    else if(order==-1)
    {
        ShowString.chop(1);
    }
    else if(order==-2)
    {
        ShowString.clear();
    }
    emit RenewShow(ShowString);
}
