#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 0, z;

    try
    {
        if (y == 0)
        {
            throw 1;
            z = x / y;
            cout << z;
        }
    }
    catch(int t)
    {
        cout << "Zero Division Error " << t << endl;
}
    return 0;
}
