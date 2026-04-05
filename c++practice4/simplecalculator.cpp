#include <iostream>
using namespace std;
int main() {
    char op = '+';
    int num1 = 10, num2 = 5;
    switch(op) {
        case '+': cout << num1 + num2; break;
        case '-': cout << num1 - num2; break;
        case '*': cout << num1 * num2; break;
        case '/': cout << num1 / num2; break;
        default: cout << "Invalid Operator";
    }
    return 0;
}