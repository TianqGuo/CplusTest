//
// Created by gtqsc on 2023/7/26.
//

#ifndef CPLUSTEST_CHAPTER1_H
#define CPLUSTEST_CHAPTER1_H
#include <iostream>
#include <string>
#include <sstream>



class Chapter1 {

public:
    struct ChapterStruct {
        float length = 0;
        float width = 0;
        float area = 0;
    };

    ChapterStruct chapterStruct;
    std::string stringLength, stringWidth;
    void getInput();

    void calculateArea();

    float getResult();
};

#endif //CPLUSTEST_CHAPTER1_H
