#include<iostream>
using namespace std;

class Students{
	public:
	string  s1,s2,s3;
	void Stu1(string student1, string student2, string student3){
		s1=student1;
		s2=student2;
		s3=student3;
	}
};
class Course{
	public:
	string c1, c2, c3;
	void Cour1(string course1 , string course2, string course3){
		c1=course1;
		c2=course2;
		c3=course3;
	}	
};

class Grade{
	public:
	char g1, g2, g3;
	void gra1(char grade1 ,char grade2, char grade3){
		g1=grade1;
		g2=grade2;
		g3=grade3;
	}	
};

int mian(){
Students obj1;
Course obj2;
Grade obj3;

obj1.Stu1("Khan","Abdullah","Fareed");
obj2.Cour1("CS","SE","AI");


return 0;	
};
