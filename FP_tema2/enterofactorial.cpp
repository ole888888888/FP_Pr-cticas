#include <iostream>
using namespace std;

int main(){
	int n,i = 1;
	long long factorial = 1;

	cout << "introduce el valor de factorial que quieres";
	cin >> n;

	while(i <= n){
		factorial = factorial*i;
		cout << factorial << endl;
		i++;
	}
}

