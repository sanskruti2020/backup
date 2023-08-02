#include <iostream>

using namespace std;

int sum(int a, int b)
{
    cout<<"using function with 2 arguments"<<endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout<<"using function with 3 arguments"<<endl;
    return a + b + c;
}

//calculate the volume of a cylinder 
int volume(int r, int h)
{
    return 3.14 * r * r * h;
}

//calculate the volume of cube
int volume(int a)
{
    return a * a * a;
}

int main()
{
    //int a, b, c;
    //cin>>a>>b>>c;
    cout<<"the sum of 4 , 5 and 1 is "<<sum(4,5,1)<<endl;
    cout<<"the sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"the volume of cylinder of radius 4 and height 8 is "<<volume(4,8)<<endl; 
    cout<<"the volume of cube of side a = 5  is "<<volume(5)<<endl;
    return 0;
}