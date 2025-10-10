/*dado un entero de tres cifras mostrarlas por pantalla de forma separada*/
#include <iostream>
using namespace std;

int main(){
    int n,c,d,u;

    cout << "introduce un número entero de tres cifras: ";
    cin >> n;

    c = n/100;
    d = (n%100)/10;
    u = n%10;

    cout << c << endl << d << endl << u << endl;
}