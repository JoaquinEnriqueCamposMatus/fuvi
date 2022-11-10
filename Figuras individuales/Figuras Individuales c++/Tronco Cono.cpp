
#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float altura;
	float area_basemayor;
	float area_basemenor;
	float area_lateral;
	float area_total;
	float cont;
	float generatriz;
	string nombre;
	float pi;
	float radio_mayor;
	float radio_menor;
	float volumen;
	int x;
	cout << "Sea coordialmente bienvenido a mi programa, realizado por Joaquin " << endl;
	cout << "" << endl;
	cout << "Un gusto verlo estimad@" << nombre << endl;
	cin >> nombre;
	cout << " espero se encuentre bien " << endl;
	cout << "" << endl;
	cout << "Hoy en este programa haremos distintos calculos del Tronco del Cono" << endl;
	cout << "Tronco del Cono" << endl;
	cout << "Que desea calcular " << endl;
	cout << "Area Lateral - 1" << endl;
	cout << "Area Total - 2" << endl;
	cout << "Volumen  - 3" << endl;
	cin >> x;
	switch (x) {
	case 1:
		cont = 1;
		while (cont<=3) {
			cout << "***** Calcularemos el Area Lateral del Cono del Tronco ***** " << endl;
			cout << "" << endl;
			cout << "La formula a ultilizar es PI por Generatriz por (Radio Mayor + Radio Menor)  " << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor de la Generatriz: ";
			cin >> generatriz;
			if (generatriz>0) {
				cout << "" << endl;
				cont = 4;
			} else {
				cout << "Valor no permitido" << endl;
				cont = cont+1;
			}
		}
		cont = 1;
		while (cont<=3) {
			if ((generatriz>0)) {
				cout << "Ingrese el valor al Radio Mayor:";
				cin >> radio_mayor;
				if (radio_mayor>0) {
					cout << "" << endl;
					cont = 4;
				} else {
					cout << "Valor no permitido" << endl;
					cont = cont+1;
				}
			}
		}
		cont = 1;
		while (cont<=3) {
			if (radio_mayor>0) {
				cout << "Ingrese el valor al Radio Menor: ";
				cin >> radio_menor;
				cout << "" << endl;
				if (radio_menor>0) {
					area_lateral = M_PI*generatriz*(radio_mayor+radio_menor);
					cout << " El Area Lateral del Tronco del Cono es de: " << area_lateral << endl;
					cont = 4;
				} else {
					cout << "Valor no permitido " << endl;
					cont = cont+1;
				}
			}
		}
		break;
	case 2:
		cont = 1;
		while (cont<=3) {
			cout << "***** Calcularemos el Area Total del Tronco del Cono *****" << endl;
			cout << "" << endl;
			cout << "La Formula  a utilzar es la suma del Area Lateral más Area de la Base Mayor más Area de la Base Menor " << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor al Area Lateral: ";
			cin >> area_lateral;
			if (area_lateral>0) {
				cout << "" << endl;
				cont = 4;
			} else {
				cout << "Valor no permitido" << endl;
				cont = cont+1;
			}
		}
		cont = 1;
		while (cont<=3) {
			if ((area_lateral>0)) {
				cout << "Ingrese el Valor del Area de la Base Mayor:";
				cin >> area_basemayor;
				if (area_basemayor>0) {
					cout << "" << endl;
					cont = 4;
				} else {
					cout << "Valor no permitido" << endl;
					cont = cont+1;
				}
			}
		}
		cont = 1;
		while (cont<=3) {
			if (area_basemayor>0) {
				cout << "Ingrese el Valor del Area de la Base Menor: ";
				cin >> area_basemenor;
				if (area_basemenor>0) {
					area_total = area_lateral+area_basemayor+area_basemenor;
					cout << "El Area Total del Tronco del Cono es de: " << area_total << endl;
					cont = 4;
				} else {
					cout << "Valor no permitido" << endl;
					cont = cont+1;
				}
			}
		}
		break;
	case 3:
		cont = 1;
		while (cont<=3) {
			cout << "***** Calcularemos el Volumen del Cono del Tronco ***** " << endl;
			cout << "" << endl;
			cout << "La formula a ultilizar es 1/3 por PI por Altura por (Radio Mayor + Radio Menor Elevados al Cuadrado + Radio Mayor por Radio Menor  )  " << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor de la Altura : ";
			cin >> altura;
			if (altura>0) {
				cout << "" << endl;
				cont = 4;
			} else {
				cout << "Valor no permitido" << endl;
				cont = cont+1;
			}
		}
		cont = 1;
		while (cont<=3) {
			if ((altura>0)) {
				cout << "Ingrese el valor al Radio Mayor:";
				cin >> radio_mayor;
				if (radio_mayor>0) {
					cout << "" << endl;
					cont = 4;
				} else {
					cout << "Valor no permitido" << endl;
					cont = cont+1;
				}
			}
		}
		cont = 1;
		while (cont<=3) {
			if (radio_mayor>0) {
				cout << "Ingrese el valor al Radio Menor: ";
				cin >> radio_menor;
				cout << "" << endl;
				if (radio_menor>0) {
					volumen = 0.3333333333*M_PI*altura*(pow(radio_mayor,2)+pow(radio_menor,2)+radio_mayor*radio_menor);
					cout << " El Volumen  del Tronco del Cono es de: " << volumen << endl;
					cont = 4;
				} else {
					cout << "Valor no permitido " << endl;
					cont = cont+1;
				}
			}
		}
		break;
	default:
		cout << "Valor no valido " << endl;
	}
	cout << "FIN DEL PROGRAMA" << endl;
	return 0;
}

