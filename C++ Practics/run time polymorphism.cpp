#include<iostream>
using namespace std;
class A{
	public:
		virtual void disp(){
			cout<<"It's class A";
		}
};
class B : public A{
	public:
		void disp(){
		cout<<"It's class B ";}
};

main (){
	A *ptr; B obj;
	ptr = &obj;
	ptr->disp();
}
