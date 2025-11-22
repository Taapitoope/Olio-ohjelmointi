#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    Car objCar("Hummer","H3");
    objCar.setEngine();
    objCar.setWheels();
    objCar.printDetails();



    return 0;
}
