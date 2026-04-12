#include <iostream>
using namespace std;

void doubleValue(int &num) {
    num = num * 2;
}

int main() {
    int x = 10;
    doubleValue(x);
    cout << "Doubled value: " << x << endl; // x is now 20
    return 0;
}