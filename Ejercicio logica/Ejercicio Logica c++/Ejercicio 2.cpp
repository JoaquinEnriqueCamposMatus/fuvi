

#include<iostream>
using namespace std;


int main() {
	string nombre;
	int vara;
	int varb;
	cout << "Hoy en el Programa sabremos si una Variable es Igual, Mayor o Menor que otra" << endl;
	cout << "Ingrese su Nombre " << nombre << endl;
	cin >> nombre;
	cout << "" << endl;
	cout << "Sea Bienvenido " << nombre << " Espero que se encuentre bien, Daremos incio al programa" << endl;
	cout << "" << endl;
	cout << "Ingrese el Valor que le quiere dar a VarA ";
	cin >> vara;
	cout << "Ingrese el Valor que le quiere dar a VarB ";
	cin >> varb;
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	if ((vara>varb)) {
		cout << "La Variable VarA " << vara << " es Mayor a VarB " << varb << endl;
	} else {
		cout << "La Variable VarB " << varb << " es Mayor a VarA " << vara << endl;
	}
	if ((vara==varb)) {
		cout << "La Variable VarA " << vara << " y la Variable VarB son iguales   " << varb << endl;
	} else {
		cout << "No son Iguales" << endl;
	}
	return 0;
}

