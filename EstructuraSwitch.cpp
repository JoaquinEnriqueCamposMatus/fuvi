/*
Nombre del archivo: EstructuraSwitch.cpp
autor: joacon
lugar: itv
instrucciones: Ejemplo de la estructura de control condicional multiple swithc

*/

#include<iostream>
using namespace std;

int main(){
	int op;
	
	
	cout << "Menu de Opciones: " << endl ;
	cout << "1_ Diodos| n2_ Resistores| n3_Condensadores | n4 salir "<< endl ;
	cout << "Que desea adquirir, seleccione ";
	cin>> op;
	
	switch(op) {
		case 1:
	cout << "Ud adquirio:  Diodos " << endl;
	break;

		case 2:
	cout << "Ud adquirio:  Resistores " << endl;
	break;
		case 3:
	cout << "Ud adquirio:  Condensadores " << endl;
	break;
		case 4 :
	cout << "salio de manera exitosa, vuelva pronto " << endl;
	break;
	default:
		cout << "Opcion incorrecta, esa opcion no esta disponible en el programa "; 
		cout << "Fin del programa";

	}
	

	return 0;
}