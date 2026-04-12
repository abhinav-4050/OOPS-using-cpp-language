#include <iostream>
using namespace std;

void setVolume(int level = 50) {
    cout << "Volume set to: " << level << endl;
}

int main() {
    setVolume(80); 
    setVolume();  
    return 0;
}