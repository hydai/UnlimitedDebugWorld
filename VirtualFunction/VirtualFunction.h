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

class Fred_copy :public Fred
{
public:
    void show();
};
