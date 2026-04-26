#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math math;
    cout << "Integer Sum: " << math.add(5, 10) << endl;
    cout << "Double Sum: " << math.add(5.5, 2.5) << endl;
    return 0;
}