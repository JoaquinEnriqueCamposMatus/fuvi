
#include<iostream>
using namespace std;


int main() {
	string nombre;
	int num;
	int vara;
	int varb;
	cout << "Sea Bienvenido al programa, Ingrese su nombre " << endl;
	cin >> nombre;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	cout << "Ingrese el valor  " << endl;
	cin >> num;
	for (vara=1;vara<=num;vara++) {
		for (varb=1;varb<=vara;varb++) {
			cout << "* " << " ";
		}
		cout << "" << endl;
	}
	return 0;
}

