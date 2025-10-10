
#include <iostream>

using namespace std;

int main()
{
    int a = 30, b = 100, c;

    c = a;
    a = b;
    b = c;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}