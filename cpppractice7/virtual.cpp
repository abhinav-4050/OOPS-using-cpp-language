#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show() function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show() function" << endl;
    }
};

int main() {
    Base *bptr;       // Base class pointer
    Derived d;        // Derived class object
    
    bptr = &d;        // Point to derived object
    
    // Virtual function binds at runtime
    bptr->show();     
    
    return 0;
}