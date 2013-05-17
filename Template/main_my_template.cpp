#include <iostream>
#include <cstdio>

#include "my_template.h"

int main(int argc, char *argv[])
{
    int int_a = 1, int_b = 2;
    double dou_a = 3.14159, dou_b = 2.71828;
    char ch_a = 'Z', ch_b = 'C';
    
    std::cout<<"#### INT ####\n";
    Compare <int> int_cmp(int_a, int_b);
    std::cout<<"int max = "<<int_cmp.Max()<<"\n";
    std::cout<<endl;
    
    std::cout<<"#### DOUBLE ####\n";
    Compare <double> dou_cmp(dou_a, dou_b);
    std::cout<<"double min = "<<dou_cmp.Min()<<endl;
    std::cout<<endl;
    
    std::cout<<"#### CHAR ####\n";
    Compare <char> ch_cmp(ch_a, ch_b);
    std::cout<<"char max = "<<ch_cmp.Max()<<endl;
    std::cout<<endl;

    std::cout<<"#### pointer int \n";
    Compare <int> *ptr_int_cmp = new Compare <int> (20, 13);
    std::cout<<"int max = "<<ptr_int_cmp->Max()<<endl;
    delete ptr_int_cmp;
    ptr_int_cmp = NULL;
    std::cout<<endl;
    
    std::cout<<endl;
    std::cout<<"auto free\n";
    return 0;
}
