#include <iostream>

using namespace std;

int main()
{
    int a=3;
    int* b= &a;
         // .......&   adress of the operator
    cout<<"the adress of a is "<<&a<<endl;
    cout<<"the adress of a is "<<b<<endl;
       //..........*    dereference opewrator(it means value stored at that given adress)
    cout<<"the value of a is "<<*b<<endl;
        //adress of pointer to pointer
    int** c=&b;
    cout<<"the adress of b is "<<c<<endl;
    cout<<"the adress of b is "<<&b<<endl;


    return 0;
}