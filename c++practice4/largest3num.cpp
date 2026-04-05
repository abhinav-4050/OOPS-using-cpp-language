#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 25, c = 15;
    if (a >= b && a >= c) cout << a << " is largest";
    else if (b >= a && b >= c) cout << b << " is largest";
    else cout << c << " is largest";
    return 0;
}