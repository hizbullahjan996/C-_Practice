#include<iostream>
using namespace std;

class date{
	private:
		int y,m,d;
	public:
		void printdate(void){
			cout<<"Enter the year  ";
			cin>>y;
			cout<<"Enter the Month ";
			cin>>m;
			cout<<"Enter the day ";
			cin>>d;};
			void getdate(void){
			cout<<"Date is : "<<endl;
			cout<<y<<"/"<<m<<"/"<<d<<endl;
		};
};
int main (){
	date e;
	e.printdate();
	e.getdate();}
