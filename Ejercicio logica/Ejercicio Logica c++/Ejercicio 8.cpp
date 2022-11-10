

#include<iostream>
using namespace std;


// se leyó otra variable con >>.

int main() {
	string nombre;
	int num_entero;
	// Se hara un un algoritmo que, dado un número entero, visualice en pantalla si
	// es par o impar. En el caso de ser 0, debe visualizar "el número no es par ni impar".
	cout << "Ingrese su Nombre: ";
	cin >> nombre;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "Bienvenido " << nombre << " al programa " << endl;
	cout << "Ingrese el valor a: ";
	cin >> num_entero;
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	do {
		if (num_entero>0) {
			if ((num_entero%2==0)) {
				cout << "El numero es par " << endl;
			} else {
				cout << "El numero es impar " << endl;
			}
		}
	} while (num_entero!=0);
	return 0;
}

