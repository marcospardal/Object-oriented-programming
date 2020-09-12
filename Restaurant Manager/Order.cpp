#include "Order.h"

Order::Order(){
    setAmount(0);
};

Order::Order(std::string desc, int number, int amount, double price){
    this->description = desc;
    this->number = number;
    this->amount = amount;

    if(price < 0)
        this->price = 0;
    else
        this->price = price;
}

void Order::setAmount(int amount){
    this->amount = amount;
}

void Order::setDescription(std::string desc){
    this->description = desc;
}

void Order::setNumber(int number){
    this->number = number;
}

void Order::setPrice(double price){
    this->price = price;
}

int Order::getAmount(){
    return this->amount;
}

int Order::getNumber(){
    return this->number;
}

double Order::getPrice(){
    return this->price * this->amount;
}

std::string Order::getDescription(){
    return this->description;
}