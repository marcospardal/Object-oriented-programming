#include "Restaurant.h"

Restaurant::Restaurant(){
    for(int i = 0; i < 20; i++)
        this->tables[i] = new Table();
}

void Restaurant::addToOrder(int tableNumber, Order order){
    bool found = false;
    //searches the table
    //if found add to the table order
    for(int i = 0; i < 20; i++){
        if(this->tables[i]->getTableNumber() == tableNumber){
            this->tables[i]->addToOrder(&order);
            found = true;
            break;
        }
    }

    if(found)
        return;
    else{
        //if not found, look for an empty table to add the order
        for(int i = 0; i < 20; i++){
            if(this->tables[i]->getTableNumber() == 0){
                this->tables[i]->addToOrder(&order);
                this->tables[i]->setTableNumber(tableNumber);
                break;
            }
        }
    }
}

double Restaurant::getRestaurantBill(){
    double totalBill = 0;

    for(int i = 0; i < 20; i++){
        if(this->tables[i]->getTableNumber() != 0)
            totalBill += this->tables[i]->tableBill();
    }

    return totalBill;
}

double Restaurant::getTableBill(int tableNumber){
    for(int i = 0; i < 20; i++){
        if(this->tables[i]->getTableNumber() == tableNumber)
            return this->tables[i]->tableBill();
    }

    return 0;
}