#include "pictureshowmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PictureShowMainWindow w;
    w.show();

    return a.exec();
}
