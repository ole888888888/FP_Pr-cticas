/*Programa que comprueba si un número es primo o no*/

#include <iostream>
using namespace std;

int main(){
	int i;
	long long n;
	bool primo;

	primo=true;
	i=2;

	cout << "introduce un número: ";
	cin >> n;

	while(i<n && primo==true){
		if(n%i==0){
			primo = false;
		}
		i++;
	}

	if(primo == true){
		cout << "es primo" << endl;
	}

	else{
		cout << "no es primo" << endl;
	}
}
