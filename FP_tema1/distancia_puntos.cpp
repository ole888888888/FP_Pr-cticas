
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a1, a2, b1, b2, d;

    cout << "introduzca la primera coordeanda del primer punto: ";
    cin >> a1;

    cout << "introduzca la segunda coordenada del primer punto: ";
    cin >> a2;

    cout << "introduzca la primera coordenada del segundo punto: ";
    cin >> b1;

    cout << "introduzca la segunda coordenada del segundo punto: ";
    cin >> b2;

    d = sqrt(pow((a1-b1),2)+pow((a2-b2),2));

    cout << "La distancia es " << d << endl;
}