#include "rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double Rectangle::getArea()
{
    return width*height;
}

double Rectangle::getCircum()
{
    return 2*(width+height) ;
}

Rectangle::Rectangle() {
   // cout << "Luotiin olio" << endl;
}

Rectangle::~Rectangle()
{
   // cout << "Tuhottiin olio" << endl;
}
