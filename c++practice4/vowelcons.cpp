#include <iostream>
using namespace std;
int main() {
    char c = 'e';
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        cout << "Vowel";
    else
        cout << "Consonant";
    return 0;
}