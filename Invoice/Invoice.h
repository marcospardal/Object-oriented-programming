#include <iostream>

class Invoice {
    private:
        int number, amount;
        double price;
        std::string description;
    public:
        Invoice(int, int, double, std::string);
        void setNumber(int);
        void setAmount(int);
        void setPrice(double);
        void setDescription(std::string);
        int getNumber();
        int getAmount();
        double getPrice();
        std::string getDescription();
        double getInvoiceAmount();
};