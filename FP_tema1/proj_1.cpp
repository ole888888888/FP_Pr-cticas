/*programa que calcula las soluciones de una ecuación de segundo grado*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, r1, r2;

    cout << "Introduce el coeficiente de segundo grado: ";
    cin >> a;

    cout << "Introduce el coeficiente de primer grado: ";
    cin >> b;

    cout << "Introduce el coeficiente independiente: ";
    cin >> c;

    r1 = (-b+sqrt(b*b-4*a*c))/2*a;
    r2 = (-b-sqrt(b*b-4*a*c))/2*a;

    if (b*b-4*a*c < 0){
        cout << "la raíz es negativa" << endl;
    }

    if (a == 0){
        cout << "a = 0" << endl;
    }

    if (r1 == r2){
        cout << "la solución única es " << r1 << endl;
    }

    else{
        cout << "las respuestas son " << r1 <<" y " << r2 << endl;    
    }
    
}