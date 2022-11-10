/
#include<iostream>
using namespace std;



int main() {
	float altura;
	float areabase;
	float arealateral;
	float areatotal;
	float cont;
	float generatriz;
	string nombre;
	float perimetrobase;
	float volumen;
	int x;
	cout << "Sea coordialmente bienvenido a mi programa, realizado por Joaquin " << endl;
	cout << "" << endl;
	cout << "Un gusto verlo estimad@" << nombre << endl;
	cin >> nombre;
	cout << " espero se encuentre bien " << endl;
	cout << "" << endl;
	cout << "Hoy en este programa haremos distintos calculos del Cono" << endl;
	cout << "Cono" << endl;
	cout << "Que desea calcular " << endl;
	cout << "Area Lateral - 1" << endl;
	cout << "Area Total - 2" << endl;
	cout << "Volumen  - 3" << endl;
	cin >> x;
	switch (x) {
	case 1:
		cont = 1;
		while (cont<=3) {
			cout << "****** Calcularemos el Area Lateral del Cono******" << endl;
			cout << "" << endl;
			cout << "La formula a utilizar es Perimetro de la base * Generatriz / 2" << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor al Perimetro de la base: ";
			cin >> perimetrobase;
			if (perimetrobase>0) {
				cout << "" << endl;
				cont = 4;
			} else {
				cout << "Valor no Permitido" << endl;
				cont = cont+1;
			}
		}
		cont = 1;
		while (cont<=3) {
			if (perimetrobase>0) {
				cout << "Ingrese el Valor a la Generatriz: ";
				cin >> generatriz;
				if (generatriz>0) {
					arealateral = perimetrobase*generatriz/2;
					cout << "El Area Lateral del Cono es de :" << arealateral << endl;
					cont = 4;
				} else {
					cout << " Valor no Permitidos " << endl;
					cont = cont+1;
				}
			}
		}
		break;
	case 2:
		cont = 1;
		while (cont<=3) {
			cout << "***** Calcularemos el Area Total del Cono " << endl;
			cout << "" << endl;
			cout << "La formula a utilizar es Area lateral + el Area de la base " << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor al Area lateral: ";
			cin >> arealateral;
			if (arealateral>0) {
				cout << "" << endl;
				cont = 4;
			} else {
				cout << "Valor no Permitido" << endl;
				cont = cont+1;
			}
		}
		cont = 1;
		while (cont<=3) {
			if (arealateral>0) {
				cout << "Ingrese el Valor al Area de la base : ";
				cin >> areabase;
				if (areabase>0) {
					areatotal = arealateral+areabase;
					cout << "El Area Total del Cono es de:" << areatotal << endl;
					cont = 4;
				} else {
					cout << "Valor no Permitido " << endl;
					cont = cont+1;
				}
			}
		}
		break;
	case 3:
		cont = 1;
		while (cont<=3) {
			cout << "****** Calcularemos el Volumen del Cono ******" << endl;
			cout << "" << endl;
			cout << "La formula a utilizar es Area de la base * Altura / 3" << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor al Area de la base: ";
			cin >> areabase;
			if (areabase>0) {
				cout << "" << endl;
				cont = 4;
			} else {
				cout << "Valor no Permitido" << endl;
				cont = cont+1;
			}
		}
		cont = 1;
		while (cont<=3) {
			if (areabase>0) {
				cout << "Ingrese el Valor a la Altura: ";
				cin >> altura;
				if (altura>0) {
					volumen = areabase*altura/3;
					cout << "El Volumen del Cono es de:" << volumen << endl;
					cont = 4;
				} else {
					cout << " Valor no Permitidos " << endl;
					cont = cont+1;
				}
			}
		}
		break;
	default:
		cout << "Valor no Valido" << endl;
	}
	cout << "Fin del Programa" << endl;
	return 0;
}

