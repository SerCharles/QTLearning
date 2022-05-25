#include <QObject>
#include <QMainWindow>
#include <QIcon>
#include <QString>
#include "pictureshowmainwindow.h"
#include "ui_pictureshowmainwindow.h"
#include "picturemanager.h"


PictureShowMainWindow::PictureShowMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PictureShowMainWindow)
{
    ui->setupUi(this);

    m_Manager = new PictureManager(ui->showButton);
    ConnectSignalSlot();
}

PictureShowMainWindow::~PictureShowMainWindow()
{
    delete ui;
}


void PictureShowMainWindow::ConnectSignalSlot()
{
    connect(ui->showButton,SIGNAL(clicked()),m_Manager,SLOT(ChangeShow()));
    connect(m_Manager,SIGNAL(TextChanged(QString)),ui->TextShow,SLOT(setText(QString)));
}




