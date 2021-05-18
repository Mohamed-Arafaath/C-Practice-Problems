#include <iostream>
#include<string>
using namespace std;

class Student

{

private:

    int roll_number;

    string name;

    int phy_mark;

    int chem_mark;

    int math_mark;

public:

    Student(int r, string n, int p, int c, int m);

    int average();

    void grades();

    ~Student();

};



Student::Student(int r, string n, int p, int c, int m)

{

    roll_number = r;

    name = n;

    phy_mark = p;

    chem_mark = c;

    math_mark = m;

}



int Student::average() {

    return (phy_mark + chem_mark + math_mark) / 3;

}



void Student::grades() {

if (average() > 90 && average() <= 100)

cout << "O";

else if (average() > 80 && average() <90)

cout << "A+";

else if (average() > 70 && average() < 80)

cout << "A";

else if (average() > 60 && average() < 70)

cout << "B+";

else if (average() > 50 && average() < 60)

cout << "B";

else

cout << "C" << " - You have Failed";



}

Student::~Student() {

    cout << "done";

}



int main()

{

    Student Arafath(18, "Arafath", 65, 47, 75);

    Arafath.grades();

    return 0;

}

