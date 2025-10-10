/*PROGRAMA QUE CALCULA EL VOLTAJE SEGÚN LA LEY DE OHM*/

#include <iostream>

using namespace std;

int main()
{
    double r, i, v;

    cout << "introduzca la resistencia: ";
    cin >> r;

    cout << "introduzca el valor de la intensidad: ";
    cin >> i;

    v = r*i;
    cout << "el voltaje es " << v << " Voltios" << endl;
}