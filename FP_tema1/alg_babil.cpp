#include <iostream>

using namespace std;

int main()
{
    double n,raiz,lado;

    cout << "introduce el valor de n: ";
    cin >> n;

    raiz = n/2;
    lado = n/raiz;

    for(int i=1; i<=1000; i++){
        raiz = (raiz+lado)/2;
        lado = n/raiz;
    }

    cout << raiz << endl;
}