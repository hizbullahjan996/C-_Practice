#include<iostream>
using namespace std;
template<typename T>
T myMax(T x, T y){
	if (x>y){
		return x;
	}
	else{
		return y;
	}
}
int main(){
	cout<<myMax<int>(3,7)<<endl;
	cout<<myMax<double>(3.0,7.0)<<endl;
	cout<<myMax<char>('g','L')<<endl;
}
