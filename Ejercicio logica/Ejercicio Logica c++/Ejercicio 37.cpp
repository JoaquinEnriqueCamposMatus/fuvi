

#include<iostream>
using namespace std;


int main() {
	int i;
	int n;
	cout << "Ingrese un número" << endl;
	cin >> n;
	i = 0;
	while ((n>1)) {
		if (n%2==0) {
			n = n/2;
		} else {
			n = n*3+1;
		}
		i = i+1;
	}
	cout << i << endl;
	// ¿Cuándo se detiene este algoritmo?
	// R= El algoritmo detiene su procesamiento cuando N = 0 
	// ¿Para qué sirve la variable i?
	// R= La Variable i viene siendo un contador
	// ¿Se debe recibir alguna entrada del usuario?
	// R= Si, debe ingresar un Numero mayor de 0
	// ¿Qué resultado entrega el algoritmo?
	// R= El logaritmo entrega un numero entero 
	// Suponga que el usuario ingresa el número 3, ¿Qué resultado entrega el algoritmo?
	// R= Entrega un Numero 7 
	return 0;
}

