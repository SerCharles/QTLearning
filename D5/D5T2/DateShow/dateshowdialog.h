#ifndef DATESHOWDIALOG_H
#define DATESHOWDIALOG_H

#include <QDialog>
#include "datemanager.h"

namespace Ui {
class DateShowDialog;
}

class DateShowDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DateShowDialog(QWidget *parent = 0);
    ~DateShowDialog();

private:
    Ui::DateShowDialog *ui;
    DateManager* m_Manager;
    void ConnectSignalSlot();
};

#endif // DATESHOWDIALOG_H
