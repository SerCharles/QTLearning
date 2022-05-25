/*
 Filename: QShowMedium.h
 Description: The Medium that receives button click message and change the
 version: 1.0
 date:08/30/2018
 */
#ifndef QSHOWMEDIUM_H
#define QSHOWMEDIUM_H
#include<QObject>
#include<QString>

class QShowMedium:public QObject
{
    Q_OBJECT
    private:
        QString ShowString;
    public:
        QShowMedium(){}
        ~QShowMedium(){}
    public slots:
        void ChangeString(const char order);
    signals:
        void RenewShow(QString show_str);
};





#endif // QSHOWMEDIUM_H
