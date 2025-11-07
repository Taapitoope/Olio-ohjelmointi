#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> CarList;
    // Luodaan olioita listaan
    CarList.emplace_back("Fiat","127",1980);
    CarList.emplace_back("Toyota","Camry",1989);
    CarList.emplace_back("Volvo","360",1988);

    CarList[1].printData();

    for(int x=0; x<=2; x++){
        CarList[x].printData();
    }
    return 0;
}
