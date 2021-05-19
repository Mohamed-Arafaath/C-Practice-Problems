#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    const int *const ptr = &x;

    int y = 30;
    //ptr = &y;
    cout << *ptr;

    return 0;
}
