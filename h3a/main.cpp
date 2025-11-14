#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main(){
{
    Chef objkokki1("Gordon Ramsey");
    objkokki1.makeSalad();
    objkokki1.makeSoup();
}
{
    cout << endl << endl;
    ItalianChef objkokki2("Anthony Bourdain");
    objkokki2.makeSalad();
    objkokki2.makeSoup();
    objkokki2.makePasta();
    cout<<"name of the Italian Chef is "<< objkokki2.getName() << endl;

    return 0;
}
}
