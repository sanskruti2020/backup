#include <iostream>

using namespace std;

class number
{
    int a;

public:
    number()
    {
        a=0;
    } //this is the default constructor which is must to be made otherwiswe error will occur here we have gioven it a default value as 0
    number(int num)         //making a constructior who take num as an input
    {
        a = num;
    }
    number(number &obj)          //it is not necessary to type this copy constructor otherwise also the program will run 
    {                            //you can seev the code writen in withoutcopyconstructior.cpp
        a = obj.a;
        cout<<"copy constructor called"<<endl;
    }
    void display()
    {
        cout << "the number stored in this object is " << a << endl;
    }
};

int main()
{
    number x, y, z(43);     //here the number(int num) constructor will be running

    x.display();
    y.display();
    z.display();

    //copy constructor
    //if i want z1 to be excatly copying as x or y or z
    number z1(z);
    z1.display();

    return 0;
}