

#include<iostream>
using namespace std;

int main() {
	float l;
	int n;
	string nombre;
	int valr;
	cout << "Sea Bienvenido al programa, Ingrese su nombre " << endl;
	cin >> nombre;
	cout << endl; 
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	// Se pide representar el algoritmo que nos calcule la suma de los N primeros números naturales. N se leerá por teclado.
	cout << "Ingrese un numero " << endl;
	cin >> n;
	if (n<=0) {
		cout << "No se puede calcular, asegurese de no ingresar valores negativos" << endl;
	} else {
		l = 1;
		valr = 0;
		while (l<=n) {
			valr = valr+l;
			l = l+1;
		}
		cout << "El suma de los numero es: " << valr << endl;
	}
	return 0;
}

