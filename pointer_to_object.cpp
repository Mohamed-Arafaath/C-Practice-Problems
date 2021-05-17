#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;
    
    int area()
    {
        return length * breadth;
    }
    
    int perimeter()
    {
        return 2* (length + breadth);
    }
};

int main()
{
//    Rectangle r1;
    Rectangle *ptr = new Rectangle();
    
//    ptr = &r1;
    ptr->length = 10;
    ptr->breadth = 5; //pointer ptr caps(->) breadth used instead of dot(.)operator 
    cout <<"Area of ptr object: "<< ptr->area()<<endl;
    cout <<"Perimeter of ptr object: "<< ptr->perimeter()<<endl;
    
    return 0;
}
