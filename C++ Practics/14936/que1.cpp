#include<iostream>
using namespace std;
class employe{
	public:
		string a;
		string b;
		string c;	
		void employe_A(){
		 a="fareed";
		 b="Khan";
		 c="Jan";
		cout<<"This is Employees  : "<<a<<endl;
		cout<<"This is  Employees :  "<<b<<endl;
		cout<<"This is Employees  : "<<c<<endl;
	}

};

class departements {
	public:
		string dep1;
		string dep2;
		string dep3;			
				void departements_B(){
		dep1="SE";
		dep2="CS";
		dep3="AI";
		
			cout<<" departements of  : "<< dep1 <<endl;
			cout<<" departements of : "<<dep2<<endl;
			cout<<"departements of : "<<dep3<<endl;
		}
	
};

class salaries{
	public:
		int a;
		int b;
		int c;
			void salaries_C(){
	     a=30000;
		 b=50000;
		 c=60000;
			cout<< "salariesof 1st is : "<<a<<endl;
			cout<<" salarie os second is : "<<b<<endl;
			cout<<" salaries of third is : "<<c<<endl;
		}
};

class possition{
	public:
		string a;
		string b;
		string c;
		void possition_C(){
	     a="Lec";
		 b="Director";
		 c="helper";
			cout<<"  possitionof 1st is : "<<a<<endl;
			cout<<" possition of second is :"<<b<<endl;
			cout<<"  possition of third is : "<<c<<endl;
		}
	};
int main (){
	employe E1;
	E1.employe_A();
	departements D1;
	D1.departements_B();
	salaries S1;
	S1.salaries_C();
	
	possition P1;
	P1.possition_C();
	return 0;
}
