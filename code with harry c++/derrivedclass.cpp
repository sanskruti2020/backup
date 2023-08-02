#include <iostream>

using namespace std;
//base class
class employee
{
    public :
    int id;
    int salary;
    employee(){}    //default constructor need to be made
    employee(int inpid)
    {
        id = inpid;
        salary = 45;        
    }
    
};
// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class programer : public employee
{
    public :
    programer(int inpid)     //for this id must be a public member of employee class
    {
        id = inpid;
    } 
    void getdata()
    {
        cout<<id<<endl;
    }
    int languagecode = 9; 
};

int main()
{
    employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    programer rahul(5);
    cout<<rahul.languagecode<<endl;
    rahul.getdata();

    return 0;
}