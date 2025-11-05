#include "car.h"
#include <iostream>

Car::Car() {}

void Car::printData()const {
    cout << "Auton merkki on " << brand << endl << "Malli on " << model << endl << "Vuosimalli on  "<< yearModel << endl;
}

void Car::setBrand(const string &newBrand){
    brand = newBrand;
}

void Car::setModel(const string &newModel){
    model = newModel;
}

void Car::setYearModel(int newYearModel)    {
    yearModel = newYearModel;
}

// void Person::setName(const string &newName)
