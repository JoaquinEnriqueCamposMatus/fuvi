/*
Nombre del archivo: salarioneto.cpp
autor: joacon
lugar: itv
instrucciones: salarioneto

*/

#include<iostream>
using namespace std;
//VARIABLE GLOBAL
const double Tasaantiguedad = 15;
const double Tasasindicato = 15;
const double  Tasasinss = 7;
const double Tasasir = 15;
const double tasainsspatronal = 22.5;
int main(){
	
	double salariobasico, ingresoneto, ingresototal, deduccionestotales, montoantiguedad;
	double ingresoantiguedad, montosindicato, montoinss, montoir, montoinsspatronal;
	string nombre;
	
	// pedir al usuario
	
	cout << "HOLAA " << nombre;
	cin >> nombre;

	
	cout << " Sea bienvenido  " << nombre << " Ingrese su salario basico C$: ";
	cin >> salariobasico;
	
	//calcular los ingresos 
	montoantiguedad = salariobasico * (Tasaantiguedad/100);
	ingresototal = salariobasico + montoantiguedad;
	
	
	// calculo de deducciones
	montosindicato = salariobasico * (Tasasindicato/100);
	montoinss = ingresototal * (Tasasinss/100);
	montoir = ingresototal * (Tasasir/100);
	deduccionestotales = montosindicato + montoinss + montoir;
	
	// calcular ingreso neto
	
	ingresoneto = ingresototal - deduccionestotales;
	
	//Calcular las deducciones del empleador
	
	montoinsspatronal = ingresototal * (tasainsspatronal/100);
	
	
	//MOSTRAR LOS RESUTADOS
	
	cout << nombre << "Tus datos son";
	cout << "salario basico = C$ " << salariobasico << endl;
	cout << "***** Ingreso totales***** " << endl;
	cout << "Monto por antiguedad = C$ " << montoantiguedad << endl;
    cout << "Monto de ingresos totales = C$ " << ingresototal << endl;
	cout << "****Deducciones totales*****" << endl;
	cout << "Monto sindicato = C$ " << montosindicato  << endl; 
	cout << "Monto inss = C$ " << montoinss << endl;
	cout << "Monto IR = C$ " << montoir << endl;
	cout << "Deduccion total = C$ " << deduccionestotales << endl;
	cout << "***** ingreso neto *****" << endl;
	cout << "Ingreso neto = C$ = " << ingresoneto << endl;
	cout << "***** Deduccion empleador****" << endl;
	cout << "Monto inss patronal = C$ " << montoinsspatronal << endl;
	
	
	return 0;
	
}