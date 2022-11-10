
#include<iostream>
using namespace std;


int main() {
	int impares;
	int num;
	int pares;
	int sumaimpar;
	int sumapar;
	int x;
	cout << "algoritmo que, dados 10 números naturales, indique cuántos deellos son números pares, nos muestre estos y calcule la media aritmética delos impares" << endl;
	sumaimpar = 0;
	sumapar = 0;
	pares = 0;
	impares = 0;
	for (x=1;x<=10;x++) {
		cout << "Ingrese un numero " << endl;
		cin >> num;
		if (num%2==0) {
			sumapar = sumapar+num;
			pares = pares+1;
		} else {
			sumaimpar = sumaimpar+num;
			impares = impares+1;
		}
	}
	cout << "La sumatoria de los pares es: " << sumapar << endl;
	cout << "Los numeros pares son: " << pares << endl;
	cout << "La media o promedio de los impares son: " << sumaimpar/impares << endl;
	return 0;
}

