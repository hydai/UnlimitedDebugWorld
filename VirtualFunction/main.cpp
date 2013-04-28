#include <iostream>
#include "VirtualFunction.h"
// main function
int main(int argc, char *argv[])
{
    Student *A = new Student;
    Student *B = new Fred;
    Student *C = new Jack;
    Call(*A);
    Call(*B);
    Call(*C);
    return 0;
}

