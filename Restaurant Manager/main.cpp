#include "Restaurant.h"

int main(void){
    Restaurant * r1 = new Restaurant();

    std::cout << "table 2 ordered two glasses of juice. R$ 3,00/glass." << std::endl;
    Order order1, order2, order3;

    order1.setDescription("glass of juice");
    order1.setAmount(2);
    order1.setNumber(21);
    order1.setPrice(3.0);

    r1->addToOrder(2, order1);

    std::cout << "table 4 ordered two large pizzas. R$ 20,00 each." << std::endl;

    order2 = Order("large pizza", 45, 2, 20.0);

    r1->addToOrder(4, order2);

    std::cout << "table 2 ordered one more glass of juice. R$ 3,00/glass." << std::endl;

    order3 = Order("glass of juice", 21, 1, 3.0);

    r1->addToOrder(2, order3);

    std::cout << "the restaurant profit was " << r1->getRestaurantBill() << std::endl;
    std::cout << "table 2 bill was R$ " << r1->getTableBill(2) << std::endl; 
    std::cout << "table 4 bill was R$ " << r1->getTableBill(4) << std::endl; 
}