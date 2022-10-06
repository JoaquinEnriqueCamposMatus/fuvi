/*
Nombre del archivo: aleatorios.cpp
autor: joacon
lugar: itv
instrucciones: nuemeros aleatorios

*/

#include<iostream>
#include<cstdlib> // C standard library
#include<ctime>

using namespace std;

int main(){
	//long tiempoTranscurrido = time(nullptr); // 1 Enero 1970
	srand(time(nullptr)); // referencia para rand, seed random; semilla de inicio
	int aleatorio = rand() % 10;
	int num;
	
	cout<<"Adivine un numero entre 0 a 10"
	cin>> num;
	
	if (num == aleatorio)
	cout<< "congratulation, you're right"
	else
	cout<< "sorry, you did not hit"
	 
	
	cout<< aleatorio;
	
	
	

	
	return 0;
}