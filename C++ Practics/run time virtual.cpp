#include<iostream>
using namespace std;

class Employee{
	public:
		virtual void work(){
			cout<<" Performing generic employee tasks"<<endl;
		}
};
class Manager : public Employee{
	public:
		void work(){
			cout<<"Managing Team and projects"<<endl;
		}
};
class Deveploper : public Employee{
	public:
		void work (){
			cout<<" Writing and Testing code "<<endl;
		}
};
int main (){
	Employee* emp1 = new Manager();
	Employee* emp2 = new Deveploper();
	emp1->work();
	emp2->work();
	delete emp1;
	delete emp2;
	
	return 0;
}
