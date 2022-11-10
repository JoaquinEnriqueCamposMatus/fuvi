
#include<iostream>
using namespace std;

int main() {
	float media;
	float num;
	float suma;
	int total;
	int x;
	cout << "Ingrese la total de numero que quiere: " << endl;
	cin >> total;
	x = 1;
	suma = 0;
	while (x<=total) {
		cout << "Ingrese el numero: " << x << endl;
		cin >> num;
		suma = suma+num;
		x = x+1;
	}
	media = suma/total;
	cout << "La media es de: " << media << endl;
	return 0;
}

