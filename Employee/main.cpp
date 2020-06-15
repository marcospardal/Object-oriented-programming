#include "Employee.h"

int main(void){
    Employee * John = new Employee("John", "Silva", 5000.0);
    Employee * Maria = new Employee("Maria", "Sousa", 6000.0);

    std::cout << "Employee list" << std::endl;
    std::cout << "First name: " << John->getFirstName() << "\tLast name: " << John->getLastName() << "\tAnnual Salary: " << (12 * John->getSalary()) << std::endl;
    std::cout << "First name: " << Maria->getFirstName() << "\tLast name: " << Maria->getLastName() << "\tAnnual Salary: " << (12 * Maria->getSalary()) << std::endl;

    std::cout << "Adding 10% bonus to monthly salary..." << std::endl;

    double newSalary = John->getSalary() + (John->getSalary() * 0.1);
    John->setSalary(newSalary);

    newSalary = Maria->getSalary() + (Maria->getSalary() * 0.1);
    Maria->setSalary(newSalary);

    std::cout << "First name: " << John->getFirstName() << "\tLast name: " << John->getLastName() << "\tNew annual Salary: " << (12 * John->getSalary()) << std::endl;
    std::cout << "First name: " << Maria->getFirstName() << "\tLast name: " << Maria->getLastName() << "\tNew Annual Salary: " << (12 * Maria->getSalary()) << std::endl;

}