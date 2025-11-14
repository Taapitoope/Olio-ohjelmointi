#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
private:
    string name;
public:
    ItalianChef(string);
    ~ItalianChef();
    void makePasta();
    string getName();
};

#endif // ITALIANCHEF_H
