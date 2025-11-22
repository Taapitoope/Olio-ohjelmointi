#include "car.h"

Car::Car() {}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

Car::Car(string m, string b)
{
    setModel(m);
    setBrand(b);
}

void Car::setEngine()
{
    //Engine(300,5.8);
    objEngine.setHorsepower(300);
    objEngine.setDisplacement(5.8);
}

void Car::setWheels()
{
    objWheel1.setSize(12);
    objWheel2.setSize(12);
    objWheel3.setSize(12);
    objWheel4.setSize(12);
}

void Car::printDetails()
{
    cout <<"Auto : "<< getModel() <<" "<< getBrand()<<endl;
    cout <<"Moottori : "<<objEngine.getHorsepower() <<"hp, "<<objEngine.getDisplacement()<<" L"<<endl;
    cout <<"Rengas 1 : "<<objWheel1.getSize() <<" tuumaa, "<<objWheel1.getType()<<"kesarenkaat"<<endl;
    cout <<"Rengas 2 : "<<objWheel2.getSize() <<" tuumaa, "<<objWheel2.getType()<<"kesarenkaat"<<endl;
    cout <<"Rengas 3 : "<<objWheel3.getSize() <<" tuumaa, "<<objWheel3.getType()<<"kesarenkaat"<<endl;
    cout <<"Rengas 4 : "<<objWheel4.getSize() <<" tuumaa, "<<objWheel4.getType()<<"kesarenkaat"<<endl;

}

