#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
public:
    Employee(int i, string n)
    {
        id = i;
        name = n;
    }
    
    int getId() { return id; }
    string getName() { return name; }
};

class FullTimeEmployee:public Employee
{
private:
    int salary;
public:
    FullTimeEmployee(int i, string n, int s):Employee(i, n)
    {
        salary = s;
    }

    int getSalaryMonthly() { return salary; }
    int getPackage(){ return salary*12; }
};

class PartTimeEmployee :public Employee
{
private:
    int wage;
    int hours;
public:
    PartTimeEmployee(int i, string n, int w, int h) :Employee(i,n)
        {
            wage = w;
            hours = h;
        }

    int getWageHourly() { return wage; }
    int getWageTotal() { return wage*hours; }

};


int main()
{
    FullTimeEmployee f(21, "Davide", 45000);
    PartTimeEmployee p(35, "Sherin", 100, 8);

    cout << "Salary of FullTimeEmployee "<< f.getName() <<" Monthly : " << f.getSalaryMonthly() << endl;
    cout << "Salary of FullTimeEmployee " << f.getName() <<" per Anum : " << f.getPackage() << endl;
    cout << endl;
    cout << "Wage of PartTimeEmployee " << p.getName() << " Hourly : " << p.getWageHourly() << endl;
    cout << "Wage of PartTimeEmployee " << p.getName() << " per Day : " << p.getWageTotal() << endl;

    return 0;
}
