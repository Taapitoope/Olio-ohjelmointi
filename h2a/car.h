#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    Car();
    void printData()const;                  //tulosta tiedot
    void setBrand(const string &newBrand);  //aseta merkki
    void setModel(const string &newModel);  //aseta malli
    void setYearModel(int newModel);        //aseta vuosiluku

};
#endif // CAR_H
