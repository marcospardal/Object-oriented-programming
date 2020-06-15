#include "Person.h"

int main(void){
    Person * person1 = new Person("John");
    Person * person2 = new Person("Maria", "+55 88 998765674", 21);
    Person * person3 = new Person("Paul", "+55 83 997867543", 22);

    std::cout << "Person list:" << std::endl;
    std::cout << "Name: " << person1->getName() << "\tAge: " << person1->getAge() << "\tPhone Number: " << person1->getPhoneNumber() << std::endl;
    std::cout << "Name: " << person2->getName() << "\tAge: " << person2->getAge() << "\tPhone Number: " << person2->getPhoneNumber() << std::endl;
    std::cout << "Name: " << person3->getName() << "\tAge: " << person3->getAge() << "\tPhone Number: " << person3->getPhoneNumber() << std::endl;

    std::cout << "Adding John's phone number and age..." << std::endl;

    person1->setPhoneNumber("+55 81 998764532");
    person1->setAge(31);

    std::cout << "Name: " << person1->getName() << "\tAge: " << person1->getAge() << "\tPhone Number: " << person1->getPhoneNumber() << std::endl;
}