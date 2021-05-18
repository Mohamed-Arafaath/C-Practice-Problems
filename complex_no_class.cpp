#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main()
{
    Complex c1(7, 2);
    Complex c2(8, 4);
    Complex c3 = c1 + (c2);

    cout << c3.real << " " << c3.img;
    return 0;
}
