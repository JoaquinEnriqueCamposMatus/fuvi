
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	int num;
	float pot;
	float rz;
	cout << "ingrese un numero:" << endl;
	cin >> num;
	if (num<=0) {
		cout << "No se pueden insertar valores negativos" << endl;
	} else {
		if (num>0) {
			pot = pow(num,2);
			rz = sqrtf(num);
			cout << "El numero ingresado fue: " << num << endl;
			cout << "La potencia del numero ingresado es de : " << pot << endl;
			cout << "La Raiz del numer ingresado es de: " << rz << endl;
		}
	}
	cout << "" << endl;
	return 0;
}

