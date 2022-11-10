

#include<iostream>
using namespace std;


int main() {
	int num;
	int var;
	cout << "Ingrese un valor: " << endl;
	cin >> num;
	var = 1;
	while (var<=num) {
		if (num%var==0) {
			cout << "El valor " << var << ", es divisible entre " << num << endl;
		}
		var = var+1;
	}
	return 0;
}

