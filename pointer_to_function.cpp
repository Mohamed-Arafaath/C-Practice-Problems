#include<iostream>
using namespace std;

int min(int x, int y)
{
    return x<y?x:y;
}

int max(int x, int y)
{
    return x>y?x:y;
}

int main()
{
    int (*ptr)(int, int);//pointer to a function declarion
    ptr = min; //initialising
    cout<<(*ptr)(10,5)<<endl;//function calling min
    
    ptr = max; //initialising
    cout<<(*ptr)(10,5)<<endl;//function calling max
    
    cout<<(*ptr)(1,5)<<endl;//function calling max as ptr is initialised to max at last
    return 0;
}
