#include <iostream>
using namespace std;
 
class Rational
{
private:
int p;
int q;
public:
Rational(int p = 1, int q = 1) {
this->p = p;
this->q = q;
 
}
Rational operator+(Rational r2)//function should take single parameter
{
Rational temp;
temp.p = this->p * r2.q + this->q * r2.p;
temp.q = this->q * r2.q;
return temp;
}
friend ostream& operator<<(ostream& out, Rational r);
};
 
ostream& operator<<(ostream& out, Rational r)
{
out << r.p << "/" << r.q << endl;
return out;
}
 
 
int main()
{
Rational r1(5, 3);
Rational r2(9, 4);
Rational r3 = r1 + r2;
cout << r1 << " + " << r2 << " = " << r3;
 
return 0;
}
