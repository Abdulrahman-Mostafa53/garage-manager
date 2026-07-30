#include <iostream>
#include "Car.h"
using namespace std;

int main(){
    Car car(10,10,10,10,"racer","full","racing team");
    cout<<car.getAge();
    return 0;
}