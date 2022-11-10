

#include<iostream>
using namespace std;

int main() {
	string nombre;
	int num_1;
	int num_2;
	int num_3;
	int result;
	cout << "Hoy en el Programa se hara un algoritmo que pida por teclado tres números; si el primero es negativo, debe imprimir el producto de los tres y si no lo es, imprimirá la suma. " << endl;
	cout << "Ingrese su Nombre " << nombre << endl;
	cin >> nombre;
	cout << "" << endl;
	cout << "Sea Bienvenido " << nombre << " Espero que se encuentre bien, Daremos incio al programa" << endl;
	cout << "" << endl;
	cout << "Ingrese el valor que le quiere dar al primer numero ";
	cin >> num_1;
	cout << "Ingrese el valor que le quiera dar al segundo numero ";
	cin >> num_2;
	cout << "Ingrese el valor que le quiera dar al tercer numero ";
	cin >> num_3;
	cout << "" << endl;
	cout << "Procesamiento" << endl;
	if (num_1<0) {
		result = num_1*num_2*num_3;
		cout << "El resultado es de " << result << endl;
	} else {
		if (num_1>0) {
			result = num_1+num_2+num_3;
			cout << "El resultado es de: " << result << endl;
		}
	}
	return 0;
}

