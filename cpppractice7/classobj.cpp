#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    void setData(string n, int r) {
        name = n;
        rollNumber = r;
    }
    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Rahul", 101);
    s1.display();
    return 0;
}