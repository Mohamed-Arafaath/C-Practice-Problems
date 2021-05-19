#include <iostream>
using namespace std;

class Outer
{
public:
    int a = 10;
    static int b;
    void fun() {
        cout << "outer";
        n.show();
    }
    class Nested
    {
    public:
        int x = 10;
        void show()
        {
            cout << "Nested";
        }
    };
    Nested n;
};
int Outer::b = 20;
int main()
{
    Outer o1;
    o1.fun();
    Outer::Nested n1;
    n1.show();
    return 0;
}
