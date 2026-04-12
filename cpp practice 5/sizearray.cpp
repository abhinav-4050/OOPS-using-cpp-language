#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    int length = sizeof(numbers) / sizeof(numbers[0]); 
    cout << "Array length: " << length << endl;
    return 0;
}