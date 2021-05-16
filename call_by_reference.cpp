#include<iostream>
using namespace std;

int swap(int &a, int &b)//the formal paramters take addresses of actual parameters
  //which means x alias 
  //y alias b
{
    int temp =a;
    a = b;
    b = temp;
}
int main()
{
    int x =2, y = 5;
    swap(x, y);
    cout <<x<<endl;
    cout <<y<<endl;
    
    return 0;
}
