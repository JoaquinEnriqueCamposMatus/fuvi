
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float total;
	float vara;
	float varb;
	float varc;
	int x;
	cout << "Ingrese el Valor: " << endl;
	cin >> x;
	cout << "El Valor de X en positivo es de " << endl;
	cout << "" << endl;
	vara = pow((x-2),2)/2;
	varb = pow((x-4),4)/4;
	varc = pow((x-6),6)/6;
	total = vara+varb+varc;
	cout << " F(x) = " << total << endl;
	cout << "" << endl;
	cout << "El Valor de X en Negativo es de " << endl;
	cout << "" << endl;
	vara = pow((x-2),2)/2;
	varb = pow((x-4),4)/4;
	varc = pow((x-6),6)/6;
	total = vara-varb-varc;
	cout << " F(x) = " << total << endl;
	return 0;
}

