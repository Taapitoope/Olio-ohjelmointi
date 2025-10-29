#include <iomanip>
#include <iostream>

using namespace std;

void calcSum(int, int);
void calcDiv(int, int);
int retSum(int, int);
float retDiv(int, int);

int main()
{
    int a,b;
    cout << "Anna kokonaisluku: ";
    cin >> a;
    cout << "Anna toinen kokonaisluku: ";
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);
    int c = retSum(a,b);
    //cout << c << endl;
    //float d = retDiv(a,b);

    //jos try-lohkossa nousee runtime error, hypätään catch-lohkoon
    try {
        float result = retDiv(a,b);
        cout << a << "/" <<  b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }
    return 0;
}

void calcSum(int a, int b) {
    cout << a << " + " << b << " = " << a+b << endl;
}

void calcDiv(int a, int b) {
    if(b == 0){
        cout << "Virhe! jakaja ei saa olla 0" << endl;
        return;
    }
    float c = (float)a /(float)b ;
    cout << a << " / " << b << " = ";
    cout << fixed << setprecision(2) << c << endl;
}

int retSum(int a, int b) {
    return (a+b);
}

float retDiv(int a, int b) {
    /*  if(b == 0){
        cout << "Virhe! jakaja ei saa olla 0" << endl;
        return 0;
    }   */
    if ( b < 0) {
        throw std::runtime_error("jakaja ei saa olla negatiivinen.");
    }
    return ((float)a / (float)b);
}
