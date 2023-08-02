#include <iostream>

using namespace std;

class complex{
    int a, b;
    public :
    complex(void);//constructor declaration 

    void printnumber(void)
    {
        cout<<"the value of complex number is "<<a<<" + "<<b<<" i "<<endl;
    }
};

complex ::complex(void)  //this is a default constructor here as it accepts no parameter over here
{
    a=12;
    b=90;
}

int main()
{
    complex c;
    c.printnumber();

    return 0;
}