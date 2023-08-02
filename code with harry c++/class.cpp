#include <iostream>

using namespace std;

class Employee
{
    private:
    int a, int b, int c;
    public:
    int d, int e;
    void setdata(int a1, int b1, int c1);
    void getdata()
     {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
    
};

void Employee :: setdata(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Employee harry;
    harry.d=67;
    harry.e=78;
    harry.setdata(1,2,6);
    harry.getdata();

    return 0;
}
