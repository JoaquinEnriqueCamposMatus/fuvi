

#include<iostream>
using namespace std;


int main() {
	string clave;
	float cont;
	string nombre;
	cout << "Sea Bienvenido al programa, Ingrese su nombre " << endl;
	cin >> nombre;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	clave = "tuani";
	cont = 1;
	cout << "Para acceder a su cuenta de gmail sera necesario que ingreso su clave dada " << endl;
	cout << "" << endl;
	do {
		cout << "ingrese la clave" << endl;
		cin >> clave;
		if ((clave)=="tuani") {
			cout << "La Clave es correcta, ha ingresado de manera exitosa" << endl;
		} else {
			cout << "Contraseña no valida" << endl;
			cont = cont+1;
		}
	} while (!(clave=="tuani" || cont>3));
	return 0;
}

