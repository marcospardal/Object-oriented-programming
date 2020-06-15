#include <iostream>

class Employee {
    private:
        std::string firstName, lastName;
        double salary; //month salary
    public:
        Employee(std::string, std::string, double);
        void setFirstName(std::string);
        void setLastName(std::string);
        void setSalary(double);
        std::string getFirstName();
        std::string getLastName();
        double getSalary();
};