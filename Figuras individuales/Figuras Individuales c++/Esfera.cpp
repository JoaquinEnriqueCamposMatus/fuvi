
#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float altura;
	float area;
	float areabase;
	float casquete_esferico;
	float contador;
	string nombre;
	float pi;
	float radio_mayor;
	float radio_menor;
	float volumen;
	float volumen_cilindro;
	float volumen_esfera;
	int x;
	float zona_esferica;
	cout << "Sea coordialmente bienvenido a mi programa, realizado por Joaquin " << endl;
	cout << "" << endl;
	cout << "Un gusto verlo estimad@" << nombre << endl;
	cin >> nombre;
	cout << " espero se encuentre bien " << endl;
	cout << "" << endl;
	cout << "Hoy en este programa haremos distintos calculos de la Esfera" << endl;
	cout << "Esfera" << endl;
	cout << "Que desea calcular " << endl;
	cout << "Volumen de la esfera - 1" << endl;
	cout << "Area de la Esfera - 2" << endl;
	cout << "Volumen de la Esfera - 3" << endl;
	cout << "Zona Esferica con el Area - 4" << endl;
	cout << "Zona Esferica con el Volumen - 5" << endl;
	cout << "Casquete Esferico con el Area - 6" << endl;
	cout << "Casquete Esferico con el Volumen - 7" << endl;
	cin >> x;
	switch (x) {
	case 1:
		contador = 1;
		while (contador<=3) {
			cout << "*****Calculemos el valor el Volumen de la Esfera *****" << endl;
			cout << "" << endl;
			cout << "La formula para el Volumen del cilindro es 2/3 por el Volumen del Cilindro " << endl;
			cout << "" << endl;
			cout << "Ingrese el valor del Volumen del cilindro : ";
			cin >> volumen_cilindro;
			if (volumen_cilindro>0) {
				volumen_esfera = 2/3*(volumen_cilindro);
				cout << "El valor del Volumen de la Esfera es de: " << volumen_esfera << endl;
				cout << "" << endl;
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
			cout << "*****Calculemos el valor el Area  de la Esfera*****" << endl;
			cout << "" << endl;
			cout << "La formula a ultilizar es 4 por  PI por Radio menor elevado al Cuadrado " << endl;
			cout << "Ingrese el valor del Radio Menor : ";
			cin >> radio_menor;
			if (radio_menor>0) {
				area = 4*M_PI*pow(radio_menor,2);
				cout << "El Area de la Esfera es de: " << area << endl;
				cout << "" << endl;
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
			cout << "*****Calculemos el valor el Volumen de la Esfera *****" << endl;
			cout << "" << endl;
			cout << "La Formula a utilizar es 4/3 por PI por Radio menor elevado al Cubo " << endl;
			cout << "Ingrese el valor del Radio menor: ";
			cin >> radio_menor;
			if (radio_menor<0) {
				volumen =1.3333333333*M_PI*pow(radio_menor,3);
				cout << "El valor del volumen de la Esfera es de:" << volumen << endl;
				cout << "" << endl;
				contador = 4;
			} else {
				cout << "Estos valores no son permitidos" << endl;
				contador = contador+1;
			}
		}
		break;
	case 4:
		contador = 1;
		while (contador<=3) {
			cout << "*****Calculemos el valor de la Zona Esferica con el Area *****" << endl;
			cout << "La formula  a ultulizar es 2 por PI por Radio mayor por Altura" << endl;
			cout << "Ingrese el valor del Radio Mayor: ";
			cin >> radio_mayor;
			if (areabase>0) {
				cout << "" << endl;
				contador = 4;
			} else {
				cout << "Estos valores no son permitidos" << endl;
				contador = contador+1;
			}
		}
		contador = 1;
		while (contador<=3) {
			if ((radio_mayor>0)) {
				cout << "Ingrese el valor de la altura: ";
				cin >> altura;
				if (altura>0) {
					zona_esferica = 2*M_PI*radio_mayor*altura;
					cout << "La Zona Esferica con el Area es de: " << zona_esferica << endl;
					contador = 4;
				} else {
					cout << "Estos valores no son permitidos" << endl;
					contador = contador+1;
				}
			}
		}
		break;
	case 5:
		contador = 1;
		while (contador<3) {
			cout << "*****Calculemos la Zona Esferica con el Volumen *****" << endl;
			cout << "La formula a utilizar es Pi por Altura(Altura elevada al Cuadrado más 3 por Radio Menor Elevado al Cuadrado más 3 por Radio Menor elevado al Cuadrado) entre 6" << endl;
			cout << "Ingrese el valor de la Altura: ";
			cin >> altura;
			if (altura>0) {
				cout << "" << endl;
				contador = 4;
			} else {
				cout << "Estos valores no son permitidos" << endl;
				contador = contador+1;
			}
		}
		contador = 1;
		while (contador<3) {
			if (altura>0) {
				cout << "Ingrese el valor del Radio Menor: ";
				cin >> radio_menor;
				if (radio_menor>0) {
					zona_esferica = M_PI*altura*(pow(altura,2)+3*pow(radio_menor,2)+3*pow(altura,2))/6;
					cout << "La Zona Esferica con el Volumen es de : " << zona_esferica << endl;
					contador = 4;
				} else {
					cout << "Estos valores no son permitidos" << endl;
					contador = contador+1;
				}
			}
		}
		break;
	case 6:
		contador = 1;
		while (contador<3) {
			cout << "*****Calculemos el Casquete Esferico  con el Area *****" << endl;
			cout << "La formula a utilizar es 2 por PI por Radio Mayor por Altura" << endl;
			cout << "Ingrese el valor del Radio Mayor: ";
			cin >> radio_mayor;
			if (radio_mayor>0) {
				cout << "" << endl;
				contador = 4;
			} else {
				cout << "Estos valores no son permitidos" << endl;
				contador = contador+1;
			}
		}
		contador = 1;
		while (contador<3) {
			if (radio_mayor>0) {
				cout << "Ingrese el valor del Altura: ";
				cin >> altura;
				if (altura>0) {
					casquete_esferico = 2*M_PI*radio_mayor+altura;
					cout << "El Casquete Esferico con el Area es de : " << casquete_esferico << endl;
					contador = 4;
				} else {
					cout << "Estos valores no son permitidos" << endl;
					contador = contador+1;
				}
			}
		}
		break;
	case 7:
		contador = 1;
		while (contador<3) {
			cout << "*****Calculemos el Casquete Esferico con el Volumen *****" << endl;
			cout << "La formula a utilizar es PI por Altura elevada al Cuadrado (3 por Radio Mayor - Altura) / 3" << endl;
			cout << "Ingrese el valor de la Altura: ";
			cin >> altura;
			if (altura>0) {
				cout << "" << endl;
				contador = 4;
			} else {
				cout << "Estos valores no son permitidos" << endl;
				contador = contador+1;
			}
		}
		contador = 1;
		while (contador<3) {
			if (altura>0) {
				cout << "Ingrese el valor del Radio Mayor: ";
				cin >> radio_mayor;
				if (altura>0) {
					casquete_esferico = M_PI*pow(altura,2)*(3*radio_mayor-altura)/3;
					cout << "El Casquete Esferico con el Volumen  es de  : " << casquete_esferico << endl;
					contador = 4;
				} else {
					cout << "Estos valores no son permitidos" << endl;
					contador = contador+1;
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

