#include <iostream>
using namespace std;

class AreaCalculator {
public:
    // Area of Square
    int area(int side) {
        return side * side;
    }
    
    // Area of Rectangle
    int area(int length, int width) {
        return length * width;
    }
    
    // Area of Circle
    double area(double radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    AreaCalculator calc;
    cout << "Area of Square (side 4): " << calc.area(4) << endl;
    cout << "Area of Rectangle (4x5): " << calc.area(4, 5) << endl;
    cout << "Area of Circle (radius 2.5): " << calc.area(2.5) << endl;
    return 0;
}