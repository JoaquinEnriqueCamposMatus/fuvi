

#include<iostream>
using namespace std;



int main() {
	string nombrealumnos;
	int notapractica;
	int notaproblema;
	int notateorica;
	int notatotal;
	int opciones;
	do {
		cout << "¿Desea Calcular las Notas de los alumnos?" << endl;
		cout << "Opciones " << endl;
		cout << "1_ SI" << endl;
		cout << "2_ NO" << endl;
		cin >> opciones;
		switch (opciones) {
		case 1:
			cout << "Ingrese el Nombre del alumno" << endl;
			cin >> nombrealumnos;
			cout << "" << endl;
			cout << "Ingrese el valor a la Practica:";
			cin >> notapractica;
			if (notapractica>10) {
				cout << "Ud paso el rango maximo" << endl;
			}
			cout << "Ingrese el valor al Problema: ";
			cin >> notaproblema;
			if (notaproblema>50) {
				cout << "Ud paso el rango maximo" << endl;
			}
			cout << "Ingrese el valor a la Teorica: ";
			cin >> notateorica;
			if (notateorica>40) {
				cout << "Ud paso del rango maximo" << endl;
			}
			notatotal = notapractica+notaproblema+notateorica;
			cout << "La nota final del estudiante es de: " << notatotal << endl;
			cout << "" << endl;
			cout << "Presione cualquier tecla para escoger a otro estudiante" << endl;
			cin.get(); // a diferencia del pseudocódigo, espera un Enter, no cualquier tecla
			cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			break;
		case 2:
			

			cout << "Ud ha salido con exito del programa" << endl;
			break;
		}
	
	} while (opciones!=2);
	return 0;
}

