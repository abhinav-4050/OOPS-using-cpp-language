#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} }; // 2 rows, 3 columns
    cout << "Value at row 1, col 2: " << matrix[1][2] << endl; // Prints 6
    return 0;
}