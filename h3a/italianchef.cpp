#include "italianchef.h"

ItalianChef::ItalianChef(string b) : Chef(b) {
    name = b;
    cout<<"ItalianChef "<< getName() << " konstruktori"<< endl;
}

ItalianChef::~ItalianChef()
{
cout<<"ItalianChef "<<name<<" destruktori"<< endl;
}

void ItalianChef::makePasta()
{
    cout<<"ItalianChef " << name << " makes pasta "<< endl;
}

string ItalianChef::getName()
{
    return name;
}
