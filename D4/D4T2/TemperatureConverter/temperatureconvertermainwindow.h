#ifndef TEMPERATURECONVERTERMAINWINDOW_H
#define TEMPERATURECONVERTERMAINWINDOW_H

#include <QMainWindow>
#include"temperaturemanager.h"
namespace Ui {
class TemperatureConverterMainWindow;
}

class TemperatureConverterMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TemperatureConverterMainWindow(QWidget *parent = 0);
    ~TemperatureConverterMainWindow();

private:
    Ui::TemperatureConverterMainWindow *ui;
    TemperatureManager* m_TheManager;
    void ConnectSignalSlot();
};

#endif // TEMPERATURECONVERTERMAINWINDOW_H
