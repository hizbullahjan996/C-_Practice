#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makesound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Lion : public Animal {
public:
    void makesound() override {
        cout << "Voice of the Lion" << endl;
    }
};

class Elephant : public Animal {
public:
    void makesound() override {
        cout << "Voice of the Elephant" << endl;
    }
};

class Dolphin : public Animal {
public:
    void makesound() override {
        cout << "Voice of the Dolphin" << endl;
    }
};

int main() {
    Animal* animals[3];
    animals[0] = new Lion();
    animals[1] = new Elephant();
    animals[2] = new Dolphin();

    for (int i = 0; i < 3; ++i) {
        animals[i]->makesound();
    }


    return 0;
}

