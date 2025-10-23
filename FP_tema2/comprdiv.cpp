/*Programa que comprueba si dos números son divisibles*/

#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout << "introduce el primer entero: ";
    cin >> a;
    cout << "introduce el segundo entero: ";
    cin >> b;

    bool a_div_b = b%a==0;
    bool b_div_a = a%b==0;

    if((b_div_a||a_div_b) &! (b_div_a && a_div_b)){
        cout << "uno divide al otro" << endl;
    }

    if(b_div_a && a_div_b){
        cout << "son el mismo número" << endl;
    }

    else{
        cout << "No son divisibles" << endl;
    }
}