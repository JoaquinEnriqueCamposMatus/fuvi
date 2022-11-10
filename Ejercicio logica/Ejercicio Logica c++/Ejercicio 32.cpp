

#include<iostream>
using namespace std;

int main() {
	int max;
	int x;
	int ye;
	int z;
	cout << "Ingrese el primer Valor: " << endl;
	cin >> x;
	cout << "Ingrese el segundo valor: " << endl;
	cin >> ye;
	if (x>0 && ye>0) {
		max = 1;
		z = 1;
		while (z<=x) {
			if (x%z==0 && ye%z==0) {
				if (z>max) {
					max = z;
				}
			}
			z = z+1;
		}
		cout << "El Maximo comun divisor es de: " << max << endl;
	} else {
		cout << "No ingrese valores negativos" << endl;
	}
	return 0;
}

