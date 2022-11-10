
#include<iostream>
using namespace std;



int main() {
	float i;
	float j;
	int lado;
	string nombre;
	cout << "Sea Bienvenido al programa, Ingrese su nombre " << endl;
	cin >> nombre;
	cout << endl; 
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	cout << "" << endl;
	cout << "Ingrese el valor lado " << endl;
	cin >> lado;
	for (i=1;i<=lado;i++) {
		for (j=1;j<=lado;j++) {
			cout << "* ";
		}
		cout << "" << endl;
	}
	return 0;
}

