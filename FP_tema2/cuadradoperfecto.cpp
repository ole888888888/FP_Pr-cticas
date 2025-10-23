#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,raiz_int;
    double raiz;

    cout<<"introduce un número entero: ";
    cin >> n;

    raiz = sqrt(n);
    raiz_int = static_cast<int>(raiz);

    bool es_cuadrado = (raiz_int*raiz_int == n);

    if(es_cuadrado){
        cout << n << " es cuadrado perfecto" << endl;
    }

    else{
        cout << n << " no es cuadrado perfecto" << endl;
    }
}