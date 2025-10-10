#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a1, a2, a3;
    double m, d;

    cin >> a1;
    cin >> a2;
    cin >> a3;

    m = (a1+a2+a3)/3;
    d = sqrt(m);

    cout << m << endl;
    cout << d;
}