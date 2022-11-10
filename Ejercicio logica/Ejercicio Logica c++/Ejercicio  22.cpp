
#include<iostream>
using namespace std;

int main() {
	int ano;

	string nombre;
	int num;
	cout << "Sea Bienvenido al programa, Ingrese su nombre " << endl;
	cin >> nombre;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	cout << "En este programa se sabra si un año ingresado es bisiesto o no " << endl;
	cout << "" << endl;
	cout << "Ingrese el año " << endl;
	cin >> ano;
	if (ano%4==0) {
		if (ano%100==0) {
			if (ano%400==0) {
				cout << "El año, " << ano << " es Bisiesto " << endl;
			} else {
				cout << "El año, " << ano << "  no es Bisiesto " << endl;
			}
		} else {
			cout << "El año, " << ano << "  es Bisiesto " << endl;
		}
	} else {
		cout << "El año, " << ano << "  no es Bisiesto " << endl;
	}
	return 0;
}

