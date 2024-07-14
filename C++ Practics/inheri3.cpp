#include<iostream>
using namespace std;

class a {
protected:
    int a;

public:
    void set_A() {
        cout << "Enter the value of A = ";
        cin >> a;
    }
    
    void disp_A() {
        cout << endl << "Value of A = " << a;
    }
};

class b : public a {
    int b, p;

public:
    void set_B() {
        set_A();
        cout << "Enter the value of B = ";
        cin >> b;
    }

    void disp_B() {
        disp_A();
        cout << endl << "Value of B = " << b;
    }

    void call_product() {
        p = a * b;
        cout << endl << "Product of " << a << " * " << b << " = " << p;
    }
};

int main() {
    b _b;
    _b.set_B();
    _b.call_product();

    return 0;
}

