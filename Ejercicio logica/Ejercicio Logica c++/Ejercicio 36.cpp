
#include<iostream>
using namespace std;

int main() {
	float horasextras;
	float horastrabajadas;
	float incentivo;
	string nombreempleado;
	float salariobasico;
	float salarioneto;
	cout << "Ingrese el Nombre del Trabajador " << endl;
	cin >> nombreempleado;
	salariobasico = 20;
	cout << "" << endl;
	cout << "Su salario Basico es de 20 $ " << endl;
	cout << "" << endl;
	cout << "Ingrese las horas en las que a estado laborando:" << endl;
	cin >> horastrabajadas;
	if (horastrabajadas>48) {
		horasextras = horastrabajadas-48;
		salarioneto = (48*salariobasico)+(horasextras*(salariobasico+salariobasico*0.35));
		incentivo = (horasextras*(salariobasico+salariobasico*0.35));
		cout << nombreempleado << endl;
		cout << "Su sueldo por 48h es de: " << 48*salariobasico << "$" << endl;
		cout << "Las horas extras trabajadas dueron: " << horasextras << endl;
		cout << "El Incentivo es de: " << incentivo << "$" << endl;
		cout << "El Salario Neto:  " << salarioneto << "$" << endl;
	} else {
		salarioneto = horastrabajadas*salariobasico;
		cout << nombreempleado << endl;
		cout << "El sueldo por " << horastrabajadas << " horas es: $ " << salarioneto << endl;
	}
	return 0;
}

