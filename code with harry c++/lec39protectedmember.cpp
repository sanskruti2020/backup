#include <iostream>

using namespace std;

class base
{
    protected :
    int a;
    private:
    int b;
};

/*
For a protected member:
                        Public derivation   Private Derivation   Protected Derivation
    1. Private members      Not Inherited   Not Inherited       Not Inherited
    2. Protected members    Protected       Private             Protected
    3. Public members       Public          Private             Protected
*/

class derived : protected base
{

};

int main()
{
    base b;
    derived d;
    //cout<<b.a<<endl;      this Will not work since a is protected in both base as well as derived class
    //cout<<d.a<<endl;
    return 0;
}