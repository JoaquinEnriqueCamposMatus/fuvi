
#include<iostream>
using namespace std;


int main() {
	float descuento;
	int dias;
	float dist;
	float precioida;
	float precioregreso;
	float precio_total;
	cout << "Ingrese los dias de estancia" << endl;
	cin >> dias;
	cout << "Ingrese la distancia del viaje" << endl;
	cin >> dist;
	precio_total = dias*89.50;
	if (dias>7 && dist>1000) {
		descuento = (precio_total*0.3);
		precio_total = precio_total-descuento;
	}
	precioida = precio_total/2;
	precioregreso = precio_total/2;
	cout << "Precio de Ida: " << precioida << endl;
	cout << "Precio de regreso: " << precioregreso << endl;
	cout << "Descuento: " << descuento << endl;
	return 0;
}

