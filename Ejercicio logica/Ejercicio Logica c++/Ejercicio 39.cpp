
#include<iostream>
using namespace std;


int main() {
	string nombre;
	int sueldo;
	cout << "Ingrese su nombre" << endl;
	cin >> nombre;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << nombre << " Bienvenido al Banco Los Robles " << endl;
	cout << "Para poder tener creditos, necestimos que ingrese su sueldo" << endl;
	cout << "" << endl;
	cout << "Ingrese su sueldo" << endl;
	cin >> sueldo;
	if (sueldo<=200000) {
		cout << "Querido " << nombre << ". No cuenta con el suficiente saldo para un Credito" << endl;
	} else {
	}
	if (sueldo>200000 && sueldo<500000) {
		cout << "Querido " << nombre << ", cuenta con un saldo para un credito de C$500,000" << endl;
	} else {
	}
	if (sueldo>500000 && sueldo<1000000) {
		cout << "Querido " << nombre << ", cuenta con un saldo para un credo de C$2,000,000" << endl;
	}
	return 0;
}

