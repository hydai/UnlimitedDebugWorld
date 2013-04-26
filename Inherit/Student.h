#include "Human.h"

class Student : public Human {
    public:
    // DATA AREA
        // There also are the same data like class Human, but you can add 
        // more data if you want. 
        int studentID;
        
    // FUNCTION AREA
    /* There are constructors in class Human.
     * These two constructors also are in this class Student
     * Human(void);
     * Human(int age, char *name);
     * Of course, the destructor is here, also
     * ~Human(void);
     * Although they are in the class Student, we DON'T need to implement it.
     * Because they have been implemented by its own class function. And they
     * will be called before Student is built. It seems like the following 
     * example:
     *      At birth, you can only make a decision for youself. You have no
     *      power to make a decision for your parrents.
     * */

        // Student class own constructor with no input information
        Student(void);
        // Student class own constructor with three input 
        // information: age, studentID, name
        Student(int , int , char *);
        // member function
        virtual int getAge(void);
        virtual int getStudentID(void);
        virtual char* getName(void);
}
