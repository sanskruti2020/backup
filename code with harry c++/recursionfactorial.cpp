#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n * factorial(n-1);
}
//step by step calculation of factorial of a number 
//factorial(4) = 4 * factorial(3);
//factorial(4) = 4 * 3 * factorial(2);
//factorial(4) = 4 * 3 * 2 * factorial(1);
//factorial(4) = 4 * 3 * 2 * 1;

int main()
{
    int n;
    cout<<"enter the no. you want factorial of :"<<endl;
    cin>>n;

    cout<<"the factorial of "<<n<<"is "<<factorial(n)<<endl;

    return 0;
}