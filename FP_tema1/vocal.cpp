/*Lea un char y diga si es una vocal o no*/
#include <iostream>

using namespace std;

int main(){
    char c;

    cout << "Es una vocal????????????????:" << endl;
    cout << "Introduce un caracter ";
    cin >> c;

    bool vocal = (c == 'a')||(c == 'e')||(c == 'i')||(c == 'o')||(c == 'u');

    if(vocal){
        cout << c << " Es vocal";
    }
    else{
        cout << c << " NO es vocal" << endl;
    }
}
