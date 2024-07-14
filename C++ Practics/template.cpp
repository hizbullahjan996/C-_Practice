#include <iostream>
using namespace std;

template <typename T>
T myMax(T x, T y){
    return (x > y) ? x : y;
}


}

int main() {
    cout << myMax<int>(3, 7) << endl;
    cout << myMax<char>('g', 'e') << endl;
}

Compiler internally generate 
and adds below code.
char myMax(char x, char y){
    return (x > y) ? x : y;


compiler internally generates 
and adds below code
int myMax(int x ,int y){
	return (x > y)? x :y;
}



