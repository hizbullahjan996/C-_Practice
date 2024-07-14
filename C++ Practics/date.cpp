#include<iostream>
using namespace std;

class Date{
	private:
	int day;
	int month;
	int year;
	
	public:
	setMonth();
	print();
	
};

int main(){
	Date mydate;
	mydate.setMonth();
	mydate.print();
	
	return 0;
}
