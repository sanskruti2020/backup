#include <iostream>

using namespace std;

class students
{
    protected :
    int roll_no;

    public :
    void set_rollno(int a)
    {
        roll_no = a;
    }
    void display(void)
    {
        cout<<"your roll no is "<<roll_no<<endl;
    }
};




int main()
{

    return 0;
}