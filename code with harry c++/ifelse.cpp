#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "enter your age \n ";
    cin >> age;

    if (age >= 18)
    {
        cout << "you can vote" << endl;
    }
    else if (age > 10 && age < 18)
    {
        cout << "you are a teenager hence cannot vote" << endl;
    }
    else if (age > 5 && age < 10)
    {
        cout << "you are a school going kid" << endl;
    }
    else             //in else statement like here you need not have to give any type of condition
    {
        cout<<"you cannot vote"<<endl;
    }
    return 0;
}