#include <iostream>
using namespace std;

int main(){
    int a,b,mayor;
    bool aparecidopar=false;

    cout << "introduzca dos números";
    cin >> a;
    cin >> b;

    if(a%2==0){
        aparecidopar=true;
        mayor=a;
    }

    if(b%2==0 && b>a){
        aparecidopar=true;
        mayor=b;
    }

    if(aparecidopar==false){
        cout << "ninguno era par"<< endl;
    }
    else{
        cout<<"el par mayor es " << mayor << endl;
    }
}