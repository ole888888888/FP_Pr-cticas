#include <iostream>
using namespace std;

int main(){
    int n,r;

    cout << "número de cifras: ";
    cin >> r;
    cout << "introduce un número entero: ";
    cin >> n;

    cout << "El número descompuesto es: ";
    for(int i = 0; i < r; i++){
        cout << n%10 << endl;
        n = n/10;
    }

}
