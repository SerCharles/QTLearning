#include<QObject>
#include "dateshowmainwindow.h"
#include "ui_dateshowmainwindow.h"
#include "dateshowdialog.h"
DateShowMainWindow::DateShowMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DateShowMainWindow)
{
    ui->setupUi(this);
    m_Dialog = new DateShowDialog();
    connect(ui->menuButton,SIGNAL(clicked()),m_Dialog,SLOT(open()));
}

DateShowMainWindow::~DateShowMainWindow()
{
    delete ui;
}
