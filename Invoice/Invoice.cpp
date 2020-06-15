#include "Invoice.h"

Invoice::Invoice(int number, int amount, double price, std::string description){
    this->number = number;
    //checks if the amount entered is positive
    if(amount > 0)
        this->amount = amount;
    else
        this->amount = 0;
    //checks if the price entered is positive
    if(price > 0)
        this->price = price;
    else
        this->price = 0;
    
    this->description = description;
}

void Invoice::setAmount(int amount){
    //checks if the amount entered is positive
    if(amount > 0)
        this->amount = amount;
    else
        this->amount = 0;
}

void Invoice::setDescription(std::string description){
    this->description = description;
}

void Invoice::setPrice(double price){
    //checks if the price entered is positive
    if(price > 0)
        this->price = price;
    else
        this->price = 0;
}

void Invoice::setNumber(int number){
    this->number = number;
}

int Invoice::getAmount(){
    return this->amount;
}

int Invoice::getNumber(){
    return this->number;
}

double Invoice::getPrice(){
    return this->price;
}

std::string Invoice::getDescription(){
    return this->description;
}

double Invoice::getInvoiceAmount(){
    return this->price * this->amount;
}