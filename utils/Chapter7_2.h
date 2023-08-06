//
// Created by gtqsc on 2023/8/6.
//

#ifndef CPLUSTEST_CHAPTER7_2_H
#define CPLUSTEST_CHAPTER7_2_H

#include<iostream>

void increment(int &input); //Note the addition of '&'

int Chapter7_2()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}
void increment(int &input)//Note the addition of '&'
{
    input++; //**Note the LACK OF THE addition of '&'**
    std::cout<<"In the function call a = "<<input<<"\n";
}

#endif //CPLUSTEST_CHAPTER7_2_H
