

#include<iostream>
using namespace std;

int main() {
	float celsius;
	float con;
	float cont;
	float fahrenheit;
	string nombre;
	int x;
	cout << "Programa para conversiones de Celsius a Farenheit y Viceversa " << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << endl; 
	cout << "Hola " << nombre << " ¿Qué desa calcular primero?" << endl;
	cout << "" << endl;
	cout << "Celsius_ 1" << endl;
	cout << "Farhenheit_ 2" << endl;
	cin >> x;
	switch (x) {
	case 1:
		cont = 1;
		if (con<=3) {
			cout << "Se hara una conversion de Farhenheit a Celsius " << endl;
			cout << "" << endl;
			cout << "La formula a Utilizar es (Farhenheit - 32 ) / 18" << endl;
			cout << "" << endl;
			cout << "Ingrese una cantidad al Fahreheint" << endl;
			cin >> fahrenheit;
			if (fahrenheit>0) {
				celsius = (fahrenheit-32)/18;
				cout << "El Celsius es de " << celsius << "ºC" << endl;
				cont = 4;
			} else {
				cout << "Valor no permitido" << endl;
			}
		}
		break;
	case 2:
		if (con<=3) {
			cout << "Se hara una conversion de  Celsius a Farhenheit " << endl;
			cout << "" << endl;
			cout << "La formula a Utilizar es Celsius * 1.8 + 32" << endl;
			cout << "" << endl;
			cout << "Ingrese una cantidad al Celsius" << endl;
			cin >> celsius;
			if (celsius>0) {
				fahrenheit = (celsius*1.8)+32;
				cout << "El Fahrenheit es de " << fahrenheit << "ºF" << endl;
				cont = 4;
			} else {
				cout << "Valor no permitido" << endl;
			}
		}
		break;
	}
	return 0;
}

