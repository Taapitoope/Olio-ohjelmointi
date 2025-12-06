#include "myclass.h"

#include <QCoreApplication>


int main()
{
    MyClass objMyClass;
    objMyClass.mySignal();
    cout<< "\n----------\n\n";
    objMyClass.raiseMySignal();
    return 0;
}
