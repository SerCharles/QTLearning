#include <QObject>
#include <QString>
#include "dateshowdialog.h"
#include "ui_dateshowdialog.h"
#include "datemanager.h"
DateShowDialog::DateShowDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DateShowDialog)
{
    ui->setupUi(this);
    m_Manager = new DateManager();
    ConnectSignalSlot();
}

DateShowDialog::~DateShowDialog()
{
    delete ui;
}

void DateShowDialog::ConnectSignalSlot()
{
    connect(ui->spinBox_year, SIGNAL(valueChanged(int)), m_Manager, SLOT(UpdateYear(int)));
    connect(ui->spinBox_month, SIGNAL(valueChanged(int)), m_Manager, SLOT(UpdateMonth(int)));
    connect(ui->spinBox_day, SIGNAL(valueChanged(int)), m_Manager, SLOT(UpdateDay(int)));
    connect(ui->saveButton, SIGNAL(clicked()), m_Manager, SLOT(ShowDate()));
}
