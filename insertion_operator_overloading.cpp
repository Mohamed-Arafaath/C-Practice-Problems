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

    void display()
    {
        cout << real << "+i" << img;
    }

    friend ostream &operator<<(ostream &o, Complex &c);
};
ostream &operator<<(ostream& o, Complex& c)
{
    o << c.real << "+i" << c.img << endl;
    return o;
}

int main()
{
    Complex c1(7, 2);
    //c1.display();
    cout << c1 << endl;
    
    return 0;
}
