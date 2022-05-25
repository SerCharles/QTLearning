#include "numberkeyboardmainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NumberKeyboardMainWindow w;
    w.show();

    return a.exec();
}
