#include<iostream>
using namespace std;

struct myData{
	
	int id;
	string name;
	string  no;
};

int main(){
	struct myData hizb;
	hizb.id=1;
	hizb.name="Hizbullah";
	hizb.no="9029370273409";
	cout<<hizb.id<<endl;
	cout<<hizb.name<<endl;
	cout<<hizb.no<<endl;
}
