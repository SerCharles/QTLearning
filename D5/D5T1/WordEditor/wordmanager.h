/*
 * Filename: WordManager.h
 * Description: manage the backend of the WordManager
 * version:1.0
 * Date: 08/31/2018
 */
#ifndef WORDMANAGER_H
#define WORDMANAGER_H
#include<QObject>
#include<QString>

class WordManager: public QObject
{
    Q_OBJECT
    private:
        QString m_CurrentText;
    public:
        WordManager(){}
        ~WordManager(){}
    public slots:
        void ChangeText(QString new_text); //When the text of edit1 changes, change m_CurrentText
        void UpdateShow(); //When press enter, clear self and change edit2
    signals:
        void EditCleared(); //Clear edit1
        void ShowChanged(QString new_text);
};

#endif // WORDMANAGER_H
