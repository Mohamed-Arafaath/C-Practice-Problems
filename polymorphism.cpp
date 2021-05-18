# include<iostream>
using namespace std;
    
/*program for obtaining polymorphism

*/
class car 
{
public:
	virtual void start()// base class fun is virtual which means base class is an abstract >>
	{
		cout<<"car started"<<endl;
	}
};
class innova:public car
{
public:
	void start()
	{
		cout<<"innova started"<<endl;
	}
};
class swift:public car
{
public:
	void start()
        {
		cout<<"swift started"<<endl;
	}
};
int main()
{
	car *p=new innova();
	ptr->start();//start fun of Innova class will work only if the base class start fun is virtual
	p=new swift();
	ptr->start();
}
