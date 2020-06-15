#include "Expenses.h"

class ExpensesControl {
    private:
        Expenses * dayExpenses[10];
    public:
        ExpensesControl();
        void setExpense(Expenses *, int);
        double getTotalOfExpenses();
        bool findExpense(std::string);
};