#include "student.h"

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double Student::getAvarage() const
{
    return avarage;
}

void Student::setAvarage(double newAvarage)
{
    avarage = newAvarage;
}

Student::Student() {}
