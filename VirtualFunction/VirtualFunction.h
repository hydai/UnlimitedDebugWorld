// class define in VirtualFunction.h
class Student //Student身份
{
public:
    virtual void SaySomething();
};

class Fred :public Student //Fred 同時也俱有Student身份
{
public:
    void Saysomething();
};

class Jack :public Student //Jack 同時也俱有Student身份
{
public:
    void Saysomething();
};

//下面這個function是老師向他們提出的問題
void Call(Student & person)
{
    person.Saysomething();
}