#include <iostream>

class Payment {
    private:
        double paymentAmount;
        std::string employeeName;
    public:
        Payment();
        Payment(std::string, double);
        void setPaymentAmount(double);
        void setEmployeeName(std::string);
        double getPaymentAmount();
        std::string getEmployeeName();
};