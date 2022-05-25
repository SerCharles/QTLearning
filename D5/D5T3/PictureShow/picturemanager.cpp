/*
 * Filename:PictureManager.h
 * description: Manage the switch of pictures
 * version:1.0
 * date: 08/31/2018
 */
#include<QObject>
#include<QIcon>
#include<QToolButton>
#include<vector>
#include<QString>
#include<QSize>
#include"picturemanager.h"
using namespace std;

//define and store text and pictures
PictureManager::PictureManager(QToolButton* new_Button):m_PictureNumber(4),m_ThisPicture(0),m_ShowButton(new_Button)
{
    //define pictures
    QIcon icon_england("./res/england.jpg");
    QIcon icon_france("./res/france.jpg");
    QIcon icon_prussia("./res/prussia.jpg");
    QIcon icon_spain("./res/spain.jpg");

    //store pictures
    m_PictureList.push_back(icon_england);
    m_PictureList.push_back(icon_france);
    m_PictureList.push_back(icon_prussia);
    m_PictureList.push_back(icon_spain);

    //define strings
    QString text_england("Kingdom of England");
    QString text_france("Kingdom of France");
    QString text_prussia("Kingdom of Prussia");
    QString text_spain("Kingdom of Spain");

    //store strings
    m_TextList.push_back(text_england);
    m_TextList.push_back(text_france);
    m_TextList.push_back(text_prussia);
    m_TextList.push_back(text_spain);

    m_ShowButton->setIcon(m_PictureList[0]);
}


//change pictures according to button click
void PictureManager::ChangeShow()
{
    m_ThisPicture = (m_ThisPicture + 1) % m_PictureNumber;
    m_ShowButton->setIcon(m_PictureList[m_ThisPicture]);
    emit TextChanged(m_TextList[m_ThisPicture]);
}
