#include<iostream>
using namespace std;

int max(int a, int b, int c)
{
        if(a>b && a>c)
            return a;
        else if(b>c)
            return b;
        else
            return c;
}

int main()
{
   int a= 4, b = 5, c =8;
   int result = max(a, b, c);
   cout <<result<<" is the max!";
    return 0;
}
