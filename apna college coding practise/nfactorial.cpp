#include <iostream>

using namespace std;

int main()
{
    int n, ans=1;
    cout<<"Enter No. To Find Factorial : ";
    for(int i=1; i<=n; i++)
    {
        ans = ans * i;
    }
    return 0;
}