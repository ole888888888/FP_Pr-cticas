#include <iostream>

using namespace std;

int main(){
    double x,y,z,tmp;

    x = 1;
    y = 2;
    z = 3;

    tmp = y;
    y = x;
    x = z;
    z = tmp;

    cout << x << y << z;
}