#include <iostream>
using namespace std;
int main() {
    int n = 121, num = n, rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if (num == rev) cout << "Palindrome";
    else cout << "Not a Palindrome";
    return 0;
}