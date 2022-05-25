#ifndef PICTURESHOWMAINWINDOW_H
#define PICTURESHOWMAINWINDOW_H
#include <QObject>
#include <QMainWindow>
#include <QIcon>
#include <QString>
#include "picturemanager.h"
namespace Ui {
class PictureShowMainWindow;
}

class PictureShowMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PictureShowMainWindow(QWidget *parent = 0);
    ~PictureShowMainWindow();

private:
    Ui::PictureShowMainWindow *ui;
    PictureManager* m_Manager;
    void ConnectSignalSlot();
};

#endif // PICTURESHOWMAINWINDOW_H
