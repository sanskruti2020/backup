#include <iostream>

using namespace std;

int main()
{   //pointervariable
    //static int a=10;   //if we put static variable then its value will not be changed though programm
    int a=10;
    int *ptr;
    ptr= &a;//adreess of operator

    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&a<<endl;

    //reference variable
    int &y=a;
    cout<<y<<endl;
    y++;
    cout<<y<<endl;
    a++;
    cout<<y<<endl;
    ++a;
    cout<<y<<endl;
    cout<<&y<<endl;

    return 0;
}