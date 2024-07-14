#include<iostream>
using namespace std;

class employees{
	public:
	string e1,e2;
	void emp(string employee1, string employee2){
		e1=employee1;
		e2=employee2;
	}
	
};
class department{
	public:
		string d1, d2;
	void depart(string department1, string deparment2){
		d1=department1;
		d2=deparment2;
	}
};
class salaries{
	public:
		int s1, s2;
	void salar(int salaries1, int salaries2){
		s1=salaries1;
		s2=salaries2;
	}
};
class position{
	public:
		string p1, p2;
	void posit(string position1, string position2){
		p1=position1;
		p2=position2;
	}
};
int main(){
employees obj1;
department obj2;
salaries obj3;
position obj4;

obj1.emp("Freed Ullah","Abdullah");
obj2.depart("Computer Science","Software engeneering");
obj3.salar(50000,40000);
obj4.posit("18","20");

return 0;

}
