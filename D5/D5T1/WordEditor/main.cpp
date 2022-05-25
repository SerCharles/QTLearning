#include "wordeditormainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WordEditorMainWindow w;
    w.show();

    return a.exec();
}
