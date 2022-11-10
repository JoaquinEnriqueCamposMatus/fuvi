

#include<iostream>
using namespace std;



int main() {
	int cantninas;
	int cantninos;
	float total;
	float totalninas;
	float totalninos;
	cout << "Ingrese la Cantidad de Niños:" << endl;
	cin >> cantninos;
	cout << "Ingrese la Cantidad de Niñas: " << endl;
	cin >> cantninas;
	total = cantninas+cantninos;
	cout << "El total de Ninos en el aula son: " << total << endl;
	cout << "" << endl;
	totalninas = cantninas*100/total;
	totalninos = cantninos*100/total;
	cout << "El Porcentaje de Niños es de: " << totalninos << endl;
	cout << "El Porcentaje de Niñas es de: " << totalninas << endl;
	return 0;
}

