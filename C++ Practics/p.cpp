#include<iostream>
using namespace std;

class abc{
	private:
	int x;
	int y;
	int z;
	
	public:
		void input(){
		
		cin>>x;
		cin>>y;
		z=x+y;
	}
	void output(){
		cout<<z;
	}
};
int main()
{
	abc obj1;
	obj1.z();
	
	return 0;
}
