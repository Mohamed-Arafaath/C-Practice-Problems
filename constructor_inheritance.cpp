#include <iostream>
using namespace std;

class Base
{
public:
    Base();
    Base(int x);
};

class Derived:public Base
{
public:
    Derived();
    Derived(int a);
    Derived(int x, int a);
};

int main()
{
    //Derived d;
    Derived d1(5, 10);
    return 0;
}

Base::Base()
{
    cout << "non-param of base" << endl;
}

Base::Base(int x)
{
    cout << "param of base" << endl;
}

Derived::Derived()
{
    cout << "non-param of derived" << endl;
}

Derived::Derived(int x, int a):Base(x)
{
    cout << "param of derived" << endl;
}

Derived::Derived(int a)
{
    cout << "param of derived" << endl;
}
