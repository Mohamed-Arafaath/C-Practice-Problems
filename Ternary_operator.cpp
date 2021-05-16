#include<iostream>
using namespace std;

int max(int a, int b, int c)
{
    return a > b  && a > c ? a : b > c ? b  : c;
    //read it as:
    //if a>b && a>c return(?) a, otherwise or else if(:) b>c return(?) b, othrwise (:) c
}



int main()
{
     int x = max(4,210,43);
     cout << x;
    
    return 0;
}
