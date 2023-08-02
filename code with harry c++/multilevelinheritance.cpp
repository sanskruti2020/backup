#include <iostream>

using namespace std;
/*
    Notes: 
        If we are inheriting B from A and C from B:[ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called Inheritance Path
    */

class students
{
    protected :
    int roll_number;

    public :
    void set_roll_number(int );
    void get_roll_number();
};

void students :: set_roll_number(int r)
{
    roll_number=r;
}

void students :: get_roll_number()
{
    cout<<"your roll number is "<<roll_number<<endl;
}

class marks: public students
{
    protected :
    float maths;
    float physics;

    public :
    void set_marks(float , float );
    void get_marks();
};

void marks :: set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void marks :: get_marks()
{
    cout<<"your marks in maths is "<<maths<<endl;
    cout<<"your marks in physics is "<<physics<<endl;

}

class result : public marks
{
    float percentage;
    public :
    void display()
    {
        get_roll_number();
        get_marks();
        cout<<"yor percentage is "<<(maths+physics)/2<<endl;
    }
};

int main()
{
    result harry;
    harry.set_roll_number(420);
    harry.set_marks(90.0 , 98.0 );
    harry.display();

    return 0;
}