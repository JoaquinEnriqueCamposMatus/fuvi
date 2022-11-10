
#include<iostream>
using namespace std;


int main() {
	int vara;
	int varb;
	int varc;
	cout << "Ingrese el primer valor: ";
	cin >> vara;
	cout << "Ingrese el Segundo valor: ";
	cin >> varb;
	cout << "Ingrese el Tercer valor: ";
	cin >> varc;
	if (vara==(varb+varc)) {
		cout << "El Numero " << vara << ", es la suma de " << varb << " + " << varc << endl;
	} else {
		if (varb==(vara+varc)) {
			cout << "El Numero " << varb << ", es la suma de " << vara << " + " << varc << endl;
		} else {
			if (varc==(vara+varb)) {
				cout << "El Numero " << varc << ", es la suma de " << vara << " + " << varb << endl;
			} else {
				cout << "Ninguno es la suma de los dos" << endl;
			}
		}
	}
	return 0;
}

