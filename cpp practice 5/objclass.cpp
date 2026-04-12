#include <iostream>
#include <string>
using namespace std;


class Car {
  public: 
    string brand;
    int year;

                                                                                     
    void honk() {
      cout << "Beep beep! I am a " << year << " " << brand << "." << endl;
    }
};

int main() {

  Car myCar;

  
  myCar.brand = "Honda";
  myCar.year = 2023;


  myCar.honk();

  return 0;
}