#include<iostream>

using namespace std;

class AbstractClass { // Abstract class
public:
    virtual void pureVirtualFunction() = 0; // Pure virtual function
};

class ConcreteClass: public AbstractClass { // Concrete class
public:
    void pureVirtualFunction() {
        cout << "Implemented pure virtual function!" << endl;
    }
};

int main() {
    ConcreteClass obj;
    obj.pureVirtualFunction();
    return 0;
}
