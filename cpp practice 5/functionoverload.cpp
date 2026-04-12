#include <iostream>
using namespace std;

int multiply(int a, int b) { return a * b; }
double multiply(double a, double b) { return a * b; }

int main() {
    cout << "Int multiply: " << multiply(3, 4) << endl;
    cout << "Double multiply: " << multiply(2.5, 2.0) << endl;
    return 0;
}