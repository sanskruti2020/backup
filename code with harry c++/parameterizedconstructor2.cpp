#include <iostream>

using namespace std;

class point{
    int x, y;
    public :
    point(int a, int b)//constructor declaration
    {
        x = a;
        y = b;
    }
    void printdata(void)
    {
        cout<<"the point is ( "<<x<<", "<<y<<" )"<<endl;
    }
};
// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points
// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
// Distance between (1, 0) and (70, 0) is 69

int main()
{
    point p(4, 7);
    p.printdata();

    point q(5, 9);
    q.printdata();

    return 0;
}