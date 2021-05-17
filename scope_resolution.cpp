#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle& rect);
    void set_length(int l);
    void set_breadth(int b);
    int get_length();
    int get_breadth();
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();

};

int main()
{
    Rectangle r1(5, 3);
    cout << r1.area() << endl;
    if (r1.isSquare())
        cout << "yes";

    return 0;
}

Rectangle::Rectangle() //non -paramterised constructor or default constructor
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b)//paramterised constructor
{
    Rectangle::set_length(l);
    Rectangle::set_breadth(b);
}

Rectangle::Rectangle(Rectangle& rect)//Copy constructor
{
    length = rect.length;
    breadth = rect.breadth;
}

//    Rectangle::Rectangle(Rectangle & rect)//Copy constructor
//    {
//        length = rect.length;
//        breadth = rect.breadth;
//    }

void Rectangle::set_length(int l)
{
    if (l > 0)
        length = l;
    else
        length = 0;
}

void Rectangle::set_breadth(int b)
{
    if (b > 0) 
        breadth = b;
    else
        breadth = 0;

}

int Rectangle::get_length()
{
    return length;
}

int Rectangle::get_breadth()
{
    return breadth;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

bool Rectangle::isSquare()
{
    return length == breadth;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed!" << endl;
}

