
#include<iostream>
using namespace std;


int main() {
	float diesel;
	float gasoregular;
	float gasosuper;
	int lts;
	float total;
	int x;
	cout << "¿Que tipo de gasolina desea?" << endl;
	gasosuper = 32.85;
	gasoregular = 33.48;
	diesel = 28.45;
	cout << "****Gasolinas con sus respectivos precios****" << endl;
	cout << "Gasolina Super 32.85$ _ 1" << endl;
	cout << "Gasolina Regular 33.48$ _ 2" << endl;
	cout << "Diesel 28.45$  _ 3" << endl;
	cin >> x;
	switch (x) {
	case 1:
		cout << "Ud ha seleccionado la gasolina Super" << endl;
		cout << "" << endl;
		cout << "Cuantos litros Desea " << endl;
		cin >> lts;
		total = lts*gasosuper;
		cout << "" << endl;
		cout << "El total a pagar es de $: " << total << endl;
		break;
	case 2:
		cout << "Ud ha seleccionado la gasolina Regular" << endl;
		cout << "" << endl;
		cout << "Cuantos litros Desea " << endl;
		cin >> lts;
		total = lts*gasoregular;
		cout << "" << endl;
		cout << "El total a pagar es de $: " << total << endl;
		break;
	case 3:
		cout << "Ud ha seleccionado Diesel" << endl;
		cout << "" << endl;
		cout << "Cuantos litros Desea " << endl;
		cin >> lts;
		total = lts*diesel;
		cout << "" << endl;
		cout << "El total a pagar es de $: " << total << endl;
		break;
	}
	return 0;
}

