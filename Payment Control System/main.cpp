#include "PaymentControl.h"

int main(void){
    PaymentControl * control = new PaymentControl();
    Payment * payment1 = new Payment("John Silva", 2500);
    Payment * payment2 = new Payment("Joshua", 7500);
    Payment * payment3 = new Payment("Anne", 6700);

    control->setPayments(payment1, 0);
    control->setPayments(payment2, 1);
    control->setPayments(payment3, 2);

    std::cout << "Total payments: " << control->getTotalPayments() << std::endl;
    std::cout << "Is John among the employees? " << (control->findEmployee("John Silva") ? "yes": "no") << std::endl;
    std::cout << "Is Michael among the employees? " << (control->findEmployee("Michael") ? "yes": "no") << std::endl;
}