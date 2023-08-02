#include <iostream>

using namespace std;

float moneyrecieved(int currentmoney, float factor=1.04)
{
    return currentmoney * factor;
}

int main()
{
    int money=100000;
    cout<<"if you have "<<money<<" in your bank account, you will recieve "<<moneyrecieved(money)<<" after one year"<<endl;
    cout<<"FOR VIP :if you have "<<money<<" in your bank account, you will recieve "<<moneyrecieved(money,1.1)<<" after one year"<<endl;

    return 0;
}