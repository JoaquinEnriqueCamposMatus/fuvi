

#include<iostream>
using namespace std;


int main() {
	float c;
	float cobro;
	int mes;
	float monto;
	string nombre;
	cout << "Hoy en el Programa se hara un Algoritmos donde Una tienda ofrece un descuento del 15% sobre el total de la compra durante el mes de febrero. Dado un mes y un importe (monto), calcular cuál es la cantidad que se debe cobrar al cliente." << endl;
	cout << "" << endl;
	cout << "Ingrese su nombre ";
	cin >> nombre;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "Sea Bienvenido " << nombre << "al programa" << endl;
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	cout << "Ingrese el mes: ";
	cin >> mes;
	cout << "Ingrese el total: ";
	cin >> monto;
	if (mes==2) {
		cout << "Se aplico el Descuento del 15% por ser el mes de febrero " << endl;
		cobro = (monto*15)/100;
		c = monto-cobro;
		cout << "El total a pagar con el descuento aplicado seria de: " << c << endl;
	} else {
		cout << "El total a pagar es de: " << monto << endl;
	}
	return 0;
}

