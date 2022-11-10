
#include<iostream>
using namespace std;


int main() {
	int i;
	int num;
	int vector[10];
	int x;
	for (x=1;x<=10;x++) {
		cout << "Ingrese un numero: " << endl;
		cin >> vector[x-1];
	}
	cout << "Ingrese el numero que desea buscar" << endl;
	cin >> num;
	i = 0;
	for (x=1;x<=10;x++) {
		if (num==vector[x-1]) {
			cout << "El numero " << num << ", se encuentra en la posición: " << x << endl;
			i = 1;
		}
	}
	if (i==0) {
		cout << "El numero " << num << ", no se encuentra en el vector " << endl;
	}
	return 0;
}

