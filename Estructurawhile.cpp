/*
Nombre del archivo: Estructutrawhile.cpp
autor: joacon
lugar: itv
instrucciones: 	Ejemplo de estrucutra repetitiva while

*/

#include<iostream>
using namespace std;

int main(){
	
	int edad;
	string nombre;
	cout << "Bienvenido a la Discoteca " << endl;
	cout << "Ingrese su nombre: " << endl;
	getline (cin,nombre) ;
	cout << "|nIngrese su Edad: " << endl;
	cin >> edad;
	while (edad < 18 ){
		cout << "Ingrese su edad ";
		cin>> edad;
		
	}
	cout << "Bienvenido " << nombre <<  " a la Discoteca "<< endl;
	cout <<"Fin del Programa";
	return 0;
}