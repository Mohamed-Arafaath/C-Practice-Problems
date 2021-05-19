# include<iostream>
using namespace std;
    
/*program for destructor

*/
class demo
{
	int *p;
public:
	demo()
	{
		p=new int[10];
	  cout<<"constructor of demo"<<endl;
	}
  ~demo()
	{
		delete[]p;
	  cout<<"destructor of demo"<<endl;
	}
};
void fun()
{
	demo *ptr=new demo();//object created in heap memory should be deleted as below and demo d//object in stack no need to be deleted
	delete ptr;
}
int main()
{
	fun();
}
