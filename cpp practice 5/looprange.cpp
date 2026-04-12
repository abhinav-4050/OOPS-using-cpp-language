#include <iostream>
using namespace std;

int main() {
    int pins[4] = {1111, 2222, 3333, 4444};
    for (int pin : pins) {
        cout << pin << " ";
    }
    return 0;
}