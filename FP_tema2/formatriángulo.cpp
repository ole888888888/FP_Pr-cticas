/*Pueden los tres lados formar un triangulo*/

#include <iostream>
using namespace std;

int main(){
    double a,b,c;
    bool formatriangulo;
    bool esequilatero;

    cout << "introduce el primer lado: ";
    cin >> a;
    cout << "introduce el segundo lado: ";
    cin >> b;
    cout << "introduce el tercer lado: ";
    cin >> c;

    formatriangulo = (a+b>c && a+c>b && b+c>a);
    esequilatero =  (a==b && a==c && b==c);

    if(formatriangulo){
        cout << "Esos tres lados forman triángulo";
        
        if(esequilatero){
        cout << "Es un triángulo equilátero";
        }
    }
    else{
        cout << "Esos tres lados no forman triángulo" << endl;
    }


}