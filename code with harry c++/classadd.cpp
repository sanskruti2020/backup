#include <iostream>

using namespace std;

class add
{
    private :
    int x;
    int y;

    public :

    void getdata()
    {
        cout<<"enter the two numbers :\n";
        cin>>x>>y;
    }

    void displaydata()
    {
        cout<<"RESULT : "<<x+y<<endl;
    }

};

int main()
{
    add p1, p2;
    p1.getdata();
    p1.displaydata();

    p2.getdata();
    p2.displaydata();

 return 0;

}