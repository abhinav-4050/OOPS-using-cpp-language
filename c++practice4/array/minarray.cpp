#include <iostream>
using namespace std;
int main() {
    int arr[] = {12, 45, 7, 23, 9};
    int min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) min = arr[i];
    }
    cout << "Smallest = " << min;
    return 0;
}