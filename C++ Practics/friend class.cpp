#include<iostream>
using namespace std;

class test1{
	private:
		int a,b;
		public: friend class test2;
		void getab()
		{cout<<"enter the values of a b";
		cin>>a>>b;
		}
};
class test2{
	public : void putab (test1 t1)
	{cout<<"value of a and b is "<<t1.a<<endl<<t1.b;}};

int main (){
	test1 p;
	test2 q; 
	p.getab();
	q.putab(p)
;};
