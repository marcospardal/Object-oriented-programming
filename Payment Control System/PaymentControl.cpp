#include "PaymentControl.h"

PaymentControl::PaymentControl(){
    for(int i = 0; i < 10; i++)
        this->payments[i] = new Payment();
}

void PaymentControl::setPayments(Payment * payment, int position){
    //checks if the entered position is a valid one
    if(position >= 0 && position < 10)
        this->payments[position] = payment;
    else
        this->payments[0] = payment;
}

double PaymentControl::getTotalPayments(){
    double total = 0;

    for(int i = 0; i < 10; i++){
        total += this->payments[i]->getPaymentAmount();
    }

    return total;
}

bool PaymentControl::findEmployee(std::string name){
    bool found = false;

    for(int i = 0; i < 10; i++){
        if(this->payments[i]->getEmployeeName() == name)
            found = true;
    }

    return found;
}