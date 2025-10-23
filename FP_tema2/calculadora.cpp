#include <iostream>
using namespace std;

int main(){
    double dato1, dato2, sol;
    char opc;
    bool es_correcto;

    cin >> dato1;
    cin >> dato2;

    cout << "Elija (s)umar (r)estar (m)ultiplicar" << endl;
    cin >> opc;

    es_correcto = true
    if (opc=='s'){
        sol = dato1+dato2;
    }
    else if(opc=='r'){
        sol = dato1-dato2;
    }
    else if(opc='m'){
        sol = dato1*dato2;
    }
    else{
        es_correcto = false;
    }

    if (es_correcto){
        cout << sol << endl;
    }
    else{
        cout << "entrada incorrecta" << endl;
    }

}