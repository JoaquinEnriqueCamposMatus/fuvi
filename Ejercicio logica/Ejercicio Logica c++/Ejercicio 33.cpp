

#include<iostream>
using namespace std;



int main() {
	int canthijos;
	string nombrefamiliar;
	float sociedadpadres;
	float total;
	float totalninos;
	cout << "Ingrese el Nombre del Familiar. " << endl;
	cin >> nombrefamiliar;
	cout << "Ingrese la cantidad de niños que desea ingresar " << endl;
	cin >> canthijos;
	if (canthijos==1) {
		totalninos = 10;
		sociedadpadres = 5;
		total = totalninos*sociedadpadres;
		cout << "El total de pago por 1 niño es de: " << totalninos << "$" << endl;
		cout << "El total de pago en la Sociedad de Padres es de: " << sociedadpadres << "$" << endl;
		cout << "Buenas Tardes" << endl;
	}
	if (canthijos==2) {
		totalninos = (10-(10*10)/100);
		sociedadpadres = 5;
		total = total+sociedadpadres;
		cout << "El total de pago por 2 niño es de: " << totalninos << "$" << endl;
		cout << "El total de pago en la Sociedad de Padres es de: " << sociedadpadres << "$" << endl;
		cout << "Buenas Tardes" << endl;
	}
	if (canthijos==3) {
		totalninos = (10-(10*15)/100);
		sociedadpadres = 5;
		total = total+sociedadpadres;
		cout << "El total de pago por 3 niño es de: " << totalninos << "$" << endl;
		cout << "El total de pago en la Sociedad de Padres es de: " << sociedadpadres << "$" << endl;
		cout << "Buenas Tardes" << endl;
	}
	if (canthijos>=4) {
		totalninos = (10-(10*20)/100);
		sociedadpadres = 5;
		total = total+sociedadpadres;
		cout << "El total de pago por " << canthijos << " niño es de: " << totalninos << "$" << endl;
		cout << "El total de pago en la Sociedad de Padres es de: " << sociedadpadres << "$" << endl;
		cout << "Buenas Tardes" << endl;
	}
	return 0;
}

