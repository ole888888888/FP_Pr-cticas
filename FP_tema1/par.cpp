/*programa que mira si un número es par o no*/
#include <iostream>

using namespace std;

int main(){
    /*VARIABLES*/
    int n;        /*proceso*/
    bool es_par = (n%2 == 0);

    /*ENTRADA*/
    cout << "introduce el número: ";
    cin >> n;
    
    /*SALIDA*/
    if(es_par){
        cout << "El número " << n << " es par";
    }

    else{
        cout << "El número " << n << " no es par" << endl;
    }
}