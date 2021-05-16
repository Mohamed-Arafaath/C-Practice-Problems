#include<iostream>
using namespace std;

int fun()
{
    static int v = 10;
    v++;
    cout <<v<<endl;
}
int main()
{
    fun();
    fun();
    fun();
    fun();
    
    return 0;
}
