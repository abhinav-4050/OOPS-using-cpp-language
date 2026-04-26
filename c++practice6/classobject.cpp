#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;

    void displayInfo() {
        cout << "Name: " << name << ", Roll No: " << rollNumber << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Alice";
    s1.rollNumber = 101;
    s1.displayInfo();
    return 0;
}