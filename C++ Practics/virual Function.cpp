#include <iostream>
using namespace std;

class Drawable{
public:
    
    virtual double Area() const = 0;
    virtual ~Drawable() {}
};

class Triangle : public Drawable {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}  
    
    double Area() const override {
        return 0.5 * base * height;
    }
};

class Circle: public Drawable {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}  
    
    double Area() const override {
        return length * width;
    }
};
int main() {
    Shape* triangle = new Triangle(5.0, 10.0);
    Shape* rectangle = new Circle(4.0, 6.0);
    
    cout << "Area of Triangle: " << triangle->Area() << endl;
    cout << "Area of Rectangle: " << rectangle->Area() <<endl;
    
    delete triangle;
    delete Circle;
    
    return 0;
}

