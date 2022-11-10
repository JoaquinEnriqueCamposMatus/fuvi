
#include<iostream>
using namespace std;
int main() {
	string nombre;
	int numero_1;
	int numero_2;
	int numero_3;
	cout << "Hoy en el Programa sabremos que Numero es el mayor " << endl;
	cout << "Ingrese su Nombre " << nombre << endl;
	cin >> nombre;
	cout << "" << endl;
	cout << "Sea Bienvenido " << nombre << " Espero que se encuentre bien, Daremos incio al programa" << endl;
	cout << "" << endl;
	cout << "Ingrese el valor que le quiere dar al primero numero ";
	cin >> numero_1;
	cout << "Ingrese el valor que le quiere dar al segundo  numero ";
	cin >> numero_2;
	cout << "Ingrese el valor que le quiere dar al tercer numero ";
	cin >> numero_3;
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	if (numero_1>numero_2) {
		if (numero_1>numero_3) {
			cout << "El Primer numero " << numero_1 << " Es mayor que los demas" << endl;
		}
	}
	if (numero_2>numero_1) {
		if (numero_2>numero_3) {
			cout << "El Segundo numero " << numero_2 << " Es mayor que los demas" << endl;
		}
	}
	if (numero_3>numero_1) {
		if (numero_3>numero_2) {
			cout << "El Tercer " << numero_3 << " Es mayor que los demas" << endl;
		}
	}
	return 0;
}

