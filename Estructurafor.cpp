/*
Nombre del archivo: Estructurafor.cpp
autor: joacon
lugar: itv
instrucciones:estrucutra for

*/

#include<iostream>
using namespace std;

int main(){
	int tabla;
	cout <<" Que tabla de multiplicar desea mostrar: ";
	cin >> tabla;
	for (int i = 1;i < 13;i++ ){
		if (i % 3 == 0 ){
				cout << tabla <<  " x " << i << " = " << tabla *i << endl;
		}
	
		
	}
	return 0;
}
	