#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    Car fiiatCar; Car kiiaCar;
    fiiatCar.setBrand("Fiat");
    fiiatCar.setModel("127");
    fiiatCar.setYearModel(1980);
    fiiatCar.printData();

    Rectangle *fiatRectangle = new Rectangle;
    fiatRectangle->setHeight(1.358);
    fiatRectangle->setWidth(3.645);
    cout << "Fiat 127 pinta-ala on " << fiatRectangle->getArea() << "m^2 " << " ja ymparysmitta on " << fiatRectangle->getCircum() << "m" << endl <<endl;
    delete fiatRectangle;
    fiatRectangle=nullptr;

    unique_ptr<Student> opiskelia = make_unique<Student>();

    opiskelia->setName("Taapi Toope");
    opiskelia->setStudentNumber(445566);
    opiskelia->setAvarage(3.85);
    cout << "Opiskelijan nimi: " << opiskelia->getName() << endl << "Opiskelijan numero: " << opiskelia->getStudentNumber() << endl
         << "Opiskelijan eskiarvo:" << opiskelia->getAvarage() << endl;

    return 0;
}
