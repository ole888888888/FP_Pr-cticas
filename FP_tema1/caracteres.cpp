
#include <iostream>
using namespace std;

int main()
{
    char car,mayuscula;
    int ascii;

    cin >> car;
    ascii = car;

    mayuscula = car + ('A'-'a');

    cout << mayuscula << endl;
}