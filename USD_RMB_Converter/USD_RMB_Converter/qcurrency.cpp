#include"qcurrency.h"
void QCurrency::set_number(int num)
{
    if(num==RMB_number) return;
    RMB_number=num;
    USD_number=num*rate;
    emit number_changed(USD_number);
}
