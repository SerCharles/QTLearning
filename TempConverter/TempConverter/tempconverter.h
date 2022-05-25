#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H

#include <QMainWindow>
#include"temperature.h"
namespace Ui {
class TempConverter;
}

class TempConverter : public QMainWindow
{
    Q_OBJECT

public:
    explicit TempConverter(QWidget *parent = 0);
    ~TempConverter();

private:
    Ui::TempConverter *ui;
    temperature* t;
};

#endif // TEMPCONVERTER_H
