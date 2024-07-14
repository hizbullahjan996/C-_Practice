//lec no 9  virtual function 
#include<iostream>
using namespace std;
class A{
	public:
		void sum()
		{
			cout<<"the A class "<<endl;
		}
};
class B: virtual public A
{
	public:
		void sum1()
		{
			cout<<"the  b class "<<endl;
		}
};
class c: virtual public A
{
	public:
		void sum2()
		{
			cout<<"the  c class "<<endl;
		}
};
class D: public B,public c
{
	public:
		void sum3()
		{
			cout<<"the  d class "<<endl;
		}
};
int main()
{
	D obj;
	obj.sum();
	obj.sum1();
	obj.sum2();
	obj.sum3();
	return 0;
	
}
