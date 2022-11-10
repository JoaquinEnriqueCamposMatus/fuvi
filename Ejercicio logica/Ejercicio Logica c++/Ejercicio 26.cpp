


#include<iostream>
using namespace std;

#define SIN_TIPO string


int main() {
	SIN_TIPO nombre;
	int num;
	int producto;
	int result;
	cout << "Se calculara el producto de un numero natural, el programa se Detendra cuando ingrese el numero cero" << endl;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	num = 1;
	producto = 0;
	result = 1;
	while (num!=0) {
		cout << "Ingrese el valor:  " << endl;
		cin >> num;
		if (num!=0) {
			result = result*num;
			producto = result;
		}
	}
	cout << nombre << ", tu producto es de: " << producto << endl;
	return 0;
}

