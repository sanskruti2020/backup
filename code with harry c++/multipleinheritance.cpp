#include <iostream>
using namespace std;

class base1
{
    protected :
    int base1int;

    public :
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
    protected :
    int base2int;

    public :
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2
{
    public:
    void show()
    {
        cout<<"the valu of base1 is "<<base1int<<endl;
        cout<<"the valu of base2 is "<<base2int<<endl;
        cout<<"the sum of these two is "<<base1int + base2int<<endl;
    }
};
/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected

Member functions:
    set_base1int() --> public
    set_base2int() --> public
    set_show() --> public
*/

int main()
{
    derived harry;
    harry.set_base1int(7);
    harry.set_base2int(6);
    harry.show();

    return 0;
}