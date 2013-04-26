#include "Student.h"
#include <cstring> // using strcpy, strlen

Student::Student(void)
{
    this->age = this->studentID = 0;
    name = NULL;
}

Student::Student(int _age, int _studentID, char *_name)
{
    this->age = _age;
    this->studentID = _studentID;
    this->name = new char[strlen(_name)];
    strcpy( this->name, _name );
}

int Student::getAge(void)
{
    return this->age;
}

int Student::getStudentID(void)
{
    return this->studentID;
}

int Student::getName(void)
{
    return this->name;
}
