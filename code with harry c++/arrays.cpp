#include <iostream>

using namespace std;

int main()
{
    int marks[4]={32, 45, 56, 87};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
     
     //another method

    for(int i=0; i<4; i++)
    {
        cout<<"the marks of "<<i<<"is "<<marks[i]<<endl;
    }
          // another method using pointers
    int* p = marks;
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is "<<*(p+3)<<endl;      
    return 0;
}