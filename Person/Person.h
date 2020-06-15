#include <iostream>

class Person {
    private:
        std::string name, phoneNumber;
        int age;
    public:
        Person(std::string);
        Person(std::string, std::string, int);
        void setName(std::string);
        void setPhoneNumber(std::string);
        void setAge(int);
        std::string getName();
        std::string getPhoneNumber();
        int getAge();
};