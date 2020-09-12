#include "Table.h"

int position = 0;

Table::Table(){
    setTableNumber(0);
    for(int i = 0; i < 100; i++)
        this->orders[i] = new Order();
}

void Table::setTableNumber(int number){
    this->tableNumber = number;
}

int Table::getTableNumber(){
    return this->tableNumber;
}

void Table::addToOrder(Order* order){
    bool found = false;

    for(int i = 0; i < 100; i++){
        if(this->orders[i]->getDescription() == order->getDescription()){
            this->orders[i]->setAmount(order->getAmount() + this->orders[i]->getAmount());
            found = true;
            position++;
            break;
        }
    }

    if(found)
        return;
    else{
        this->orders[position] = order;
        position++;
        return;
    }
    
}

void Table::resetOrders(){
    for(int i = 0; i < 100; i++){
        this->orders[i]->setAmount(0);
    }
}

double Table::tableBill(){
    double totalPrice = 0;
    
    for(int i = 0; i < 100; i++){
        if(this->orders[i]->getAmount() != 0)
            totalPrice += this->orders[i]->getPrice();
    }

    return totalPrice;
}