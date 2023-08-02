#include <iostream>

using namespace std;

int main()
{
    int a=4;
    int b=6;
    cout<<a<<endl;
    cout<<a++<<endl;
    cout<<a--<<endl;
    cout<<++a<<endl;
    cout<<--a<<endl;

    //comparison operators
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a<b)<<endl;

    //logical operators
    cout<<((a==b) && (a<b))<<endl;
    cout<<((a==b) || (a!=b))<<endl;


    return 0;
}