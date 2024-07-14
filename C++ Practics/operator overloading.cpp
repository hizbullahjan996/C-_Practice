#include <iostream>
using namespace std;

class Point{
private:
	int x,y;
public:
	Point(int xVal =0, int yVal =0) : x(xVal), y(yVal){
	}	
	Point operator + (const Point& p) const {
		return Point(x + p.x , y + p.y);
	}
	void display()const{
	cout<<"(" << x << ", "<<y << ")"<<endl;}
};

int main(){
	Point p1(2,3), p2(4,5);
	
	Point p3 =p1 + p2;
	cout<<"Point 1 : ";
	p1.display();
	cout<<"Point 2 :";
	p2.display();
	cout<<"Sum of point 1 and point 2 :";
	p3.display();
	
	return 0;
}
