//
// Created by gtqsc on 2023/8/7.
//

#ifndef CPLUSTEST_CHAPTER8_H
#define CPLUSTEST_CHAPTER8_H

#include <iostream>
#include <string>
#include <sstream>

class Cat{
private:
    std::string name;
    std::string breed;
    int age;

public:
    void setName(std::string nameinput);
    void setBreed(std::string breedinput);
    void setAge(int ageinput);
    std::string getName();
    std::string getBreed();
    int getAge();
    void printInfo();
};

void Cat::setName(std::string nameinput) {
    name = nameinput;
}

void Cat::setBreed(std::string breedinput) {
    breed = breedinput;
}

void Cat::setAge(int ageinput) {
    age = ageinput;
}

std::string Cat::getName() {
    return name;
}

std::string Cat::getBreed() {
    return breed;
}

int Cat::getAge() {
    return age;
}

void Cat::printInfo() {
    std::cout << "\nThe cat's name, breed, and age information: " << name << ", " << breed << ", and " << age << std::endl;
}


#endif //CPLUSTEST_CHAPTER8_H
