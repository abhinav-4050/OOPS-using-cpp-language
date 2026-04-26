#include <iostream>
using namespace std;

#define MAX 5

class Stack {
    int top;
    int arr[MAX];
public:
    Stack() { top = -1; }
    
    void push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow" << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack" << endl;
        }
    }
    
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
        } else {
            int x = arr[top--];
            cout << x << " popped from stack" << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.pop();
    return 0;
}