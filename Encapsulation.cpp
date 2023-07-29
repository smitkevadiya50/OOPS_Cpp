#include<iostream>

using namespace std;

class EncapsulationExample {
private:
    int x; // private variable, not accessible outside the class

public:
    void set(int a) { // Setter
        x = a;
    }
    
    int get() { // Getter
        return x;
    }
};

int main() {
    EncapsulationExample obj;
    obj.set(5);
    cout << obj.get();
    return 0;
}
