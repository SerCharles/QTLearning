#include<QObject>
#include "wordeditormainwindow.h"
#include "ui_wordeditormainwindow.h"
#include"wordmanager.h"

WordEditorMainWindow::WordEditorMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WordEditorMainWindow)
{
    ui->setupUi(this);
    m_Manager = new WordManager();
    ConnectSignalSlot();
}

WordEditorMainWindow::~WordEditorMainWindow()
{
    delete ui;
}

void WordEditorMainWindow::ConnectSignalSlot()
{
    connect(ui->lineEdit, SIGNAL(textChanged(QString)), m_Manager, SLOT(ChangeText(QString)));
    connect(ui->lineEdit, SIGNAL(returnPressed()), m_Manager, SLOT(UpdateShow()));
    connect(m_Manager, SIGNAL(EditCleared()), ui->lineEdit, SLOT(clear()));
    connect(m_Manager, SIGNAL(ShowChanged(QString)), ui->textEdit, SLOT(append(QString)));
}
