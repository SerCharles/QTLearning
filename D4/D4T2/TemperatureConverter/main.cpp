#include "temperatureconvertermainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TemperatureConverterMainWindow w;
    w.show();

    return a.exec();
}
