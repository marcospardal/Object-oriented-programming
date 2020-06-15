#include "ExpensesControl.h"

ExpensesControl::ExpensesControl(){
    for(int i = 0; i < 10; i++)
        this->dayExpenses[i] = new Expenses();
}

void ExpensesControl::setExpense(Expenses * expense, int position){
    if(position >= 0 && position < 10){
        this->dayExpenses[position] = expense;
    }else{
        this->dayExpenses[0] = expense;
    }
}

double ExpensesControl::getTotalOfExpenses(){
    double total = 0;

    for(int i = 0; i < 10; i++){
        total += this->dayExpenses[i]->getValue();
    }

    return total;
}

bool ExpensesControl::findExpense(std::string expenseType){
    bool found = false;

    for(int i = 0; i < 10; i++){
        if(this->dayExpenses[i]->getExpenseType().find(expenseType))
            found = true;
    }

    return found;
}