#include <iostream>
using namespace std;

int division(int a, int b)
{
    int c;
    if (b == 0)
        throw 1;
    c = a / b;
    return c;
}
int main()
{
    int x = 10, y = 0, z;

    try
    {
        z = division(x, y);
        cout << z;

    }
    catch (int t)
    {
        cout << "Zero Division Error " << t << endl;
    }
    return 0;
}
