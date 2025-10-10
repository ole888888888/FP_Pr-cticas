/*Programa que lee dos dobles y muestra por pantalla el mayor*/
#include <iostream>
using namespace std;

int main(){
    double a,b,maximo;
/*entradas*/
    cout << "introduce el primer número: ";
    cin >> a;

    cout << "introduce el segundo número: ";
    cin >> b;
/*proceso*/
    maximo = a;
    if(a < b){
        maximo = b;
    }
/*salida*/
    cout << "El máximo es " << maximo << endl;
}