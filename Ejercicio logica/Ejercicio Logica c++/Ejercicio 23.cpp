
#include<iostream>
using namespace std;

#define SIN_TIPO string

int main() {
	int a;
	int b;
	int c;
	SIN_TIPO nombre;
	float total;
	a = 0;
	total = 0;
	c = 0;
	cout << "Bienvenido al restaurante picosa" << endl;
	cout << "" << endl;
	cout << "Ingrese su nombre" << endl;
	cin >> nombre;
	cout << "" << endl;
	cout << "A continuacion, se les presentara las opciones" << endl;
	cout << "" << endl;
	while (a!=3) {
		cout << "1_ Menu de alimentos " << endl;
		cout << "2_ Menu de bebidas" << endl;
		cout << "3_ Total" << endl;
		cout << "4_ Salir" << endl;
		cin >> a;
		if (a==1) {
			b = 0;
			while (b!=2) {
				cout << "1_ Bocadillos de jamon - 1.5 C$" << endl;
				cout << "2_ Salir " << endl;
				cin >> b;
				if (b==1) {
					cout << "UD ha seleccionado el bocadillo de jamon" << endl;
					total = total+1.5;
				}
			}
		}
		if (a==2) {
			b = 0;
			while (b!=3) {
				cout << "1_ Cervezas = 0,75 C$ " << endl;
				cout << "2_ Refrescos  = 1.05 C$" << endl;
				cout << "3_ Salir " << endl;
				cin >> b;
				if (b==1) {
					cout << "Ud ha seleccionado la cerveza" << endl;
					total = total+0.75;
				} else {
					if (b==2) {
						cout << "Ud ha seleccionado el refresco  " << endl;
						total = total+1.05;
					}
				}
			}
			cout << "" << endl;
		} else {
			if (a==3) {
				cout << nombre << "el total a pagar es de C$: " << total << endl;
			}
		}
	}
	return 0;
}

