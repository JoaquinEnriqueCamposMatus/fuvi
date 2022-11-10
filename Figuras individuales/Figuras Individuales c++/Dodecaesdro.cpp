
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
	cout << "Hoy en este programa haremos distintos calculos en el Dodecaesdro" << endl;
	cout << "Dodecaedro" << endl;
	cout << "Que desea calcular " << endl;
	cout << "Area - 1" << endl;
	cout << "Volumen - 2" << endl;
	cin >> x;
	switch (x) {
	case 1:
		contador = 1;
		while (contador<=3) {
			cout << "***** Calculemos el Area del Dodecaedro   *****" << endl;
			cout << "La formula  a utilizar3 * Arista elevada al cuadrado por Raiz de 25 + 10 * Raiz de 5  " << endl;
			cout << "Ingrese el valor de la Arista : ";
			cin >> arista;
			if (arista>0) {
				area = 3*pow(arista,2)*sqrtf(25+10*sqrtf(5));
				cout << "El Area del Dodecaedro  es de: " << area << endl;
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
			cout << "***** Calculemos el Volumen del Dodecaedro   *****" << endl;
			cout << "La formula  a utilizar es 1/4 * (15  +7 * Raiz de 5) * Arista elevado al cubo" << endl;
			cout << "Ingrese el valor de la Arista: ";
			cin >> arista;
			if (arista>0) {
				volumen = 0.25*(15+7*sqrtf(5))*pow(arista,3);
				cout << "El volumen del Dodecaedro es de: " << volumen << endl;
				contador = 4;
			} else {
				cout << "Estos valores no son permitidos" << endl;
				contador = contador+1;
			}
		}
		break;
	default:
		cout << "Valor no Valido" << endl;
	}
	cout << "Fin del Programa" << endl;
	return 0;
}

