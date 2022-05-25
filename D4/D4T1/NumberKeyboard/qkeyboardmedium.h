/*
 Filename: QKeyboardMedium.h
 Description: The Medium that send button click information to QShowMedium
 version: 1.0
 date:08/30/2018
 */
#ifndef QKEYBOARDMEDIUM_H
#define QKEYBOARDMEDIUM_H
#include<QObject>

class QKeyboardMedium:public QObject
{
        Q_OBJECT
    private:
        char m_Tag;
    public:
        QKeyboardMedium(const char tag):m_Tag(tag){}
        ~QKeyboardMedium(){}
    public slots:
        void ReceiveButtonClick();
    signals:
        void ButtonClicked(const char button_tag);
};



#endif // QKEYBOARDMEDIUM_H
