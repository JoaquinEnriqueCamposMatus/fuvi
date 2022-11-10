
#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float altura;
	float apotemapiramide;
	float area_basemayor;
	float area_basemenor;
	float area_lateral;
	float area_total;
	float cont;
	string nombre;
	float perimetro_basemayor;
	float perimetro_basemenor;
	float pi;
	float volumen;
	int x;
	cout << "Sea coordialmente bienvenido a mi programa, realizado por Joaquin " << endl;
	cout << "" << endl;
	cout << "Un gusto verlo estimad@" << nombre << endl;
	cin >> nombre;
	cout << " espero se encuentre bien " << endl;
	cout << "" << endl;
	cout << "Hoy en este programa haremos distintos calculos del Tronco de la Piramde" << endl;
	cout << "Tronco de la Piramide" << endl;
	cout << "Que desea calcular " << endl;
	cout << "Area Lateral - 1" << endl;
	cout << "Area Total - 2" << endl;
	cout << "Volumen  - 3" << endl;
	cin >> x;
	switch (x) {
	case 1:
		cont = 1;
		while (cont<=3) {
			cout << "***** Calcularemos el Area Lateral del Cono de la Piramide ***** " << endl;
			cout << "" << endl;
			cout << "La formula a ultilizar es Perimetro de la Base Mayor + Perimetro de la Base Menor / 2 * El Apotema de la Piramide  " << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor de la Perimetro de la Base Mayor: ";
			cin >> perimetro_basemayor;
			if (perimetro_basemayor>0) {
				cout << "" << endl;
				cont = 4;
			} else {
				cout << "Valor no permitido" << endl;
				cont = cont+1;
			}
		}
		cont = 1;
		while (cont<=3) {
			if ((perimetro_basemayor>0)) {
				cout << "Ingrese el valor del Perimetro de la Base Menor:";
				cin >> perimetro_basemenor;
				if (perimetro_basemenor>0) {
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
			if (perimetro_basemenor>0) {
				cout << "Ingrese el valor de la Apotema de la Piramide: ";
				cin >> apotemapiramide;
				cout << "" << endl;
				if (apotemapiramide>0) {
					area_lateral = perimetro_basemayor+perimetro_basemenor/2*apotemapiramide;
					cout << " El Area Lateral del Tronco de la Piramide es de  " << area_lateral << endl;
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
			cout << "***** Calcularemos el Area Total del Tronco de la Piramide *****" << endl;
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
					cout << "El Area Total del Tronco de la Piramide es de: " << area_total << endl;
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
			cout << "***** Calcularemos el Volumen del Cono de la Piramide ***** " << endl;
			cout << "" << endl;
			cout << "La formula a ultilizar es 1/3 por PI por Altura por (Area de la Base Mayor + Area de la Base Menor + Raiz de Area Base Mayor por Area Base Menor )  " << endl;
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
				cout << "Ingrese el valor del Area de la Base Mayor:";
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
				cout << "Ingrese el valor del Area de la Base Menor: ";
				cin >> area_basemenor;
				cout << "" << endl;
				if (area_basemenor>0) {
					volumen = 1.3333333333*M_PI*altura*(area_basemayor+area_basemenor+sqrtf(area_basemayor+area_basemenor));
					cout << " El Volumen  del Tronco de la Piramide es de: " << volumen << endl;
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

