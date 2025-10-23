/*Programa que comprueba si un año es bisiesto*/
#include <iostream>

using namespace std;

int main(){
    int año;

    cout << "introduce un año: ";
    cin >> año;

    double es_bisiesto = (año%4==0 && año%100!=0)||año%400==0;
    if(es_bisiesto){
        cout << año << " es un año bisiesto" << endl;
    }

    else{
        cout << año << " no es un año bisiesto" << endl;
    }
}