#include <iostream>
using namespace std;

enum class mayoria{
    A,B,C,AB,AC,BC,N  
};

int main(){
    int pa,ca,pb,cb,pc,cc;
    int ta,tb,tc,t;
    mayoria m,m1,m2,m3;

    cout << "introduzca los votos presenciales del partido A: ";
    cin >> pa;
    cout << "introduzca los votos por correo del partido A: ";
    cin >> ca;
    cout << "introduzca los votos presenciales del partido B: ";
    cin >> pb;
    cout << "introduzca los votos por correo del partido B: ";
    cin >> cb;
    cout << "introduzca los votos presenciales del partido C: ";
    cin >> pc;
    cout << "introduzca los votos por correo del partido C: ";
    cin >> cc;

    ta = pa + ca;
    tb = pb + cb;
    tc = pc + cc;
    t = ta + tb + tc;

    if(ta > t/2.0){
        m = mayoria::A;
    }
    else if(tb > t/2.0){
        m = mayoria::B;
    }
    else if(tc > t/2.0){
        m = mayoria::C;
    }
    else{
        if(ta+tb > t/2.0){
            m1 = mayoria::AB;
        }
        if(ta+tc > t/2.0){
            m2 = mayoria::AC;
        }
        if(tb+tc > t/2.0){
            m3 = mayoria::BC;
        }
    }

    if(m == mayoria::A){
        cout << "A obtuvo la mayoría absoluta";
    }
    else if(m == mayoria::B){
        cout << "B obtuvo la mayoría absoluta";
    }
    else if(m == mayoria::C){
        cout << "C obtuvo la mayoria absoluta";
    }
    else if(t==0){
        cout << "No valido\n";
    }
    else{
        if(m1 == mayoria::AB){
            cout << "La coalición AB obtuvo la mayoría absoluta\n";
        }
        if(m2 == mayoria::AC){
            cout << "La coalición AC obtuvo la mayoría absoluta\n";
        }
        if(m3 == mayoria::BC){
            cout << "La coalición BC obtuvo la mayoría absoluta\n";
        }
    }

}