// lec no 10 use of virtual function
#include<iostream>
using namespace std;
class A
{
	public:
		 virtual void print()
		{
		cout<<"this is print base "<<endl;	
		}
		 virtual void show()
		{
		cout<<"this is show base "<<endl;	
		}
	};
	class B:public A
	{
		public:
		void print()
		{
		cout<<"this is print deriveed "<<endl;	
		}
		void show()
		{
		cout<<"this is show deriveed "<<endl;	
		}
	};
	int main()
	{
		A *p;
		A obj;
		p=&obj;
		p->print();
		p->show();
	}
