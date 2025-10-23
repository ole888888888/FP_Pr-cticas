#include <iostream>
using namespace std;

int main(){
    char letra_original,letra_convertida;

    cout << "Introduce una letra ";
    cin >> letra_original ;

    bool minus = 96 < letra_original && letra_original < 123;
    bool mayus = 64 < letra_original && letra_original < 91;

    if(minus){
        letra_convertida = letra_original - ('a'-'A');
        cout << "La letra introducida era minúscula" << endl << "La letra convertida es " << letra_convertida << endl;
    }

    if(mayus){
        letra_convertida = letra_original + ('a'-'A');
        cout << "La letra introducida era mayúscula" << endl << "La letra convertida es " << letra_convertida << endl;
    }

    if(!mayus && !minus){
        cout << "El carácter " << letra_original << " no era alfabético";
    }
}