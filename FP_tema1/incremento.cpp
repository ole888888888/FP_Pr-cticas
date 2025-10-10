
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    cout << "introduzca el valor inicial: ";
    cin >> a;

    cout << "introduzca el valor actual: ";
    cin >> b;

    c = abs(100*(b-a)/a);

    cout << "la vaiación es de un " << c << "%" << endl;
}