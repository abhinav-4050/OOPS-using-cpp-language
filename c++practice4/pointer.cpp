#include <iostream>
using namespace std;
int main() {
    int var = 20;
    int *ptr = &var; // Pointer stores the memory address of var
    
    cout << "Value of var: " << var << endl;
    cout << "Memory Address of var: " << ptr << endl;
    cout << "Value fetched using pointer: " << *ptr << endl;
    return 0;
}