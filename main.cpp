#include <iostream>
#include <string>
#include <sstream>
//#include "utils/Chapter1.cpp"
#include "utils/Chapter1.h"
#include "utils/Chapter7_1.h"
#include "utils/Chapter7_2.h"

int main() {
    Chapter1 obj;

    obj.getResult();

    std::cout << "\nThe area of the room is: " << obj.chapterStruct.area << std::endl;

    Chapter7_1();

    Chapter7_2();
}
