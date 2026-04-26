#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Rectangle created." << endl;
    }
    
    // Destructor
    ~Rectangle() {
        cout << "Rectangle destroyed." << endl;
    }

    int getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(10, 5);
    cout << "Area: " << rect.getArea() << endl;
    return 0;
}