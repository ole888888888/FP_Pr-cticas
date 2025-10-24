#include <iostream>
using namespace std;

int main(){
	double x,potencia;
	int n,i = 1;

	cout << "introduzca el valor de la base: ";
	cin >> x;

	cout << "introduzca el valor del exponente: ";
	cin >> n;

	potencia = 1;

	while(i<=n){
		potencia = x*potencia;
		i++;
	}

	cout << potencia << endl;
}
