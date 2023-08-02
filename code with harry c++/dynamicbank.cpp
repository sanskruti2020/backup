#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    bankdeposit() {}    //this(is must to be) binkamka constructor banana jaruri hota hai otherwise our code will shoe an error
    bankdeposit(int p, int y, float r); //here r can be value like 0.04           //remember here semicoln are not used only comma are used inside the bracket
    bankdeposit(int p, int y, int r);   //here r can take values like 15           // semicolon are used onty in for or other loops
    void show();
};

bankdeposit :: bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

bankdeposit :: bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void bankdeposit :: show()
{
    cout << "the principal amount was " << principal << endl
         << " the amount after " << years << " years will be " << returnvalue << endl;
}

int main()
{
    bankdeposit bd1, bd2, bd3;
    int p;
    int y;
    float r;
    int R;

    //bd3.show();

    cout << "enter the principal, years and interestrate" << endl;
    cin >> p >> y >> r;

    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout << "enter the principal, years and interestrate" << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();

    return 0;
}