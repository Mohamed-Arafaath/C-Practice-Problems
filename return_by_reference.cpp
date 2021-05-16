#include<iostream>
using namespace std;

int &fun(int &x)
{
    cout<< x;
    return x;
}
int main()
{
    int a =10;
    fun(a) = 25;
    cout <<a;
    
    return 0;
}
