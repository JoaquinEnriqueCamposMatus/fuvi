/*
Nombre del archivo: aleatorios.cpp
autor: joacon
lugar: itv
instrucciones: otro ejemplo de numero aleatorios

*/

#include<iostream>
#include<cstdlib> // C standard library
#include<ctime>
using namespace std;

int main(){
	srand(time(nullptr)); // referencia para rand, seed random; semilla de inicio
int valorMin = 1, valorMax = 6;
	//formula oara generar numero dentro de un rango
	
	
	    short dado1 = (rand() % (valorMax - valorMin+ 1))+ valorMin;
		short dado2 = (rand() % (valorMax - valorMin+ 1))+ valorMin;
		
		cout<< dado1 << " , " << dado2;
		
	return 0;
}