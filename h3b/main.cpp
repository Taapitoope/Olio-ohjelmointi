#include "animal.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
{
    Animal objElain1;
    Dog objElain2;
    objElain1.callOut();
    objElain2.callOut();
}
    cout << endl;
{
    Animal *Elain3 = new Animal();
    Elain3->callOut();
    delete Elain3;
    cout << endl;
    Animal *Elain4 = new Dog();
    Elain4->callOut();
    delete Elain4;
}
    cout << endl;
{
    Dog* Elain5 = new Dog();
    Elain5->callOut();
    delete Elain5;
}
    return 0;
}
