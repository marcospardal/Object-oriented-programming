#include "Payment.h"
#include <string>

class PaymentControl {
    private:
        Payment * payments[10];
    public:
        PaymentControl();
        void setPayments(Payment *, int);
        double getTotalPayments();
        bool findEmployee(std::string);
};