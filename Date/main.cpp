#include <iostream>
#include "Date.h"

int main(void){
    Date * newDate = new Date(1, 12, 2019); //sets a valid date
    Date * wrongDate = new Date(2, 31, 2019); //sets an impossible day
    Date * wrongDate2 = new Date(14, 35, 2019); //sets an impossible day and month

    std::cout << "First date:\nMonth: " << newDate->getMonth() << "\tDay: " << newDate->getDay() << "\tYear: " << newDate->getYear() << std::endl;
    std::cout << "Second date:\nMonth: " << wrongDate->getMonth() << "\tDay: " << wrongDate->getDay() << "\tYear: " << wrongDate->getYear() << std::endl;
    std::cout << "Third date:\nMonth: " << wrongDate2->getMonth() << "\tDay: " << wrongDate2->getDay() << "\tYear: " << wrongDate2->getYear() << std::endl;

}