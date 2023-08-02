//using constructor we can minimise the number of steps like sedata , printdata etc
#include <iostream>

using namespace std;

class complex{
    int a, b;
    public :
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
     complex(void); // constructor declaration  and this must be same name as of the class we have used as example here complex
     void printdata(void)
     {
         cout<<"the output complexs number is "<<a<<" + "<<b<<" i "<<endl;
     }
     
};

complex ::complex(void) //....this is a default constructor
{
    a = 10;
    b = 0;
    cout<<"hello world"<<endl;
}

int main()
{
    complex c1, c2;
    c1.printdata();
    c2.printdata();

    return 0;
}

/*  Characteristics of Constructors

1. It should be declared in the public section of the class 
2. They are automatically invoked whenever the object is created 
3. They cannot return values and do not have return types
4. It can have default arguments 
5. We cannot refer to their address

*/