#include<iostream>
using namespace std;

class A{
	private:
		int a;
		string b;;
		
		void get_data(int j,string k){
			
			a=j;
			b=k;
			cin>>a;
			cin>>b;
		}
	void show_data(){
		
		cout<<"your name is  "<<a<<"and your marks is"<<b;
	}
	
};

main(){
	A obj;
	obj.get_data;
}
