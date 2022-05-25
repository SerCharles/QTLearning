#ifndef WORDEDITORMAINWINDOW_H
#define WORDEDITORMAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include "wordmanager.h"

namespace Ui {
class WordEditorMainWindow;
}

class WordEditorMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WordEditorMainWindow(QWidget *parent = 0);
    ~WordEditorMainWindow();

private:
    Ui::WordEditorMainWindow *ui;
    WordManager* m_Manager;
    void ConnectSignalSlot();
};

#endif // WORDEDITORMAINWINDOW_H
