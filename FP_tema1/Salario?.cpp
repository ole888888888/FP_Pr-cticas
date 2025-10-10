
#include <iostream>

using namespace std;

int main()
{
    int salario_final, salario_base, incremento;

    salario_base = 1000;
    incremento = 200;

    salario_final = salario_base;
    salario_final = salario_final + incremento;
    salario_base = 3500;

    cout << "\nSalario base: " << salario_base << endl;
    cout << "\nSalario final: " << salario_final << endl;
} 

