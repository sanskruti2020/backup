#include <iostream>

using namespace std;

class employee
{
    int id;
    int salary;
    public :
    void setid(void)
    {
        salary = 300;
        cout<<"enter the id of the employee "<<endl;
        cin>>id;
    }
    void getid(void)
    {
        cout<<"the id of the employee is "<<id<<endl;
    }

};

int main()
{
    //employee harry, suraj, raj;
    //harry.setid();
    //harry.getid();
    //raj.setid();
    //raj.getid();
    employee fb[4];
    for(int i=0; i<4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    
    return 0;
}