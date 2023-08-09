#include <iostream>
#include <string>
#include <sstream>
//#include "utils/Chapter1.cpp"
#include "utils/Chapter1.h"
#include "utils/Chapter7_1.h"
#include "utils/Chapter7_2.h"
#include "utils/Chapter8.h"

int main() {
    Chapter1 obj;

    obj.getResult();

    std::cout << "\nThe area of the room is: " << obj.chapterStruct.area << std::endl;

    Chapter7_1();

    Chapter7_2();

    Cat cat1,cat2;
    cat1.setName("Kimmy");
    cat2.setName("Bobby");
    cat1.setBreed("calico");
    cat2.setBreed("main coon");
    cat1.setAge(4);
    cat2.setAge(1);

    cat1.printInfo();
    std::cout<<"\n";
    cat2.printInfo();
    std::cout<<"\n\n";
    //Alternate printing method
    std::cout<<cat1.getName()<<" "<<cat1.getBreed()<<" "<<cat1.getAge()<<"\n";
    std::cout<<cat2.getName()<<" "<<cat2.getBreed()<<" "<<cat2.getAge();

}
