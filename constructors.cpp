#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
    int *p;
public:
//    Rectangle() //non -paramterised constructor or default constructor
//    {
//        length = 1;
//        breadth = 1;
//    }
    
    Rectangle(int l=1, int b=1)//paramterised constructor
//    {
    {
        set_length(l);
        set_breadth(b);
    }
    
    Rectangle(Rectangle & rect)//Copy constructor
    {
        length = rect.length;
        breadth = rect.breadth;
    }
    
    Rectangle(Rectangle & rect)//Copy constructor
    {
        length = rect.length;
        breadth = rect.breadth;
    }


    int area()
    {
        return length * breadth;
    }
    
    int perimeter()
    {
        return 2* (length + breadth);
    }
    
    void set_length(int l)
    {
        if(l>0)
            length = l;
        else
            length = 0;
    }
    
     void set_breadth(int b)
    {
        if(b>0)
           breadth = b; 
        else
           breadth =0;
            
    }
    
    int get_length()
    {
        return length;
    }
    
    int get_breadth()
    {
        return breadth;
    }
};

int main()
{
    Rectangle r1(5,3);
    Rectangle r2(r1);
    cout <<r1.area()<<endl;
    cout <<r2.area()<<endl;
    
    return 0;
}
