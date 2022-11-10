
#include<iostream>
using namespace std;



int main() {
	float a;
	float b;
	float c;
	float d;
	float e;
	int n;
	string nombre;
	float total;
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
	if (n%2==0) {
		a = n+2;
		b = a+2;
		c = a+4;
		d = a+6;
		e = a+8;
		total = a+b+c+d+e;
		cout << a << " + " << b << " + " << c << " + " << d << " + " << e << " =  " << total << endl;
	} else {
		if (n%2==1) {
			a = n+1;
			b = a+2;
			c = a+4;
			d = a+6;
			e = a+8;
			total = a+b+c+d+e;
			cout << a << " + " << b << " + " << c << " + " << d << " + " << e << " =  " << total << endl;
		}
	}
	return 0;
}

