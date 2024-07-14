//lec no 12
#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A & setdata(int a)
		{
		this->a=a;
		return *this;	
		}
		void getdata()
		{
			cout<<"The value  of a is "<<a<<endl;
		}		
};
int main()
{
	A b;
	b.setdata(4).getdata();
	
	return 0;
}
