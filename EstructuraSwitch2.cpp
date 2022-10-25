/*
Nombre del archivo: EstructuraSwitch.cpp
autor: joacon
lugar: itv
instrucciones: Ejemplo de la estructura de control condicional multiple swithc

*/

#include<iostream>
using namespace std;

int main(){
	char op;
	int op1;
	int cant;
	double precio; 
	
	
	cout << "Menu de Opciones: " << endl ;
	cout << "a_ Diodos| nb_ Resistores| nc_Condensadores | nd salir "<< endl ;
	cout << "Que desea adquirir, seleccione ";
	cin>> op;
	
	
	switch(op) {
		case 'a':
	cout << "Ud adquirio:  Diodos " << endl;
	cout << "Que tipo de Diodo desea comprar: "; 
	cout << "1_ LED | 2 _ Lazer " << endl;
	cout << "Que desea adquirir, seleccione " << endl; 
	cin>> op1;
	switch (op1){
		case 1: 
		cout << "Cantidad a comprar: ";
		cin >> cant;
		precio = 30;
		cout << "El monto a pagar es C$ " << cant * precio* 1.15 << endl ;
		break;
			case 2: 
		cout << "Cantidad a comprar: ";
		cin >> cant;
		precio = 30;
		cout << "El monto a pagar es C$ " << cant * precio* 1.15 << endl ;
		break;
	}
	break;

		case 'b':
	cout << "Ud adquirio:  Resistores " << endl;
	cout << "Que tipo de Resistor desea comprar: "; 
	cout << "1_ Capa Metalica | 2 _ Bombinados "<< endl;
	cout << "Que desea adquirir, seleccione " << endl; 
	cin>> op1;
	switch (op1){
		case 1: 
		cout << "Cantidad a comprar: ";
		cin >> cant;
		precio = 30;
		cout << "El monto a pagar es C$ " << cant * precio* 1.15 << endl ;
			case 2: 
		cout << "Cantidad a comprar: ";
		cin >> cant;
		precio = 30;
		cout << "El monto a pagar es C$ " << cant * precio* 1.15 << endl ;
		break;
		break;
		
	}
	break;
		case 'c':
	cout << "Ud adquirio:  Condensadores " << endl;
	cout << "Que tipo de Diodo desea comprar: " <<  endl;
	cout << "1_ Poliester | 2 _ Electrolito  ";
cout << "Que desea adquirir, seleccione " << endl; 
	cin>> op1;
	switch (op1){
		case 1: 
		cout << "Cantidad a comprar: ";
		cin >> cant;
		precio = 30;
		cout << "El monto a pagar es C$ " << cant * precio* 1.15 << endl ;
			case 2: 
		cout << "Cantidad a comprar: ";
		cin >> cant;
		precio = 30;
		cout << "El monto a pagar es C$ " << cant * precio* 1.15 << endl ;
		break;
	
	}
	break;
		case 'd' :
	cout << "salio de manera exitosa, vuelva pronto " << endl;
	break;
	default:
		cout << "Opcion incorrecta, esa opcion no esta disponible en el programa " << endl;
		cout << "Fin del programa";

	}
	

	return 0;
}