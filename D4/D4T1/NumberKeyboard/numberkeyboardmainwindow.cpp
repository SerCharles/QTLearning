#include<QObject>
#include<vector>
#include "numberkeyboardmainwindow.h"
#include "ui_numberkeyboardmainwindow.h"
#include"qshowmedium.h"
#include"qkeyboardmedium.h"
using namespace std;
NumberKeyboardMainWindow::NumberKeyboardMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NumberKeyboardMainWindow)
{
    ui->setupUi(this);
    ConnectSignalSlots();
}

NumberKeyboardMainWindow::~NumberKeyboardMainWindow()
{
    m_ButtonMedium.clear();
    delete(m_ShowMedium);
    delete ui;
}
void NumberKeyboardMainWindow::ConnectSignalSlots()
{
    //define keyboard mediums
    for(int i=0;i<=9;i++)
    {
        QKeyboardMedium* new_medium=new QKeyboardMedium('0'+i);
        m_ButtonMedium.push_back(new_medium);
    }
    QKeyboardMedium* delete_medium= new QKeyboardMedium(-1);
    m_ButtonMedium.push_back(delete_medium);
    QKeyboardMedium* clear_medium= new QKeyboardMedium(-2);
    m_ButtonMedium.push_back(clear_medium);

    //link buttons and keyboard mediums
    connect(ui->pushButton_0,SIGNAL(clicked()),m_ButtonMedium[0],SLOT(ReceiveButtonClick()));
    connect(ui->pushButton_1,SIGNAL(clicked()),m_ButtonMedium[1],SLOT(ReceiveButtonClick()));
    connect(ui->pushButton_2,SIGNAL(clicked()),m_ButtonMedium[2],SLOT(ReceiveButtonClick()));
    connect(ui->pushButton_3,SIGNAL(clicked()),m_ButtonMedium[3],SLOT(ReceiveButtonClick()));
    connect(ui->pushButton_4,SIGNAL(clicked()),m_ButtonMedium[4],SLOT(ReceiveButtonClick()));
    connect(ui->pushButton_5,SIGNAL(clicked()),m_ButtonMedium[5],SLOT(ReceiveButtonClick()));
    connect(ui->pushButton_6,SIGNAL(clicked()),m_ButtonMedium[6],SLOT(ReceiveButtonClick()));
    connect(ui->pushButton_7,SIGNAL(clicked()),m_ButtonMedium[7],SLOT(ReceiveButtonClick()));
    connect(ui->pushButton_8,SIGNAL(clicked()),m_ButtonMedium[8],SLOT(ReceiveButtonClick()));
    connect(ui->pushButton_9,SIGNAL(clicked()),m_ButtonMedium[9],SLOT(ReceiveButtonClick()));
    connect(ui->deleteButton,SIGNAL(clicked()),m_ButtonMedium[10],SLOT(ReceiveButtonClick()));
    connect(ui->clearButton,SIGNAL(clicked()),m_ButtonMedium[11],SLOT(ReceiveButtonClick()));

    //define and link show mediums
    m_ShowMedium=new QShowMedium();
    for(int i=0;i<m_ButtonMedium.size();i++)
    {
        connect(m_ButtonMedium[i],SIGNAL(ButtonClicked(char)),m_ShowMedium,SLOT(ChangeString(char)));
    }
    connect(m_ShowMedium,SIGNAL(RenewShow(QString)),ui->NumberShow,SLOT(setText(QString)));

    //set quit_button
    connect(ui->quitButton,SIGNAL(clicked()),this,SLOT(close()));
}
