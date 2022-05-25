#include "mainconverter.h"
#include "ui_mainconverter.h"
#include"qcurrency.h"
MainConverter::MainConverter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainConverter)
{
    currency=new QCurrency();
    ui->setupUi(this);
    connect(ui->spinBox,SIGNAL(valueChanged(int)),currency,SLOT(set_number(int)));
    connect(currency,SIGNAL(number_changed(int)),ui->lcdNumber,SLOT(display(int)));
}

MainConverter::~MainConverter()
{
    delete ui;
}
