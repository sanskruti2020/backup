#include <iostream>

using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "how are you " << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "kaise ho!" << endl;
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1 ::greet();
    }
};

class b
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};

class d : public b
{
public:
    void say()
    {
        cout << "hello my beutiful people " << endl;
    }
};

int main()
{
    //AMBIGUITY 1
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived v;
    v.greet();

    //AMBIGUITY 2
    b a;
    a.say();
    d m;
    m.say();

    return 0;
}