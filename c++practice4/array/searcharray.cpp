#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50}, key = 30, found = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i;
            found = 1;
            break;
        }
    }
    if (found == 0) cout << "Not Found";
    return 0;
}