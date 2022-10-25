/*
Nombre del archivo: Advininanza.cpp
autor: joacon
lugar: itv
instrucciones: 	juego de adivinanza de un numero

*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand (time(nullptr));
	int aleatorio = rand() % 10; 
	int num, cont = 1;
	do {			
		cout << "Advina un numero entre 0 y 10" << endl ;
		cin>> num;
		if (num == aleatorio ){
				cout <<  "Felicidades has acertado " << endl;
				cont = 4;
			}else{
				cout << "Numero incorrecto " << endl ;
				if (cont == 3){
					cout << "agoto todos sus intentos " << endl;
					
				}
				cont++;
				
			}			
	}while(cont<4);
	cout << "el numero ganado era: " << aleatorio << endl;
	cout << "fin del programa ";
	return 0;
}



	
