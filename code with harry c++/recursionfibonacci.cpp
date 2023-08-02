#include <iostream>

using namespace std;

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main()
{
    int n;
    cout<<"enter the place of which you want fibonacci number to be printed"<<endl;
    cin>>n;

    cout<<"thew term in fibonacci series at position "<<n<<" is "<<fib(n)<<endl;

    return 0;
}