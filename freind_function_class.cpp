#include <iostream>
using namespace std;

class Result;
class Test
{
private:int a;
protected:int b;
public:int c;
      friend Result;
};

class Result
{
    Test t;
    void fun()
    {
        t.a = 10;
        t.b = 20;
        t.c = 30;
    }
};

int main()
{

    return 0;
}
