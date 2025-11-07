#include "car.h"

void Car::printData()
{
    cout <<"Merkki: "<< brand << endl << "Malli:  " << model<< endl << "Vuosimalli:  " << yearModel << endl << endl;
}

Car::Car(string merkki, string malli, int vmalli) {
    brand=merkki;
    model=malli;
    yearModel=vmalli;
}
