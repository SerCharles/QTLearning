#ifndef DATESHOWMAINWINDOW_H
#define DATESHOWMAINWINDOW_H
#include"dateshowdialog.h"
#include <QMainWindow>

namespace Ui {
class DateShowMainWindow;
}

class DateShowMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DateShowMainWindow(QWidget *parent = 0);
    ~DateShowMainWindow();

private:
    Ui::DateShowMainWindow *ui;
    DateShowDialog* m_Dialog;
};

#endif // DATESHOWMAINWINDOW_H
