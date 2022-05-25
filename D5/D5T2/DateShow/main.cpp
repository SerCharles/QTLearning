#include "dateshowmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DateShowMainWindow w;
    w.show();

    return a.exec();
}
