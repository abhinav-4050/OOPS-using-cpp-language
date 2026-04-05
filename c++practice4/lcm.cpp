#include <iostream>
using namespace std;
int main() {
    int n1 = 12, n2 = 15, maxVal;
    maxVal = (n1 > n2) ? n1 : n2; // Starts at the larger number
    
    while (true) {
        if (maxVal % n1 == 0 && maxVal % n2 == 0) {
            cout << "LCM = " << maxVal;
            break;
        }
        maxVal++;
    }
    return 0;
}