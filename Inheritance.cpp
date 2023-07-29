#include<iostream>

using namespace std;

class Base { // Base class
public:
    void sayHello() {
        cout << "Hello, I'm the base class!" << endl;
    }
};

class Derived: public Base { // Derived class
public:
    void sayHello() {
        cout << "Hello, I'm the derived class!" << endl;
    }
};

int main() {
    Derived obj;
    obj.sayHello();
    return 0;
}
