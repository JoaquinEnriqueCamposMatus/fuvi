/*
Nombre del archivo: manipuladores.cpp
autor: joacon
lugar: itv
	instrucciones: ejemplo de manipulacion E/S
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	cout << left;
	cout << setw(20) << "Artista" << setw(10) << " Album" << endl
	  << setw(20) <<  "Taylor Swift" <<  setw(10) << " Lover" << endl;
	 cout << fixed << setprecision (2) <<  12.34467;
	
	
	return 0;
}
	
