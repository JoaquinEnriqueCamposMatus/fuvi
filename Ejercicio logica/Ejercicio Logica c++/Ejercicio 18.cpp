

#include<iostream>
using namespace std;


int main() {
	int ano;
	float d;
	int dia;
	float m;
	int mes;
	string nombre;
	string nombremes;
	cout << "Sea Bienvenido al programa, Ingrese su nombre " << endl;
	cin >> nombre;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "En este programa se sabra el Dia, la fecha y el año." << endl;
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	cout << "Ingrese el dia: " << endl;
	cin >> dia;
	cout << "" << endl;
	cout << "Ingrese el mes: " << endl;
	cin >> mes;
	cout << "" << endl;
	cout << "Ingrese el año: " << endl;
	cin >> ano;
	if (dia<1 || d>31) {
		do {
			cout << "Dia desconocido" << endl;
			cout << "Ingrese un dia: " << endl;
			cin >> dia;
		} while (!(dia>0 && dia<32));
	}
	if (mes<1 || mes>12) {
		do {
			cout << "Mes desconocido" << endl;
			cout << "Ingrese el mes: " << endl;
			cin >> mes;
		} while (!(m>0 && m<13));
	}
	if (ano<1) {
		do {
			cout << "Año fuera de rango" << endl;
			cout << "Ingrese el año: " << endl;
			cin >> ano;
		} while (ano>=0);
	}
	switch (mes) {
	case 1:
		nombremes = "Enero";
		break;
	case 2:
		nombremes = "Febrero";
		break;
	case 3:
		nombremes = "Marzo";
		break;
	case 4:
		nombremes = "Abril";
		break;
	case 5:
		nombremes = "Mayo";
		break;
	case 6:
		nombremes = "Junio";
		break;
	case 7:
		nombremes = "Julio";
		break;
	case 8:
		nombremes = "Agosto";
		break;
	case 9:
		nombremes = "Septiembre";
		break;
	case 10:
		nombremes = "Octubre";
		break;
	case 11:
		nombremes = "Noviembre";
		break;
	case 12:
		nombremes = "Diciembre";
		break;
	}
	cout << dia << " de " << nombremes << " del " << ano << endl;
	return 0;
}

