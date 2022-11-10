

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float b;
	float c;
	float disc;
	float parteimaginaria;
	float partereal;
	float r;
	float x1;
	float x2;
	cout << "Se ejecutara una ecuacion de segundo grado" << endl;
	cout << "La formula a es: " << endl;
	cout << "AX^2 + BX + C" << endl;
	cout << "***************" << endl;
	cout << "" << endl;
	cout << "Ingrese un valor para A: " << endl;
	cin >> a;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << a << "X^2 + BX + C" << endl;
	cout << "*****************" << endl;
	cout << "Ingrese un valor para B:" << endl;
	cin >> b;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << a << "X^2 +" << b << "X + C" << endl;
	cout << "*********************" << endl;
	cout << "Ingrese un valor para C:" << endl;
	cin >> c;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << a << "X^2 +" << b << "X +" << c << endl;
	cout << "********************" << endl;
	// Proceso 
	disc = (pow(b,2))-4*(a*c);
	if (disc>0) {
		x1 = ((-b)+sqrtf(disc))/(2*a);
		x2 = ((-b)-sqrtf(disc))/(2*a);
		cout << "La primera Raiz es de: " << x1 << endl;
		cout << "La segunda Raiz es de: " << x2 << endl;
	} else {
		if (disc<0) {
			partereal = (-b)/(2*a);
			parteimaginaria = sqrtf(abs(disc))/(2*a);
			cout << "Raiz 1: " << partereal << " + " << parteimaginaria << " i " << endl;
			cout << "Raiz 1: " << partereal << " - " << parteimaginaria << " i " << endl;
		} else {
			disc = 0;
			r = (-b)/(2*a);
			cout << "La raiz es igual a: " << r << endl;
		}
	}
	cout << "Discriminante = " << disc << endl;
	return 0;
}

