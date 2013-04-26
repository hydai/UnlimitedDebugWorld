#include <iostream>

// class define
class Student
{
public:
    virtual void show();
};

class Fred :public Student
{
public:
    void show();
};

class Fred_copy :public Student
{
public:
    void show();
};

void Call(Student & input)
{
    input.show();
}

int main(int argc, char *argv[])
{
    Student *A = new Student;
    Student *B = new Fred;
    Student *C = new Fred_copy;
    Call(*A);
    Call(*B);
    Call(*C);
    return 0;
}

// class function implement
void Student::show()
{
    std::cout<<"I am a Student!\n";
}

void Fred::show()
{
    std::cout<<"I am Fred!\n";
}

void Fred_copy::show()
{
    std::cout<<"I am Jack!\n";
}

