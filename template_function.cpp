#include<iostream>
using namespace std;


//1. write a sum() function here to add 2 integer
template<class T>
T sum(T a, T b)
{
    return a+b;
}

int main()
{
    cout<<sum(10,5)<<endl;
    cout<<sum(12.9f,8.3f)<<endl;
  
    return 0;
}
