#include<iostream>
using namespace std;

int swap(int *a, int *b)//pointers pointing the actual parameters
{
    int temp =*a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a =2, b = 5;
    swap(&a, &b);//address of actual parameters
    cout <<a<<endl;
    cout <<b<<endl;
    
    return 0;
}
