#include "Table.h"

class Restaurant {
    private:
        Table * tables[20];
    public:
        Restaurant();
        void addToOrder(int, Order);
        double getRestaurantBill();
        double getTableBill(int);
};