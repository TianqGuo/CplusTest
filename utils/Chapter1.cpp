//
// Created by gtqsc on 2023/7/26.
//

#include "Chapter1.h"


// Method to get input from user
void Chapter1::getInput() {
    std::cout << "Enter the length of the room: ";
    // Get the length as a string
    std::getline(std::cin, stringLength);
    // Convert to a float
    std::stringstream(stringLength) >> chapterStruct.length;
    // Get the width as a string
    std::cout << "Enter width: ";
    std::getline(std::cin, stringWidth);
    // Convert to a float
    std::stringstream(stringWidth) >> chapterStruct.width;
}

// Method to calculate the area
void Chapter1::calculateArea() {

    chapterStruct.area = chapterStruct.length * chapterStruct.width;
}

float Chapter1::getResult() {

    // Get input from user
    getInput();

    // Calculate the area
    calculateArea();

    std::cout << "\nThe area of the room is: " << chapterStruct.area << std::endl;
    return chapterStruct.area;

}
