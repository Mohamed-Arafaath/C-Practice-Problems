#include<iostream>
using namespace std;

float add(float x, float y)
{
    float z;
    z= x +y;
    return z;
    
}
int main()
{
    float a =3.456,b =5.25121;
    float c = add(a,b);
    cout<<c;
    
    return 0;
}
