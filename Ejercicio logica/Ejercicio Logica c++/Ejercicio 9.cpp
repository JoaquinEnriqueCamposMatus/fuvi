#include<iostream>
using namespace std;
int main() {

	// Se hara un un algoritmo que, dado un número entero, visualice en pantalla si
	// es par o impar. En el caso de ser 0, debe visualizar "el número no es par ni impar".
	string nombre;
	int num_entero;
	cout << "Ingrese su Nombre: ";
	cin >> nombre;
	cout << endl;
	cout << "Bienvenido " << nombre << " al programa " << endl;
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	do {
		cout << "Ingrese el valor a: ";
		cin >> num_entero;
	} while (num_entero<=0);
	if (num_entero>0) {
		if ((num_entero%2==0)) {
			cout << "El numero es par " << endl;
		} else {
			cout << "El numero es impar " << endl;
		}
	} else {
		cout << "No se pueden ingresar valores negativos " << endl;
	}
	return 0;
}

