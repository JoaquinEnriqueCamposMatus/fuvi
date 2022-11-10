
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float area;
	float cont;
	float diagonal;
	string nombre;
	float vara;
	float varb;
	float varc;
	float volumen;
	int x;
	cout << "Sea coordialmente bienvenido a mi programa, realizado por Joaquin " << endl;
	cout << "" << endl;
	cout << "Un gusto verlo estimad@" << nombre << endl;
	cin >> nombre;
	cout << " espero se encuentre bien " << endl;
	cout << "" << endl;
	cout << "Hoy en este programa haremos distintos calculos del Ortoedro" << endl;
	cout << "Ortoedro" << endl;
	cout << "Que desea calcular " << endl;
	cout << "Area  - 1" << endl;
	cout << "Diagonal - 2" << endl;
	cout << "Volumen  - 3" << endl;
	cin >> x;
	switch (x) {
	case 1:
		cont = 1;
		while (cont<=3) {
			cout << "****** Calcularemos el Area del Ortoedro ******" << endl;
			cout << "" << endl;
			cout << "La formula a utilizar es 2 por VarA por VarB más VarA por VarB + VarB por VarC" << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor a VarA: ";
			cin >> vara;
			if (vara>0) {
				cout << "" << endl;
				cont = 4;
			} else {
				cout << "Valor no Permitido" << endl;
				cont = cont+1;
			}
		}
		cont = 1;
		while (cont<=3) {
			if (vara>0) {
				cout << "Ingrese el Valor a VarB: ";
				cin >> varb;
				if (varb>0) {
					cout << "" << endl;
					cont = 4;
				} else {
					cout << "Valor no Permitido" << endl;
					cont = cont+1;
				}
			}
		}
		cont = 1;
		while (cont<=3) {
			if (varb>0) {
				cout << "Ingrese el Valor a VarC: ";
				cin >> varc;
				if (varc>0) {
					area = 2*(vara*varb+vara*varc+varb*varc);
					cout << "El Area del Ortoedro es de:" << area << endl;
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
			cout << "***** Calcularemos el Diagonal del Ortoedro " << endl;
			cout << "" << endl;
			cout << "La formula a utilizar es Raiz cudrad de VarA más VarB más VarC elevadas al cuadrado " << endl;
			cout << "" << endl;
			cout << "Ingrese ek Valor a VarA: ";
			cin >> vara;
			if (vara>0) {
				cout << "" << endl;
				cont = 4;
			} else {
				cout << "Valor no Permitido" << endl;
				cont = cont+1;
			}
		}
		cont = 1;
		while (cont<=3) {
			if (vara>0) {
				cout << "Ingrese el Valor a VarB:";
				cin >> varb;
				if (varb>0) {
					cont = 4;
				} else {
					cout << " Valor no Permitido" << endl;
					cont = cont+1;
				}
			}
		}
		cont = 1;
		while (cont<=3) {
			if (varb>0) {
				cout << "Ingrese el Valor a VarC: ";
				cin >> varc;
				if (varc>0) {
					diagonal = sqrtf(pow(vara,2)+pow(varb,2)+pow(varc,2));
					cout << "El Diagonal del Ortoedro es de:" << diagonal << endl;
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
			cout << "****** Calcularemos el Volumen del Ortoedro ******" << endl;
			cout << "" << endl;
			cout << "La formula a utilizar es VarA por VarB por VarC" << endl;
			cout << "" << endl;
			cout << "Ingrese el Valor a VarA: ";
			cin >> vara;
			if (vara>0) {
				cout << "" << endl;
				cont = 4;
			} else {
				cout << "Valor no Permitido" << endl;
				cont = cont+1;
			}
		}
		cont = 1;
		while (cont<=3) {
			if (vara>0) {
				cout << "Ingrese el Valor a VarB: ";
				cin >> varb;
				if (varb>0) {
					cout << "" << endl;
					cont = 4;
				} else {
					cout << "Valor no Permitido" << endl;
					cont = cont+1;
				}
			}
		}
		cont = 1;
		while (cont<=3) {
			if (varb>0) {
				cout << "Ingrese el Valor a VarC: ";
				cin >> varc;
				if (varc>0) {
					volumen = vara*varb*varc;
					cout << "El Volumen del Ortoedro es de:" << volumen << endl;
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

