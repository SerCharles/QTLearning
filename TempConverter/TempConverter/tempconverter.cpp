#include "tempconverter.h"
#include "ui_tempconverter.h"

TempConverter::TempConverter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TempConverter)
{
    ui->setupUi(this);
    t=new temperature();
    connect(ui->Dial_Celcius,SIGNAL(valueChanged(int)),t,SLOT(Celcius_changed(int)));
    connect(ui->Dial_Fahrenheit,SIGNAL(valueChanged(int)),t,SLOT(Fahrenheit_changed(int)));
    connect(t,SIGNAL(set_Celcius(int)),ui->Dial_Celcius,SLOT(setValue(int)));
    connect(t,SIGNAL(set_Celcius(int)),ui->Lcd_Celcius,SLOT(display(int)));
    connect(t,SIGNAL(set_Fahrenheit(int)),ui->Dial_Fahrenheit,SLOT(setValue(int)));
    connect(t,SIGNAL(set_Fahrenheit(int)),ui->Lcd_Fahrenheit,SLOT(display(int)));
    connect(ui->ExitButton,SIGNAL(clicked(bool)),this,SLOT(close()));
}


TempConverter::~TempConverter()
{
    delete ui;
}
