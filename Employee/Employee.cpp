#include "Employee.h"

Employee::Employee(std::string firstName, std::string lastName, double salary){
    this->firstName = firstName;
    this->lastName = lastName;
    
    //checks if the salary is a valid number
    if(salary > 0)
        this->salary = salary;
    else
        this->salary = 0;
    
}

void Employee::setFirstName(std::string firstName){
    this->firstName = firstName;
}

void Employee::setLastName(std::string lastName){
    this->lastName = lastName;
}

void Employee::setSalary(double salary){
    //checks if the salary is a valid number
    if(salary > 0)
        this->salary = salary;
    else
        this->salary = 0;
}

std::string Employee::getFirstName(){
    return this->firstName;
}

std::string Employee::getLastName(){
    return this->lastName;
}

double Employee::getSalary(){
    return this->salary;
}