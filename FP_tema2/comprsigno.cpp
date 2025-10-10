/*Programa que comprueba si dos enteros tienen el mismo signo*/
#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout << "introduzca el primer entero: ";
    cin >> a;
    cout << "introduzca el segundo entero: ";
    cin >> b;

    if(a*b > 0){
        cout << "tienen el mismo signo" << endl;
    }
    else{
        cout << "no tienen el mismo signo" << endl;
    }
}