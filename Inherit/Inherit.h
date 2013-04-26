/****************************************************************************
 * An example of class inheritance
 * hydai@2013-4-26
 ****************************************************************************/

class Human {
    public:
    // DATA AREA
        // ...maybe it will contain lots of date. In this case, I just give 
        // you some example.
        int age;
        char *name;

    // FUNCTION AREA
        // constructor with no input information
        Human(void);
        // constructor with two input information: age & name 
        Human(int , char *);

        // destructor : If we have allocated memory to the class members, 
        // we will delete they in this function. Well, sometimes we will 
        // use default destructor.
        ~Human(void);

        // member functions
        virtual int getAge(void);
        virtual char *getName(void);
};


