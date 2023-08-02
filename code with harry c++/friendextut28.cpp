#include <iostream>

using namespace std;

class Y;

class X
{
    int data;
    public :
    void setvalue(int value)
    {
        data = value;  // we cannot write here value = data if written then it will show an error
    }
    friend void sum(X, Y);
};

class Y
{
    int num;
    public :
    void setvalue(int value)
    {
        num = value;
    }
    friend void sum(X, Y);
};

void sum(X o1, Y o2)  //the sum fuction has been made ....here o1 and o2 are nothing but the objects of X and Y
{
    cout<<"summing data of X and Y objects will be "<<o1.data + o2.num;
}

int main()
{
    X a1;
    a1.setvalue(3);

    Y b1;
    b1.setvalue(5);

    sum(a1, b1);

    return 0;
}