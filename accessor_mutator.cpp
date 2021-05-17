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
    
    void set_length(int l)// get function - accessor //set function - mutator
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
    Rectangle r1;
  
    r1.set_length (-10);
    r1.set_breadth(5);
    cout <<"Area of r1 object_pri: "<<r1.area()<<endl;
    cout <<"Perimeter of r1 object_pri: "<<r1.perimeter()<<endl;
    cout <<"length of r1 object_pri: "<< r1.get_length()<<endl;
    cout <<"Breadth of r1 object_pri: " <<r1.get_breadth()<<endl;
  
    return 0;
}
