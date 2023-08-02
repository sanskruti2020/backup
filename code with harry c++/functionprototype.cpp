#include <iostream>

using namespace std;

//int sum(int a, b);not acceptable
int sum(int a, int b);//acceptable

int main()
{
    int num1, num2;
    //num1 and num2 are actual parameters
    cout<<"enter the first number "<<endl;
    cin>>num1;
    cout<<"enter the second number "<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1, num2);

    return 0;
}

int sum(int a, int b)
//formal parameters a and b are taking values from actual parameters
{
    int c = a+b;
    return c;
}