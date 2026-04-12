#include <iostream>
using namespace std;

int main() {
    int scores[3] = {85, 90, 78};
    scores[2] = 95; 
    cout << "Updated score: " << scores[2] << endl;
    return 0;
}