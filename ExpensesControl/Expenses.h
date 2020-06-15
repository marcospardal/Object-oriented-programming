#include <iostream>

class Expenses {
    private:
        double value;
        std::string expenseType;
    public:
        Expenses();
        Expenses(std::string, double);
        void setValue(double);
        void setExpenseType(std::string);
        double getValue();
        std::string getExpenseType();
};