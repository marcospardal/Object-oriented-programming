#include "Invoice.h"

int main(void){
    Invoice * cocaCola = new Invoice(210, 2, 4, "coca cola");
    Invoice * laptop = new Invoice(234, 1, 1000, "gamer laptop");
    Invoice * orange = new Invoice(111, 5, 1.25, "oranges");

    std::cout << "First Invoice - Description: " << cocaCola->getDescription() << "\tAmount: " << cocaCola->getAmount() << "\tUnit price: " << cocaCola->getPrice() <<"\tFinal price: " << cocaCola->getInvoiceAmount() << std::endl;
    std::cout << "Second Invoice - Description: " << laptop->getDescription() << "\tAmount: " << laptop->getAmount() << "\tUnit price: " << laptop->getPrice() << "\tFinal price: " << laptop->getInvoiceAmount() << std::endl; 
    std::cout << "First Invoice - Description: " << orange->getDescription() << "\tAmount: " << orange->getAmount() << "\tUnit price: " << orange->getPrice() << "\tFinal price: " << orange->getInvoiceAmount() << std::endl;

    orange->setDescription("bag of oranges");
    orange->setAmount(10);

     std::cout << "First Invoice - Description: " << orange->getDescription() << "\tAmount: " << orange->getAmount() << "\tUnit price: " << orange->getPrice() << "\tFinal price: " << orange->getInvoiceAmount() << std::endl;
}