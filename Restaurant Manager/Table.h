#include "Order.h"

class Table{
    private:
        Order *orders[100];
        int tableNumber;
    public:
        Table();
        void setTableNumber(int);
        int getTableNumber();
        void addToOrder(Order*); 
        void resetOrders();
        double tableBill();
};