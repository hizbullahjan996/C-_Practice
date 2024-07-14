#include<iostream>
using namespace std;

class student{
	public:
		string a;
		string b;
		string c;
		int student_A(){
		 a="fareed Ullah";
		 b="Abdullah Shah";
		 c="Hameed Khan";	
		cout<<"This is student First : "<<a<<endl;
		cout<<"This is student Second : "<<b<<endl;
		cout<<"This is student Third : "<<c<<endl;
	}	
};
class courses {
	public:		
		string subj1;
		string subj2;
		string subj3;
			void courses_B(){
		subj1="CS";
		subj2="SE";
		subj3="AI";
			cout<<"Subject One : "<< subj1 <<endl;
			cout<<"Subject Second : "<<subj2<<endl;
			cout<<"Subject Third : "<<subj3<<endl;
		}	
};
class grades{
	public:
		char a;
		char b;
		char c;
			void	grades_C(){
	     a='A1';
		 b='A';
		 c='B';
			cout<<"Grades of 1st  : "<<a<<endl;
			cout<<"Grades of Second  : "<<b<<endl;
			cout<<"Grades of Third  : "<<c<<endl;
		
		}
};
int main (){
	student S1;
	S1.student_A();
	courses C1;
	C1.courses_B();
	grades g1;
	g1.grades_C();
	
	return 0;
}
