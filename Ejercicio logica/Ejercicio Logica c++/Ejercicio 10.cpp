

#include<iostream>
using namespace std;


int main() {
	string nombre;
	int resultado;
	int resultado2;
	cout << "Ingrese su Nombre: ";
	cin >> nombre;
	cout << endl; 
	cout << "Bienvenido " << nombre << " al programa " << endl;
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	cout << "Esta seleccion es para saber si ud psara al siguiente curso" << "---" << "Selecciones 1, si ud posee el titulo de bachiller " << "---" << "Seleccione 0, si ud no posee el titulo de bachiller" << endl;
	cin >> resultado;
	if ((resultado==1)) {
		cout << "Ud accedio de manera correcta al sig curso." << endl;
	}
	if (resultado==0) {
		cout << "Ud paso la prueba de admision? " << "---" << " 1_ Si paso la prueba " << "---" << "0_ Si no paso la Prueba" << endl;
		cin >> resultado2;
		if (resultado2==1) {
			cout << "Ud accedio de manera correcta al sig curso" << endl;
		} else {
			if (resultado2==0) {
				cout << "Lo siento, no pudo entrar al curso; intente el otro año" << endl;
			}
		}
	}
	if (resultado>1 || resultado<0 || resultado2>1 || resultado2<0) {
		cout << "Ingreso un numero incorrecto, asegurese que sea los mostrado" << endl;
	}
	return 0;
}

