#include <iostream>

using namespace std;

int main(){
    double salario_base, porcentaje, salario_final;

    cout << "introduce el valor del salario base: ";
    cin >> salario_base;

    cout << "introduce la variación en porcentaje: ";
    cin >> porcentaje;
    
    salario_final = salario_base * (1 + porcentaje/100);

    cout << "el salario final será: " << salario_final << endl;
}