

#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float area;
	float arista;
	float contador;
	string nombre;
	float volumen;
	int x;
	cout << "Sea coordialmente bienvenido a mi programa, realizado por Joaquin " << endl;
	cout << "" << endl;
	cout << "Un gusto verlo estimad@" << nombre << endl;
	cin >> nombre;
	cout << " espero se encuentre bien " << endl;
	cout << "" << endl;
	cout << "Hoy en este programa haremos distintos calculos en el Octaedro" << endl;
	cout << "Esfera" << endl;
	cout << "Que desea calcular " << endl;
	cout << "Area - 1" << endl;
	cout << "Volumen - 2" << endl;
	cin >> x;
	switch (x) {
	case 1:
		contador = 1;
		while (contador<=3) {
			cout << "***** Calculemos el Area del Octaedro  *****" << endl;
			cout << "La formula  a utilizar 2 * Arsita elevado al cuadrado * Raiz de 3 " << endl;
			cout << "Ingrese el valor del Arista : ";
			cin >> arista;
			if (arista>0) {
				area = 2*pow(arista,2)*sqrtf(3);
				cout << "El Area del Hexaedro es de: " << area << endl;
				contador = 4;
			} else {
				cout << "Estos valores no son permitidos" << endl;
				contador = contador+1;
			}
		}
		break;
	case 2:
		contador = 1;
		while (contador<=3) {
			cout << "***** Calculemos el Volumen del Octaedro *****" << endl;
			cout << "La formula  a utilizar es Raiz de 2/3 * Arista elevada al cubo " << endl;
			cout << "Ingrese el valor del Arista: ";
			cin >> arista;
			if (arista>0) {
				volumen = sqrtf(2)/3*pow(arista,3);
				cout << "EL volumen del Arista es de:" << volumen << endl;
				contador = 4;
			} else {
				cout << "Estos valores no son permitidos" << endl;
				contador = contador+1;
			}
		}
		break;
	default:
		cout << "Valor no valido" << endl;
	}
	cout << "Fin del Programa" << endl;
	return 0;
}

