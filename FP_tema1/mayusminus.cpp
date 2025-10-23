#include <iostream>
using namespace std;

int main(){
    char c,m;
    
    cout << "introduce un caracter: ";
    cin >> c;

    bool es_Mayus = 64 < c && es_Mayus < 91;

    if(es_Mayus){
        m = c + ('a'-'A');
        cout << "la minúscula equivalente es " << m << endl;
    }
    else{
        cout << c << endl;
    }
}