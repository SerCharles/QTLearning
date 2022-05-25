/*
 Filename: QKeyboardMedium.cpp
 Description: The Medium that send button click information to QShowMedium
 version: 1.0
 date:08/30/2018
 */
#include<QObject>
#include"qkeyboardmedium.h"

void QKeyboardMedium::ReceiveButtonClick()
{
    emit ButtonClicked(m_Tag);
}
