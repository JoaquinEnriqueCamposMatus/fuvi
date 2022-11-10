

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float altura;
	float area;
	float arista;
	float cont;
	string nombre;
	float volumen;
	int x;
	cout << "Sea coordialmente bienvenido a mi programa, realizado por Joaquin " << endl;
	cout << "" << endl;
	cout << "Un gusto verlo estimad@" << nombre << endl;
	cin >> nombre;
	cout << " espero se encuentre bien " << endl;
	cout << "" << endl;
	cout << "Hoy en este programa haremos distintos calculos del Tetraedro" << endl;
	cout << "Tetraedro" << endl;
	cout << "Que desea calcular " << endl;
	cout << "Area  - 1" << endl;
	cout << "Volumen - 2" << endl;
	cout << "Altura  - 3" << endl;
	cin >> x;
	switch (x) {
	case 1:
		cont = 1;
		while (cont<=3) {
			cout << "****** Calcularemos el Area del Tetraedro ******" << endl;
			cout << "" << endl;
			cout << "La formula a utilizar es Arista elevado al cuadrado por Raiz de 3 " << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor de la Arista: ";
			cin >> arista;
			if (arista>0) {
				area = pow(arista,2)*sqrtf(3);
				cout << "El area del Tetrahedro es de:" << area << endl;
				cont = 4;
			} else {
				cout << "Valor no Permitido" << endl;
				cont = cont+1;
			}
		}
		break;
	case 2:
		cont = 1;
		while (cont<=3) {
			cout << "****** Calcularemos el Volumen  del Tetraedro ******" << endl;
			cout << "" << endl;
			cout << "La formula a utilizar es Raiz de 2 / 12 por el Arista elevado al Cubo " << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor de la Arista: ";
			cin >> arista;
			if (arista>0) {
				volumen = (0.1178511302)*pow(arista,3);
				cout << "El Volumen del Tetrahedro es de:" << volumen << endl;
				cont = 4;
			} else {
				cout << "Valor no Permitido" << endl;
				cont = cont+1;
			}
		}
		break;
	case 3:
		cont = 1;
		while (cont<=3) {
			cout << "****** Calcularemos la Altura del Tetraedro ******" << endl;
			cout << "" << endl;
			cout << "La formula a utilizar es Arista por Raiz de 6/3 " << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor de la Arista: ";
			cin >> arista;
			if (arista>0) {
				altura = arista*sqrtf(6)/3;
				cout << "La Altura  del Tetrahedro es de:" << altura << endl;
				cont = 4;
			} else {
				cout << "Valor no Permitido" << endl;
				cont = cont+1;
			}
		}
		break;
	}
	cout << "Fin del Programa" << endl;
	return 0;
}

