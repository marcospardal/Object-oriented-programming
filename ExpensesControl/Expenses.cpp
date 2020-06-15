#include "Expenses.h"

Expenses::Expenses(){}

Expenses::Expenses(std::string expenseType, double value){
    //check if the entered value is a positive number
    if(value > 0)
        this->value = value;
    else
        this->value = 0;
    
    this->expenseType = expenseType;
}

void Expenses::setValue(double value){
    //check if the entered value is a positive number
    if(value > 0)
        this->value = value;
    else
        this->value = 0;
}

void Expenses::setExpenseType(std::string expenseType){
    this->expenseType = expenseType;
}

double Expenses::getValue(){
    return this->value;
}

std::string Expenses::getExpenseType(){
    return this->expenseType;
}