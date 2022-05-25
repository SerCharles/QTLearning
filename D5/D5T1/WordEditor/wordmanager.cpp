/*
 * Filename: WordManager.cpp
 * Description: manage the backend of the WordManager
 * version:1.0
 * Date: 08/31/2018
 */
#include<QObject>
#include<QString>
#include"wordmanager.h"


//When the text of edit1 changes, change m_CurrentText
void WordManager::ChangeText(QString new_text)
{
    m_CurrentText = new_text;
}


//When press enter, clear self and change edit2
void WordManager::UpdateShow()
{
   // m_CurrentText.insert(0,'\n');
    emit ShowChanged(m_CurrentText);
    m_CurrentText.clear();
    emit EditCleared();
}
