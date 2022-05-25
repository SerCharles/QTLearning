#ifndef MAINCONVERTER_H
#define MAINCONVERTER_H

#include <QMainWindow>
#include"qcurrency.h"
namespace Ui {
class MainConverter;
}

class MainConverter : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainConverter(QWidget *parent = 0);
    ~MainConverter();

private:
    Ui::MainConverter *ui;
    QCurrency* currency;
};

#endif // MAINCONVERTER_H
