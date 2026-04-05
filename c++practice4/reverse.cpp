#include <iostream>
using namespace std;
int main() {
    int n = 1234, rev = 0, rem;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout << "Reversed Number = " << rev;
    return 0;
}