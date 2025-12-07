#include "exampleclass.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    ExampleClass objExampleClass;
    objExampleClass.startToWait();

    return a.exec();
}
