#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    double mean, dev, abs, gauss;

    cin >> mean;
    cin >> dev;
    cin >> abs;

    gauss = (1/(dev*sqrt(2*M_PI))) * exp(-0.5 * pow((abs-mean)/dev, 2));

    cout << gauss << endl;
}