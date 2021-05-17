#include<iostream>
using namespace std;

class Test
{
public:
    int a;
    int *p;

    Test(int x)
    {
    a = x;
    p = new int[a];
    }

    Test(Test &t)//deep_copy_constructor
    {
    a = t.a;
    p =new int[a];    
    }
};

int main()
{
    Test t1(5);
    Test t2(t1);
    
    //print the below statements after initialising the pointer p
    cout<<t1.a<<t1.*p;
    cout<<t2.a<<t2.*p;
    
    return 0;
}
