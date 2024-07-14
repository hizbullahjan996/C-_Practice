#include<iostream>
using namespace std;

class Abc {
    private:
        int x;
        int y;
        int z;

    public:
        void input() {
            cout << "Enter x: ";
            cin >> x;
            cout << "Enter y: ";
            cin >> y;
        }
		void ouput(){
			z = x + y;
		}
		void result(){
			cout<<z;
		}
	
};

int main(){
	Abc obj1;
	obj1.input();
	obj1.ouput();
	obj1.result();
}
	
