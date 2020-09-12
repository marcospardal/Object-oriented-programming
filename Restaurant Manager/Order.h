#include <iostream>

class Order {
    private:
        int number, amount;
        std::string description;
        double price;
    public:
        Order();
        Order(std::string, int, int, double);
        void setDescription(std::string);
        void setNumber(int);
        void setAmount(int);
        void setPrice(double);
        int getNumber();
        int getAmount();
        double getPrice();
        std::string getDescription();
};