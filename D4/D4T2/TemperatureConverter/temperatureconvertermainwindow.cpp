#include<QObject>
#include "temperatureconvertermainwindow.h"
#include "ui_temperatureconvertermainwindow.h"
#include"temperaturemanager.h"
TemperatureConverterMainWindow::TemperatureConverterMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TemperatureConverterMainWindow)
{
    ui->setupUi(this);
    m_TheManager = new TemperatureManager();
    ConnectSignalSlot();
}

TemperatureConverterMainWindow::~TemperatureConverterMainWindow()
{
    delete ui;
}

//connect the used signals and slots
void TemperatureConverterMainWindow::ConnectSignalSlot()
{
    connect(ui->dial_Celcius, SIGNAL(valueChanged(int)), m_TheManager, SLOT(ManageCelciusChange(int)));
    connect(ui->dial_Fahrenheit, SIGNAL(valueChanged(int)), m_TheManager, SLOT(ManageFahrenheitChange(int)));
    connect(m_TheManager, SIGNAL(ChangeCelcius(int)), ui->dial_Celcius, SLOT(setValue(int)));
    connect(m_TheManager, SIGNAL(ChangeCelcius(int)), ui->lcdNumber_Celcius, SLOT(display(int)));
    connect(m_TheManager, SIGNAL(ChangeFahrenheit(int)), ui->dial_Fahrenheit, SLOT(setValue(int)));
    connect(m_TheManager, SIGNAL(ChangeFahrenheit(int)), ui->lcdNumber_Fahrenheit, SLOT(display(int)));
    connect(ui->quitButton, SIGNAL(clicked()), this, SLOT(close()));
}
