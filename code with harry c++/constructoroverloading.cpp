#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex()
    {
        a = 0;
        b = 0;
    }

    void printdata()
    {
        cout << "your number is " << a << " + " << b << " i " << endl;
    }
};

int main()
{
    complex c1(4, 7);
    c1.printdata();

    complex c2(5);
    c2.printdata();

    complex c3;
    c3.printdata();
    return 0;
}