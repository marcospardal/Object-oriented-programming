#include "Person.h"

Person::Person(std::string name){
    this->name = name;
    this->age = 0;
    this->phoneNumber = "undefined";
}

Person::Person(std::string name, std::string phoneNumber, int age){
    this->name = name;
    
    //check if the entered age is a valid age
    if(age > 0){
        this->age = age;
    }else{
        this->age = 0;
    }

    this->phoneNumber = phoneNumber;
}

void Person::setName(std::string name){
    this->name = name;
}

void Person::setPhoneNumber(std::string phoneNumber){
    this->phoneNumber = phoneNumber;
}

void Person::setAge(int age){
    this->age = age;
}

std::string Person::getName(){
    return this->name;
}

std::string Person::getPhoneNumber(){
    return this->phoneNumber;
}

int Person::getAge(){
    return this->age;
}