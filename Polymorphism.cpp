#include<iostream>

using namespace std;

class Base { // Base class
public:
    virtual void sayHello() {
        cout << "Hello, I'm the base class!" << endl;
    }
};

class Derived: public Base { // Derived class
public:
    void sayHello() override {
        cout << "Hello, I'm the derived class!" << endl;
    }
};

int main() {
    Base* base = new Derived();
    base->sayHello();
    delete base;
    return 0;
}
