#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "fun1 of base class" << endl;
    }
};

class Derived :public Base
{
public:
    void fun1()//function over riding
    {
        cout << "fun1 of derived class" << endl;
    }
};



int main()
{
   Derived d;
   //d.Base::fun1();
   d.fun1();//fun1 of derived class will be called(function over riding)
    
   return 0;
}
