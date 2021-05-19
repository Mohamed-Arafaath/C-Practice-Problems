#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    static int adminno;
    string name;
    Student(string n)
    {
        name = n;
        adminno++;
        roll = adminno;
    }
    void display()
    {
        cout << "name: " << name << endl << "rollno: " << roll << endl;
   }
   friend ostream& operator<<(ostream& out, Student& s);
};

ostream& operator<<(ostream& out, Student& s)
{
    return out << "name: " << s.name << endl << "rollno: " << s.roll << endl;
}

int Student::adminno = 0;
int main()
{
    Student s1("arun");
    cout << s1;
    Student s2("tron");
    s2.display();

    return 0;
}
