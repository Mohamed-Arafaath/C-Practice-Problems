#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout << real << " +i" << img;
    }
    friend Complex operator+(Complex a, Complex b);
};

Complex operator+(Complex a, Complex b)
{
    Complex temp;
    temp.real = a.real + b.real;
    temp.img = a.img + b.img;
    return temp;
}

int main()
{
    Complex c1(7, 2);
    Complex c2(8, 4);
    Complex c3 = c1 + c2;
    c3.display();

    return 0;
}
