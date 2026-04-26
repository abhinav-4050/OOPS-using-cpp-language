#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived Class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog myDog;
    
    // Calling method inherited from Base Class
    myDog.eat();  
    
    // Calling method from Derived Class
    myDog.bark(); 
    
    return 0;
}