
#include <iostream>

using namespace std;

int main(){

    double a,b,c,d,e,f;
    double x,y;

    /*Entradas*/
    cout << "introduce a: ";
    cin >> a;

    cout << "introduce b: ";
    cin >> b;

    cout << "introduce c: ";
    cin >> c;

    cout << "introduce d: ";
    cin >> d;

    cout << "introduce e: ";
    cin >> e;

    cout << "introduce f: ";
    cin >> f;

    /*Proceso*/
    y = (f - d*c /a)/(e - d*b /a);
    x = (c - b*y) /a;

    /*salida*/
    cout << "x vale: " << x << "\ny vale: " << y << endl;
}