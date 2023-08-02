#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); //constructor declaration

    void printnumber(void)
    {
        cout << "the value of complex number is " << a << " + " << b << " i " << endl;
    }
};

complex ::complex(int x, int y) //this is a parameterized (taking x and y as a parameters) constructor here
{
    a = x;
    b = y;
}

int main()
{
    //implicit call of constructor parameters
    complex c(3, 7);
    c.printnumber();

    //explicit call of constructor parameters
    complex d = complex(5, 8);
    d.printnumber();

    return 0;
}