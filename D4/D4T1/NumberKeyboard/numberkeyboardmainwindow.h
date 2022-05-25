#ifndef NUMBERKEYBOARDMAINWINDOW_H
#define NUMBERKEYBOARDMAINWINDOW_H
#include"qshowmedium.h"
#include"qkeyboardmedium.h"
#include <QMainWindow>
#include <vector>
namespace Ui {
class NumberKeyboardMainWindow;
}

class NumberKeyboardMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NumberKeyboardMainWindow(QWidget *parent = 0);
    ~NumberKeyboardMainWindow();

private:
    Ui::NumberKeyboardMainWindow *ui;
    void ConnectSignalSlots();
    std::vector<QKeyboardMedium*> m_ButtonMedium;
    QShowMedium* m_ShowMedium;
};

#endif // NUMBERKEYBOARDMAINWINDOW_H
