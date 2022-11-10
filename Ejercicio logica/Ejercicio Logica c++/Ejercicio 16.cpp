

#include<iostream>
using namespace std;



int main() {
	bool band;
	int max;
	int min;
	float num;
	// Algoritmo que lea números enteros hasta teclear 0, y nos muestre el máximo, el mínimo y la media de todos ellos.
	cout << "Ingrese los valores " << endl;
	cin >> num;
	band = true;
	while (num!=0) {
		if (band==true) {
			max = num;
			min = num;
			band = false;
		} else {
			if (num>max) {
				max = num;
			} else {
				if (num>max) {
					min = num;
				}
			}
		}
		cout << "Ingrese los valores " << endl;
		cin >> num;
	}
	cout << "El max es: " << max << endl;
	cout << "el min es:" << min << endl;
	cout << "La media es: " << endl;
	return 0;
}

