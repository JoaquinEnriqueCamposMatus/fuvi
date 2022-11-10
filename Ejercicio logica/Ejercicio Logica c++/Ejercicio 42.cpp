 

#include<iostream>
using namespace std;

int main() {
	float b1;
	float b10;
	float b100;
	float b1000;
	float b20;
	float b200;
	float b5;
	float b50;
	float b500;
	int cant;
	float cantbill1;
	float cantbill10;
	float cantbill100;
	float cantbill1000;
	float cantbill20;
	float cantbill200;
	float cantbill5;
	float cantbill50;
	float cantbill500;
	cout << "Sea Bienvenido al Banco Fuap" << endl;
	cout << "" << endl;
	cout << "Ingrese una Cantidad de Dinero: " << endl;
	cin >> cant;
	cantbill1 = 1;
	cantbill5 = 5;
	cantbill10 = 10;
	cantbill20 = 20;
	cantbill50 = 50;
	cantbill100 = 100;
	cantbill200 = 200;
	cantbill500 = 500;
	cantbill1000 = 1000;
	if (cant%1000==0) {
		b1000 = cant/cantbill1000;
		cout << "La porcione en Billetes de 1000 es de C$" << b1000 << endl;
	}
	if (cant%500==0) {
		b500 = cant/cantbill500;
		cout << "La porcione en Billetes de 500 es de C$" << b500 << endl;
	}
	if (cant%200==0) {
		b200 = cant/cantbill200;
		cout << "La porcione en Billetes de 200 es de C$" << b200 << endl;
	}
	if (cant%100==0) {
		b100 = cant/cantbill100;
		cout << "La porcione en Billetes de 100 es de C$" << b100 << endl;
	}
	if (cant%50==0) {
		b50 = cant/cantbill50;
		cout << "La porcione en Billetes de 50 es de C$" << b50 << endl;
	}
	if (cant%20==0) {
		b20 = cant/cantbill20;
		cout << "La porcione en Billetes de 20 es de C$" << b20 << endl;
	}
	if (cant%10==0) {
		b10 = cant/cantbill10;
		cout << "La porcione en Billetes de 10 es de C$" << b10 << endl;
	}
	if (cant%5==0) {
		b5 = cant/cantbill5;
		cout << "La porcione en monedas de 5 es de C$" << b5 << endl;
	}
	if (cant%1==0) {
		b1 = cant/cantbill1;
		cout << "La porcione en monedas de 1 es de C$" << b1 << endl;
	}
	return 0;
}

