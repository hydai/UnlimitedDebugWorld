#include <iostream>
#include "VirtualFunction.h"

void Student::show()
{
    std::cout<<"I am a Student!\n";
}

void Fred::show()
{
    std::cout<<"I am Fred!\n"<<;
}

void Fred_copy::show()
{
    std::cout<<"I am Fred, too!\n";
}

