#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n) { name = n; }
};

class Employee : public Person {
private:
    int salary;
public:
    void setSalary(int s) { salary = s; }
    void showDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setName("Alice");
    emp.setSalary(50000);
    emp.showDetails();
    return 0;
}