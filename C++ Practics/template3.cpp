#include<iostream>
using namespace std;
template<class T>
class Number{
	private:
	T num;
	public:
		Number(T n){
			num = n;
		}
		T getnum(){
			return num;
		}
};
int main(){
	Number<int>numberInt(7);
	Number<double>numberDouble(7.7);
	cout<<"Int Number = "<<numberInt.getnum()<<endl;
	cout<<"Double Number = "<<numberDouble.getnum()<<endl;
}
