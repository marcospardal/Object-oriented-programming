#include "ExpensesControl.h"

int main(void){
    ExpensesControl * control = new ExpensesControl();
    Expenses * expense1 = new Expenses("new laptop", 1000);
    Expenses * expense2 = new Expenses("bag of oranges", 12.5);

    control->setExpense(expense1, 0);
    control->setExpense(expense2, 1);

    std::cout << "The total expenses were " << control->getTotalOfExpenses() << std::endl;
    std::cout << "Is there a laptop expense? " << (control->findExpense("new laptop") ? "yes" : "no") << std::endl;    
}