
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float area;
	float contador;
	string nombre;
	float num_lados;
	float pi;
	float radio_menor;
	float volumen;
	int x;
	cout << "Sea coordialmente bienvenido a mi programa, realizado por Joaquin " << endl;
	cout << "" << endl;
	cout << "Un gusto verlo estimad@" << nombre << endl;
	cin >> nombre;
	cout << " espero se encuentre bien " << endl;
	cout << "" << endl;
	cout << "Hoy en este programa haremos distintos calculos En la Esfera" << endl;
	cout << "Esfera" << endl;
	cout << "Que desea calcular " << endl;
	cout << "Huso Esferico - 1" << endl;
	cout << "Cuña Esferica - 2" << endl;
	cin >> x;
	switch (x) {
	case 1:
		contador = 1;
		while (contador<=3) {
			cout << "***** Calculemos el Area del  Valor del Huso Esferico  *****" << endl;
			cout << "La formula  a utilizar 4 por PI por Radio Menor elevado al Cuadrado por El Numero de Lados / 360 " << endl;
			cout << "Ingrese el valor del Radio Menor: ";
			cin >> radio_menor;
			if (radio_menor>0) {
				cout << "" << endl;
				contador = 4;
			} else {
				cout << "Estos valores no son permitidos" << endl;
				contador = contador+1;
			}
		}
		contador = 1;
		while (contador<=3) {
			if ((radio_menor>0)) {
				cout << "Ingrese el valor del Numero de lados ";
				cin >> num_lados;
				if (num_lados>0) {
					area = 4*M_PI*pow(radio_menor,2)*num_lados/360;
					cout << "El area del Huso Esferico es de: " << area << endl;
					contador = 4;
				} else {
					cout << "Estos valores no son permitidos" << endl;
					contador = contador+1;
				}
			}
		}
		break;
	case 2:
		contador = 1;
		while (contador<=3) {
			cout << "***** Calculemos el Volumen de la Cuña Esferica *****" << endl;
			cout << "La formula  a utilizar es 4/3 por PI por Radio Menor elevado al Cubo por El Numero de Lados / 360 " << endl;
			cout << "Ingrese el valor del Radio Menor: ";
			cin >> radio_menor;
			if (radio_menor>0) {
				cout << "" << endl;
				contador = 4;
			} else {
				cout << "Estos valores no son permitidos" << endl;
				contador = contador+1;
			}
		}
		contador = 1;
		while (contador<=3) {
			if ((radio_menor>0)) {
				cout << "Ingrese el valor del Numero de lados ";
				cin >> num_lados;
				if (num_lados>0) {
					volumen = 1.33333333333*(M_PI*pow(radio_menor,3)*num_lados/360);
					cout << "El Volumen de la Cuña Esferica  es de: " << volumen << endl;
					contador = 4;
				} else {
					cout << "Estos valores no son permitidos" << endl;
					contador = contador+1;
				}
			}
		}
		break;
	default:
		cout << "Valor no valido" << endl;
	}
	cout << "Fin del Programa" << endl;
	return 0;
}

