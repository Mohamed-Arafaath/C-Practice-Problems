#include<iostream>
using namespace std;

int pow(int x, int y)
{
    int z =1;
    for(int i = 0; i<y;i++)
    {
        z *=x;
    }
    return z;
}


int main()
{
    int a= 2 ,b = 2;
    int result = pow(a,b);
    cout <<result;
    return 0;
}
