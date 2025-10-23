/*Programa que calcula la diferencia de tiempo entre dos horas del día en segundos
,y te dice cual es anterior*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int h1, m1, s1, h2, m2, s2, t1, t2, d;

    cin >> h1;
    cin >> m1;
    cin >> s1;
    cin >> h2;
    cin >> m2;
    cin >> s2;

    t1 = h1*3600 + m1*60 + s1;
    t2 = h2*3600 + m2*60 + s2;

    bool t1_ant = t1-t2 < 0;
    bool t2_ant = t1-t2 > 0;

    if(t1_ant){
        cout << "La primera hora es anterior" << endl;
    }
    if(t2_ant){
        cout << "La segunda hora es anterior" << endl;
    }
    
    d = abs(t1-t2);

    cout << "la diferencia son " << d << " seg" << endl;
}