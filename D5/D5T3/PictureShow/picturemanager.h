/*
 * Filename:PictureManager.h
 * description: Manage the switch of pictures
 * version:1.0
 * date: 08/31/2018
 */
#include<QObject>
#include<QIcon>
#include<vector>
#include<QString>
#include<QToolButton>
#ifndef PICTUREMANAGER_H
#define PICTUREMANAGER_H


class PictureManager:public QObject
{
    Q_OBJECT
    private:
        const int m_PictureNumber;
        int m_ThisPicture;
        QToolButton* m_ShowButton;
        std::vector<QIcon> m_PictureList;
        std::vector<QString> m_TextList;
    public:
        PictureManager(QToolButton* new_button);
        ~PictureManager(){m_PictureList.clear();m_TextList.clear();}
    public slots:
        void ChangeShow();
    signals:
        void TextChanged(QString new_text);
};

#endif // PICTUREMANAGER_H
