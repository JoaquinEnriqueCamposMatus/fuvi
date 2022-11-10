
#include<iostream>
using namespace std;



int main() {
	string nombre;
	int vara;
	int varb;
	int varc;
	cout << "Sea Bienvenido al programa, Ingrese su nombre " << endl;
	cin >> nombre;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	varc = 1;
	vara = 0;
	varb = 0;
	while (varc<=100) {
		if (varc%2==0) {
			cout << "Este numero es multiplo de 2: " << varc << endl;
			vara = vara+1;
		}
		if (varc%3==0) {
			cout << "Este numero es multiplo de 3: " << varc << endl;
			varb = varb+1;
		}
		varc = varc+1;
	}
	cout << "Numero multiplos de 2 son: " << vara << endl;
	cout << "Numero multiplos de 3 son: " << varb << endl;
	return 0;
}

