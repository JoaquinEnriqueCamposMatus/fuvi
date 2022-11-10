
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float area;
	float arista;
	float contador;
	float diagonal;
	string nombre;
	float volumen;
	int x;
	cout << "Sea coordialmente bienvenido a mi programa, realizado por Joaquin " << endl;
	cout << "" << endl;
	cout << "Un gusto verlo estimad@" << nombre << endl;
	cin >> nombre;
	cout << " espero se encuentre bien " << endl;
	cout << "" << endl;
	cout << "Hoy en este programa haremos distintos calculos en el Hexaedro" << endl;
	cout << "Hexaesdro" << endl;
	cout << "Que desea calcular " << endl;
	cout << "Area - 1" << endl;
	cout << "Volumen - 2" << endl;
	cout << "Diagonal - 3" << endl;
	cin >> x;
	switch (x) {
	case 1:
		contador = 1;
		while (contador<=3) {
			cout << "***** Calculemos el Area del Hexaedro   *****" << endl;
			cout << "La formula  a utilizar 6 * Arista Elevado al Cuadrado " << endl;
			cout << "Ingrese el valor de la Arista: ";
			cin >> arista;
			if (arista>0) {
				area = 6*pow(arista,2);
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
			cout << "***** Calculemos el Volumen del Hexaedro  *****" << endl;
			cout << "La formula  a utilizar es Arista al cubo " << endl;
			cout << "Ingrese el valor de la Arista: ";
			cin >> arista;
			if (arista>0) {
				volumen = pow(arista,3);
				cout << "El volumen del Hexaedro es de: " << volumen << endl;
				contador = 4;
			} else {
				cout << "Estos valores no son permitidos" << endl;
				contador = contador+1;
			}
		}
		break;
	case 3:
		contador = 1;
		while (contador<=3) {
			cout << "***** Calculemos el Diagonal del Hexaedro  *****" << endl;
			cout << "La formula  a utilizar es Arista por Raiz de 3 " << endl;
			cout << "Ingrese el valor de la Arista: ";
			cin >> arista;
			if (arista>0) {
				volumen = arista*sqrtf(3);
				cout << "El Diagonal del Hexaedro es de: " << volumen << endl;
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

