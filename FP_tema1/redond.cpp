#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double imp,dec,outp,roun;
    
    cout << "introduce el número que quieres redondear: ";
    cin >> imp;

    cout << "introduce el número de decimales representativos: ";
    cin >> dec;

    outp = (imp*pow(10, dec));
    roun = (round(outp))/pow(10, dec);

    cout <<"el número es: " << roun << endl;
}