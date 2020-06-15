#include "Payment.h"

Payment::Payment(){}

Payment::Payment(std::string name, double paymentAmount){
    //check if the payment amount entered is a valid number
    if(paymentAmount > 0)
        this->paymentAmount = paymentAmount;
    else 
        this->paymentAmount = 0;

    this->employeeName = name;
}

void Payment::setEmployeeName(std::string name){
    this->employeeName = name;
}

void Payment::setPaymentAmount(double paymentAmount){
    //check if the payment amount entered is a valid number
    if(paymentAmount > 0)
        this->paymentAmount = paymentAmount;
    else 
        this->paymentAmount = 0;
}

double Payment::getPaymentAmount(){
    return this->paymentAmount;
}

std::string Payment::getEmployeeName(){
    return this->employeeName;
}