
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float altura;
	float apotemabase;
	float apotemapiramide;
	float area;
	float areabase;
	float arealateral;
	float areatotal;
	float area_basemayor;
	float area_basemenor;
	float area_lateral;
	float area_total;
	float arista;
	float casquete_esferico;
	float cont;
	float contador;
	float diagonal;
	float generatriz;
	string nombre;
	float num_lados;
	float perimetro;
	float perimetrobase;
	float perimetro_basemayor;
	float perimetro_basemenor;
	float pi;
	float radio_mayor;
	float radio_menor;
	float vara;
	float varb;
	float varc;
	float volumen;
	float volumen_cilindro;
	float volumen_esfera;
	int x;
	float zona_esferica;
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << "Bienvenido " << nombre << " a mi programa, creado por Joaquín Enrique Campos Matus, un Estudiante de Electronica Industrial de 1er año, 2022" << endl;
	cout << "" << endl;
	cout << "En este programa realizaremos distintos calculos a las Figuras Geometricas que se le presentaran a continuación." << endl;
	cout << "" << endl;
	cout << "FIGURAS GEOMETRICAS" << endl;
	cout << "" << endl;
	do {
		cout << "¿Que figura desea calcular" << endl;
		cout << "" << endl;
		cout << "1- Prisma " << endl;
		cout << "2- Cilindro " << endl;
		cout << "3- Piramide " << endl;
		cout << "4- Cono " << endl;
		cout << "5- Esfera " << endl;
		cout << "6- Tronco de cono " << endl;
		cout << "7- Tronco Piramide " << endl;
		cout << "8- Esfera 2 " << endl;
		cout << "9-  Ortoedro " << endl;
		cout << "10- Tetraedro " << endl;
		cout << "11- Hexaedro " << endl;
		cout << "12- Octaredro " << endl;
		cout << "13- Dodecaedro " << endl;
		cout << "14- Icosaedro" << endl;
		cout << "15- Salir" << endl;
		cin >> x;
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		switch (x) {
		case 1: prisma:
			cout << "Hoy en este programa haremos distintos calculos del Prisma" << endl;
			cout << "Prisma" << endl;
			cout << "Que desea calcular " << endl;
			cout << "" << endl;
			cout << "Area Lateral - 1" << endl;
			cout << "Area Total - 2" << endl;
			cout << "Volumen  - 3" << endl;
			cout << "Area de la Base - 4" << endl;
			cin >> x;
			switch (x) {
			case 1:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Area Lateral del Prisma******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Perimetro de la base por Altura" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Perimetro de la base: ";
					cin >> perimetrobase;
					if (perimetrobase>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (perimetrobase>0) {
						cout << "Ingrese el Valor a la Altura: ";
						cin >> altura;
						if (altura>0) {
							arealateral = perimetrobase*altura;
							cout << "El Area Lateral del Prisma :" << arealateral << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 2:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Area Total del Prisma " << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Area lateral + 2 * el Area de la base " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Area lateral: ";
					cin >> arealateral;
					if (arealateral>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (arealateral>0) {
						cout << "Ingrese el Valor al Area de la base : ";
						cin >> areabase;
						if (areabase>0) {
							areatotal = arealateral+2*areabase;
							cout << "El Area Total del Prisma es de:" << areatotal << endl;
							cont = 4;
						} else {
							cout << "Valor no Permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 3:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Volumen del Prisma ******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Area de la base * Altura" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Area de la base: ";
					cin >> areabase;
					if (areabase>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (areabase>0) {
						cout << "Ingrese el Valor a la Altura: ";
						cin >> altura;
						if (altura>0) {
							volumen = areabase*altura;
							cout << "El Volumen del Prisma es de:" << volumen << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 4:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Area de la base del Prisma ******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Perimetro * Apotema de la Base / 2" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Perimetro: ";
					cin >> perimetro;
					if (perimetro>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (perimetro>0) {
						cout << "Ingrese el Valor al Apotema: ";
						cin >> apotemabase;
						if (apotemabase>0) {
							areabase = perimetro*apotemabase/2;
							cout << "El Area de la Base es de:" << areabase << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			default:
				cout << "Valor no Valido" << endl;
			}
			break;
		case 2: cilindro:
			cout << "Hoy en este programa haremos distintos calculos del Cilindro " << endl;
			cout << "Cilindro" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Area Lateral - 1" << endl;
			cout << "2 Area Lateral - 2" << endl;
			cout << "Area Total - 3" << endl;
			cout << "2 Area Total - 4" << endl;
			cout << "Volumen  - 5" << endl;
			cout << "2 Volumen  - 6" << endl;
			cout << "Perimetro de la base - 7" << endl;
			cout << "Area de la Base - 8 " << endl;
			cin >> x;
			switch (x) {
			case 1:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Area Lateral del Cilindro******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Perimetro de la base por Altura" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Perimetro de la base: ";
					cin >> perimetrobase;
					if (perimetrobase>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (perimetrobase>0) {
						cout << "Ingrese el Valor a la Altura: ";
						cin >> altura;
						if (altura>0) {
							arealateral = perimetrobase*altura;
							cout << "El Area Lateral del Cilindro  :" << arealateral << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 2:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos con la segunda formula el Area Lateral del Cilindro******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es 2 * PI * radio menor * altura" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Radio Menor: ";
					cin >> radio_menor;
					if (radio_menor>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (radio_menor>0) {
						cout << "Ingrese el Valor a la Altura: ";
						cin >> altura;
						if (altura>0) {
							arealateral = 2*M_PI*radio_menor*altura;
							cout << "El Area Lateral del Cilindro  :" << arealateral << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 3:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Area Total del Cilindro " << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Area lateral + 2 * el Area de la base " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Area lateral: ";
					cin >> arealateral;
					if (arealateral>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (arealateral>0) {
						cout << "Ingrese el Valor al Area de la base : ";
						cin >> areabase;
						if (areabase>0) {
							areatotal = arealateral+2*areabase;
							cout << "El Area Total del Cilindro es de:" << areatotal << endl;
							cont = 4;
						} else {
							cout << "Valor no Permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 4:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos con la segunda formula el Area Total del Cilindro " << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es 2 * PI * Radio menor * (altura + Radio menor) " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Radio menor: ";
					cin >> radio_menor;
					if (radio_menor>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (radio_menor>0) {
						cout << "Ingrese el Valor a la Altura : ";
						cin >> altura;
						if (altura>0) {
							areatotal = 2*M_PI*radio_menor*(altura+radio_menor);
							cout << "El Area Total del Cilindro es de:" << areatotal << endl;
							cont = 4;
						} else {
							cout << "Valor no Permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 5:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Volumen del Cilindro ******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Area de la base * Altura" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Area de la base: ";
					cin >> areabase;
					if (areabase>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (areabase>0) {
						cout << "Ingrese el Valor a la Altura: ";
						cin >> altura;
						if (altura>0) {
							volumen = areabase*altura;
							cout << "El Volumen del Cilindro  es de:" << volumen << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 6:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos con la segunda formula el Volumen del Prisma " << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es PI * radio menor^2 por altura " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Radio menor: ";
					cin >> radio_menor;
					if (radio_menor>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (radio_menor>0) {
						cout << "Ingrese el Valor a la Altura : ";
						cin >> altura;
						if (altura>0) {
							volumen = M_PI*pow(radio_menor,2)*altura;
							cout << "El Volumen  del Cilindro es de:" << volumen << endl;
							cont = 4;
						} else {
							cout << "Valor no Permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 7:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Perimetro de la base  del Cilindro " << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es 2 * PI * Radio menor " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Radio menor: ";
					cin >> radio_menor;
					if (radio_menor>0) {
						perimetrobase = 2*M_PI*radio_menor;
						cout << "" << endl;
						cout << "El perimetro de la base del cilindro es de: " << perimetrobase << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				break;
			case 8:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Area de la base  del Cilindro " << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es  PI * Radio menor^2 " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Radio menor: ";
					cin >> radio_menor;
					if (radio_menor>0) {
						areabase = M_PI*pow(radio_menor,2);
						cout << "" << endl;
						cout << "El Area de la base del cilindro es de: " << areabase << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				break;
			default:
				cout << "Valor no Valido" << endl;
			}
			break;
		case 3: piramide:
			cout << "Hoy en este programa haremos distintos calculos de la Piramide" << endl;
			cout << "Piramide" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Area Lateral - 1" << endl;
			cout << "Area Total - 2" << endl;
			cout << "Volumen  - 3" << endl;
			cin >> x;
			switch (x) {
			case 1:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Area Lateral de la Piramide******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Perimetro de la base por el Apotema / 2" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Perimetro de la base: ";
					cin >> perimetrobase;
					if (perimetrobase>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (perimetrobase>0) {
						cout << "Ingrese el Valor al Apotema: ";
						cin >> apotemabase;
						if (apotemabase>0) {
							arealateral = perimetrobase*apotemabase/2;
							cout << "El Area Lateral de la Piramide es de  :" << arealateral << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 2:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Area Total de la Piramide  " << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Area lateral  +  Area de la base " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Area lateral: ";
					cin >> arealateral;
					if (arealateral>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (arealateral>0) {
						cout << "Ingrese el Valor al Area de la base : ";
						cin >> areabase;
						if (areabase>0) {
							areatotal = arealateral+areabase;
							cout << "El Area Total de la Piramide es de:" << areatotal << endl;
							cont = 4;
						} else {
							cout << "Valor no Permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 3:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Volumen del Prisma ******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Area de la base * Altura / 3" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Area de la base: ";
					cin >> areabase;
					if (areabase>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (areabase>0) {
						cout << "Ingrese el Valor a la Altura: ";
						cin >> altura;
						if (altura>0) {
							volumen = areabase*altura/3;
							cout << "El Volumen de la Piramide es de:" << volumen << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			default:
				cout << "Valor no Valido" << endl;
			}
			break;
		case 4: cono:
			cout << "Hoy en este programa haremos distintos calculos del Cono" << endl;
			cout << "Cono" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Area Lateral - 1" << endl;
			cout << "2 Area Lateral - 2" << endl;
			cout << "Area Total - 3" << endl;
			cout << "2 Area Total _ 4" << endl;
			cout << "Volumen  - 5" << endl;
			cout << "2 Volumen - 6" << endl;
			cin >> x;
			switch (x) {
			case 1:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Area Lateral del Cono******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Perimetro de la base * Generatriz / 2" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Perimetro de la base: ";
					cin >> perimetrobase;
					if (perimetrobase>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (perimetrobase>0) {
						cout << "Ingrese el Valor a la Generatriz: ";
						cin >> generatriz;
						if (generatriz>0) {
							arealateral = perimetrobase*generatriz/2;
							cout << "El Area Lateral del Cono es de :" << arealateral << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 2:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos con la segunda formula  el Area Lateral del Cono " << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es PI * Radio menor * generatriz  " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Radio menor: ";
					cin >> radio_menor;
					if (radio_menor>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (radio_menor>0) {
						cout << "Ingrese el Valor al Generatriz : ";
						cin >> generatriz;
						if (generatriz>0) {
							arealateral = M_PI*radio_menor*generatriz;
							cout << "El Area Lateral del Cono es de:" << arealateral << endl;
							cont = 4;
						} else {
							cout << "Valor no Permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 3:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos  el Area Total del Cono " << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Area lateral + el Area de la base " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Area lateral: ";
					cin >> arealateral;
					if (arealateral>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (arealateral>0) {
						cout << "Ingrese el Valor al Area de la base : ";
						cin >> areabase;
						if (areabase>0) {
							areatotal = arealateral+areabase;
							cout << "El Area Total del Cono es de:" << areatotal << endl;
							cont = 4;
						} else {
							cout << "Valor no Permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 4:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos con la segunda formula el Area Total del Cono " << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es PI* Radio menor *(Generatriz + Radio menor) " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Radio menor: ";
					cin >> radio_menor;
					if (radio_menor>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (radio_menor>0) {
						cout << "Ingrese el Valor al Generatriz : ";
						cin >> generatriz;
						if (generatriz>0) {
							areatotal = M_PI*radio_menor*(generatriz+radio_menor);
							cout << "El Area Total del Cono es de:" << areatotal << endl;
							cont = 4;
						} else {
							cout << "Valor no Permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 5:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Volumen del Cono ******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Area de la base * Altura / 3" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Area de la base: ";
					cin >> areabase;
					if (areabase>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (areabase>0) {
						cout << "Ingrese el Valor a la Altura: ";
						cin >> altura;
						if (altura>0) {
							volumen = areabase*altura/3;
							cout << "El Volumen del Cono es de:" << volumen << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 6:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos con la segunda formula el Volumen del Cono ******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es PI * Radio menor^2 * altura  / 3" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Radio menor: ";
					cin >> radio_menor;
					if (radio_menor>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (radio_menor>0) {
						cout << "Ingrese el Valor a la Altura: ";
						cin >> altura;
						if (altura>0) {
							volumen = M_PI*pow(radio_menor,2)*altura/3;
							cout << "El Volumen del Cono es de:" << volumen << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			default:
				cout << "Valor no Valido" << endl;
			}
			break;
		case 5: esfera2:
			cout << "Hoy en este programa haremos distintos calculos de la Esfera" << endl;
			cout << "Esfera" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Volumen de la esfera - 1" << endl;
			cout << "Area de la Esfera - 2" << endl;
			cout << "Volumen de la Esfera - 3" << endl;
			cout << "Zona Esferica con el Area - 4" << endl;
			cout << "Zona Esferica con el Volumen - 5" << endl;
			cout << "Casquete Esferico con el Area - 6" << endl;
			cout << "Casquete Esferico con el Volumen - 7" << endl;
			cin >> x;
			switch (x) {
			case 1:
				contador = 1;
				while (contador<=3) {
					cout << "*****Calculemos el valor el Volumen de la Esfera *****" << endl;
					cout << "" << endl;
					cout << "La formula para el Volumen del cilindro es 2/3 por el Volumen del Cilindro " << endl;
					cout << "" << endl;
					cout << "Ingrese el valor del Volumen del cilindro : ";
					cin >> volumen_cilindro;
					if (volumen_cilindro>0) {
						volumen_esfera = 2/3*(volumen_cilindro);
						cout << "El valor del Volumen de la Esfera es de: " << volumen_esfera << endl;
						cout << "" << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			case 2:
				contador = 1;
				while (contador<=3) {
					cout << "*****Calculemos el valor el Area  de la Esfera*****" << endl;
					cout << "" << endl;
					cout << "La formula a ultilizar es 4 por  PI por Radio menor elevado al Cuadrado " << endl;
					cout << "Ingrese el valor del Radio Menor : ";
					cin >> radio_menor;
					if (radio_menor>0) {
						area = 4*M_PI*pow(radio_menor,2);
						cout << "El Area de la Esfera es de: " << area << endl;
						cout << "" << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			case 3:
				contador = 1;
				while (contador<=3) {
					cout << "*****Calculemos el valor el Volumen de la Esfera *****" << endl;
					cout << "" << endl;
					cout << "La Formula a utilizar es 4/3 por PI por Radio menor elevado al Cubo " << endl;
					cout << "Ingrese el valor del Radio menor: ";
					cin >> radio_menor;
					if (radio_menor<0) {
						volumen = 1.333333333*M_PI*pow(radio_menor,3);
						cout << "El valor del volumen de la Esfera es de:" << volumen << endl;
						cout << "" << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			case 4:
				contador = 1;
				while (contador<=3) {
					cout << "*****Calculemos el valor de la Zona Esferica con el Area *****" << endl;
					cout << "La formula  a ultulizar es 2 por PI por Radio mayor por Altura" << endl;
					cout << "Ingrese el valor del Radio Mayor: ";
					cin >> radio_mayor;
					if (areabase>0) {
						cout << "" << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				contador = 1;
				while (contador<=3) {
					if ((radio_mayor>0)) {
						cout << "Ingrese el valor de la altura: ";
						cin >> altura;
						if (altura>0) {
							zona_esferica = 2*M_PI*radio_mayor*altura;
							cout << "La Zona Esferica con el Area es de: " << zona_esferica << endl;
							contador = 4;
						} else {
							cout << "Estos valores no son permitidos" << endl;
							contador = contador+1;
						}
					}
				}
				break;
			case 5:
				contador = 1;
				while (contador<3) {
					cout << "*****Calculemos la Zona Esferica con el Volumen *****" << endl;
					cout << "La formula a utilizar es Pi por Altura(Altura elevada al Cuadrado más 3 por Radio Menor Elevado al Cuadrado más 3 por Radio Menor elevado al Cuadrado) entre 6" << endl;
					cout << "Ingrese el valor de la Altura: ";
					cin >> altura;
					if (altura>0) {
						cout << "" << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				contador = 1;
				while (contador<3) {
					if (altura>0) {
						cout << "Ingrese el valor del Radio Menor: ";
						cin >> radio_menor;
						if (radio_menor>0) {
							zona_esferica = M_PI*altura*(pow(altura,2)+3*pow(radio_menor,2)+3*pow(altura,2))/6;
							cout << "La Zona Esferica con el Volumen es de : " << zona_esferica << endl;
							contador = 4;
						} else {
							cout << "Estos valores no son permitidos" << endl;
							contador = contador+1;
						}
					}
				}
				break;
			case 6:
				contador = 1;
				while (contador<3) {
					cout << "*****Calculemos el Casquete Esferico  con el Area *****" << endl;
					cout << "La formula a utilizar es 2 por PI por Radio Mayor por Altura" << endl;
					cout << "Ingrese el valor del Radio Mayor: ";
					cin >> radio_mayor;
					if (radio_mayor>0) {
						cout << "" << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				contador = 1;
				while (contador<3) {
					if (radio_mayor>0) {
						cout << "Ingrese el valor del Altura: ";
						cin >> altura;
						if (altura>0) {
							casquete_esferico = 2*M_PI*radio_mayor+altura;
							cout << "El Casquete Esferico con el Area es de : " << casquete_esferico << endl;
							contador = 4;
						} else {
							cout << "Estos valores no son permitidos" << endl;
							contador = contador+1;
						}
					}
				}
				break;
			case 7:
				contador = 1;
				while (contador<3) {
					cout << "*****Calculemos el Casquete Esferico con el Volumen *****" << endl;
					cout << "La formula a utilizar es PI por Altura elevada al Cuadrado (3 por Radio Mayor - Altura) / 3" << endl;
					cout << "Ingrese el valor de la Altura: ";
					cin >> altura;
					if (altura>0) {
						cout << "" << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				contador = 1;
				while (contador<3) {
					if (altura>0) {
						cout << "Ingrese el valor del Radio Mayor: ";
						cin >> radio_mayor;
						if (altura>0) {
							casquete_esferico = M_PI*pow(altura,2)*(3*radio_mayor-altura)/3;
							cout << "El Casquete Esferico con el Volumen  es de  : " << casquete_esferico << endl;
							contador = 4;
						} else {
							cout << "Estos valores no son permitidos" << endl;
							contador = contador+1;
						}
					}
				}
				break;
			default:
				cout << "Valor no Valido" << endl;
			}
			break;
		case 6: troncocono:
			cout << "Hoy en este programa haremos distintos calculos del Tronco del Cono" << endl;
			cout << "Tronco del Cono" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Area Lateral - 1" << endl;
			cout << "Area Total - 2" << endl;
			cout << "Volumen  - 3" << endl;
			cin >> x;
			switch (x) {
			case 1:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Area Lateral del Cono del Tronco ***** " << endl;
					cout << "" << endl;
					cout << "La formula a ultilizar es PI por Generatriz por (Radio Mayor + Radio Menor)  " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor de la Generatriz: ";
					cin >> generatriz;
					if (generatriz>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if ((generatriz>0)) {
						cout << "Ingrese el valor al Radio Mayor:";
						cin >> radio_mayor;
						if (radio_mayor>0) {
							cout << "" << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido" << endl;
							cont = cont+1;
						}
					}
				}
				cont = 1;
				while (cont<=3) {
					if (radio_mayor>0) {
						cout << "Ingrese el valor al Radio Menor: ";
						cin >> radio_menor;
						cout << "" << endl;
						if (radio_menor>0) {
							area_lateral = M_PI*generatriz*(radio_mayor+radio_menor);
							cout << " El Area Lateral del Tronco del Cono es de: " << area_lateral << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 2:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Area Total del Tronco del Cono *****" << endl;
					cout << "" << endl;
					cout << "La Formula  a utilzar es la suma del Area Lateral más Area de la Base Mayor más Area de la Base Menor " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Area Lateral: ";
					cin >> area_lateral;
					if (area_lateral>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if ((area_lateral>0)) {
						cout << "Ingrese el Valor del Area de la Base Mayor:";
						cin >> area_basemayor;
						if (area_basemayor>0) {
							cout << "" << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido" << endl;
							cont = cont+1;
						}
					}
				}
				cont = 1;
				while (cont<=3) {
					if (area_basemayor>0) {
						cout << "Ingrese el Valor del Area de la Base Menor: ";
						cin >> area_basemenor;
						if (area_basemenor>0) {
							area_total = area_lateral+area_basemayor+area_basemenor;
							cout << "El Area Total del Tronco del Cono es de: " << area_total << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido" << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 3:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Volumen del Cono del Tronco ***** " << endl;
					cout << "" << endl;
					cout << "La formula a ultilizar es 1/3 por PI por Altura por (Radio Mayor + Radio Menor Elevados al Cuadrado + Radio Mayor por Radio Menor  )  " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor de la Altura : ";
					cin >> altura;
					if (altura>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if ((altura>0)) {
						cout << "Ingrese el valor al Radio Mayor:";
						cin >> radio_mayor;
						if (radio_mayor>0) {
							cout << "" << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido" << endl;
							cont = cont+1;
						}
					}
				}
				cont = 1;
				while (cont<=3) {
					if (radio_mayor>0) {
						cout << "Ingrese el valor al Radio Menor: ";
						cin >> radio_menor;
						cout << "" << endl;
						if (radio_menor>0) {
							volumen = 0.3333333333333*M_PI*altura*(pow(radio_mayor,2)+pow(radio_menor,2)+radio_mayor*radio_menor);
							cout << " El Volumen  del Tronco del Cono es de: " << volumen << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			}
			break;
		case 7: troncopiramide:
			cout << "Hoy en este programa haremos distintos calculos del Tronco de la Piramde" << endl;
			cout << "Tronco de la Piramide" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Area Lateral - 1" << endl;
			cout << "Area Total - 2" << endl;
			cout << "Volumen  - 3" << endl;
			cin >> x;
			switch (x) {
			case 1:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Area Lateral del Cono de la Piramide ***** " << endl;
					cout << "" << endl;
					cout << "La formula a ultilizar es Perimetro de la Base Mayor + Perimetro de la Base Menor / 2 * El Apotema de la Piramide  " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor de la Perimetro de la Base Mayor: ";
					cin >> perimetro_basemayor;
					if (perimetro_basemayor>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if ((perimetro_basemayor>0)) {
						cout << "Ingrese el valor del Perimetro de la Base Menor:";
						cin >> perimetro_basemenor;
						if (perimetro_basemenor>0) {
							cout << "" << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido" << endl;
							cont = cont+1;
						}
					}
				}
				cont = 1;
				while (cont<=3) {
					if (perimetro_basemenor>0) {
						cout << "Ingrese el valor de la Apotema de la Piramide: ";
						cin >> apotemapiramide;
						cout << "" << endl;
						if (apotemapiramide>0) {
							area_lateral = perimetro_basemayor+perimetro_basemenor/2*apotemapiramide;
							cout << " El Area Lateral del Tronco de la Piramide es de  " << area_lateral << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 2:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Area Total del Tronco de la Piramide *****" << endl;
					cout << "" << endl;
					cout << "La Formula  a utilzar es la suma del Area Lateral más Area de la Base Mayor más Area de la Base Menor " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor al Area Lateral: ";
					cin >> area_lateral;
					if (area_lateral>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if ((area_lateral>0)) {
						cout << "Ingrese el Valor del Area de la Base Mayor:";
						cin >> area_basemayor;
						if (area_basemayor>0) {
							cout << "" << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido" << endl;
							cont = cont+1;
						}
					}
				}
				cont = 1;
				while (cont<=3) {
					if (area_basemayor>0) {
						cout << "Ingrese el Valor del Area de la Base Menor: ";
						cin >> area_basemenor;
						if (area_basemenor>0) {
							area_total = area_lateral+area_basemayor+area_basemenor;
							cout << "El Area Total del Tronco de la Piramide es de: " << area_total << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido" << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 3:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Volumen del Cono de la Piramide ***** " << endl;
					cout << "" << endl;
					cout << "La formula a ultilizar es 1/3 por PI por Altura por (Area de la Base Mayor + Area de la Base Menor + Raiz de Area Base Mayor por Area Base Menor )  " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor de la Altura : ";
					cin >> altura;
					if (altura>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if ((altura>0)) {
						cout << "Ingrese el valor del Area de la Base Mayor:";
						cin >> area_basemayor;
						if (area_basemayor>0) {
							cout << "" << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido" << endl;
							cont = cont+1;
						}
					}
				}
				cont = 1;
				while (cont<=3) {
					if (area_basemayor>0) {
						cout << "Ingrese el valor del Area de la Base Menor: ";
						cin >> area_basemenor;
						cout << "" << endl;
						if (area_basemenor>0) {
							volumen = 0.333333333*M_PI*altura*(area_basemayor+area_basemenor+sqrtf(area_basemayor+area_basemenor));
							cout << " El Volumen  del Tronco de la Piramide es de: " << volumen << endl;
							cont = 4;
						} else {
							cout << "Valor no permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			}
			break;
		case 8: esfero2:
			cout << "Hoy en este programa haremos distintos calculos En la Esfera" << endl;
			cout << "Esfera" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Huso Esferico - 1" << endl;
			cout << "Cuña Esferica - 2" << endl;
			cin >> x;
			switch (x) {
			case 1:
				contador = 1;
				while (contador<=3) {
					cout << "***** Calculemos el Area del  Valor del Huso Esferico  *****" << endl;
					cout << "La formula  a utilizar 4 por PI por Radio Menor elevado al Cuadrado por El Numero de Lados / 360 " << endl;
					cout << "Ingrese el valor del Radio Menor: ";
					cin >> radio_menor;
					if (radio_menor>0) {
						cout << "" << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				contador = 1;
				while (contador<=3) {
					if ((radio_menor>0)) {
						cout << "Ingrese el valor del Numero de lados ";
						cin >> num_lados;
						if (num_lados>0) {
							area = 4*M_PI*pow(radio_menor,2)*num_lados/360;
							cout << "El area del Huso Esferico es de: " << area << endl;
							contador = 4;
						} else {
							cout << "Estos valores no son permitidos" << endl;
							contador = contador+1;
						}
					}
				}
				break;
			case 2:
				contador = 1;
				while (contador<=3) {
					cout << "***** Calculemos el Volumen de la Cuña Esferica *****" << endl;
					cout << "La formula  a utilizar es 4/3 por PI por Radio Menor elevado al Cubo por El Numero de Lados / 360 " << endl;
					cout << "Ingrese el valor del Radio Menor: ";
					cin >> radio_menor;
					if (radio_menor>0) {
						cout << "" << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				contador = 1;
				while (contador<=3) {
					if ((radio_menor>0)) {
						cout << "Ingrese el valor del Numero de lados ";
						cin >> num_lados;
						if (num_lados>0) {
							volumen = 1.333333333*(M_PI*pow(radio_menor,3)*num_lados/360);
							cout << "El Volumen de la Cuña Esferica  es de: " << volumen << endl;
							contador = 4;
						} else {
							cout << "Estos valores no son permitidos" << endl;
							contador = contador+1;
						}
					}
				}
				break;
			default:
				cout << "Valor no valido" << endl;
			}
			break;
		case 9: ortoedro:
			cout << "Hoy en este programa haremos distintos calculos del Ortoedro" << endl;
			cout << "Ortoedro" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Area  - 1" << endl;
			cout << "Diagonal - 2" << endl;
			cout << "Volumen  - 3" << endl;
			cin >> x;
			switch (x) {
			case 1:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Area del Ortoedro ******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es 2 por VarA por VarB más VarA por VarB + VarB por VarC" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor a VarA: ";
					cin >> vara;
					if (vara>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (vara>0) {
						cout << "Ingrese el Valor a VarB: ";
						cin >> varb;
						if (varb>0) {
							cout << "" << endl;
							cont = 4;
						} else {
							cout << "Valor no Permitido" << endl;
							cont = cont+1;
						}
					}
				}
				cont = 1;
				while (cont<=3) {
					if (varb>0) {
						cout << "Ingrese el Valor a VarC: ";
						cin >> varc;
						if (varc>0) {
							area = 2*(vara*varb+vara*varc+varb*varc);
							cout << "El Area del Ortoedro es de:" << area << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 2:
				cont = 1;
				while (cont<=3) {
					cout << "***** Calcularemos el Diagonal del Ortoedro " << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Raiz cudrad de VarA más VarB más VarC elevadas al cuadrado " << endl;
					cout << "" << endl;
					cout << "Ingrese ek Valor a VarA: ";
					cin >> vara;
					if (vara>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (vara>0) {
						cout << "Ingrese el Valor a VarB:";
						cin >> varb;
						if (varb>0) {
							cont = 4;
						} else {
							cout << " Valor no Permitido" << endl;
							cont = cont+1;
						}
					}
				}
				cont = 1;
				while (cont<=3) {
					if (varb>0) {
						cout << "Ingrese el Valor a VarC: ";
						cin >> varc;
						if (varc>0) {
							diagonal = sqrtf(pow(vara,2)+pow(varb,2)+pow(varc,2));
							cout << "El Diagonal del Ortoedro es de:" << diagonal << endl;
							cont = 4;
						} else {
							cout << "Valor no Permitido " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			case 3:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Volumen del Ortoedro ******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es VarA por VarB por VarC" << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor a VarA: ";
					cin >> vara;
					if (vara>0) {
						cout << "" << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				cont = 1;
				while (cont<=3) {
					if (vara>0) {
						cout << "Ingrese el Valor a VarB: ";
						cin >> varb;
						if (varb>0) {
							cout << "" << endl;
							cont = 4;
						} else {
							cout << "Valor no Permitido" << endl;
							cont = cont+1;
						}
					}
				}
				cont = 1;
				while (cont<=3) {
					if (varb>0) {
						cout << "Ingrese el Valor a VarC: ";
						cin >> varc;
						if (varc>0) {
							volumen = vara*varb*varc;
							cout << "El Volumen del Ortoedro es de:" << volumen << endl;
							cont = 4;
						} else {
							cout << " Valor no Permitidos " << endl;
							cont = cont+1;
						}
					}
				}
				break;
			default:
				cout << "Valor no Valido" << endl;
			}
			break;
		case 10: tetraedro:
			cout << "Hoy en este programa haremos distintos calculos del Tetraedro" << endl;
			cout << "Tetraedro" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Area  - 1" << endl;
			cout << "Volumen - 2" << endl;
			cout << "Altura  - 3" << endl;
			cin >> x;
			switch (x) {
			case 1:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Area del Tetraedro ******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Arista elevado al cuadrado por Raiz de 3 " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor de la Arista: ";
					cin >> arista;
					if (arista>0) {
						area = pow(arista,2)*sqrtf(3);
						cout << "El area del Tetrahedro es de:" << area << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				break;
			case 2:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos el Volumen  del Tetraedro ******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Raiz de 2 / 12 por el Arista elevado al Cubo " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor de la Arista: ";
					cin >> arista;
					if (arista>0) {
						volumen = 0.1178511302*pow(arista,3);
						cout << "El Volumen del Tetrahedro es de:" << volumen << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				break;
			case 3:
				cont = 1;
				while (cont<=3) {
					cout << "****** Calcularemos la Altura del Tetraedro ******" << endl;
					cout << "" << endl;
					cout << "La formula a utilizar es Arista por Raiz de 6/3 " << endl;
					cout << "" << endl;
					cout << "Ingrese el Valor de la Arista: ";
					cin >> arista;
					if (arista>0) {
						altura = arista*sqrtf(6)/3;
						cout << "La Altura  del Tetrahedro es de:" << altura << endl;
						cont = 4;
					} else {
						cout << "Valor no Permitido" << endl;
						cont = cont+1;
					}
				}
				break;
			}
			break;
		case 11: hexaedro:
			cout << "Hoy en este programa haremos distintos calculos en el Hexaedro" << endl;
			cout << "Hexaesdro" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Area - 1" << endl;
			cout << "Volumen - 2" << endl;
			cout << "Diagonal - 3" << endl;
			cin >> x;
			switch (x) {
			case 1:
				contador = 1;
				while (contador<=3) {
					cout << "***** Calculemos el Area del Hexaedro   *****" << endl;
					cout << "La formula  a utilizar 6 * Arista Elevado al Cuadrado " << endl;
					cout << "Ingrese el valor de la Arista: ";
					cin >> arista;
					if (arista>0) {
						area = 6*pow(arista,2);
						cout << "El Area del Hexaedro es de: " << area << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			case 2:
				contador = 1;
				while (contador<=3) {
					cout << "***** Calculemos el Volumen del Hexaedro  *****" << endl;
					cout << "La formula  a utilizar es Arista al cubo " << endl;
					cout << "Ingrese el valor de la Arista: ";
					cin >> arista;
					if (arista>0) {
						volumen = pow(arista,3);
						cout << "El volumen del Hexaedro es de: " << volumen << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			case 3:
				contador = 1;
				while (contador<=3) {
					cout << "***** Calculemos el Diagonal del Hexaedro  *****" << endl;
					cout << "La formula  a utilizar es Arista por Raiz de 3 " << endl;
					cout << "Ingrese el valor de la Arista: ";
					cin >> arista;
					if (arista>0) {
						volumen = arista*sqrtf(3);
						cout << "El Diagonal del Hexaedro es de: " << volumen << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			default:
				cout << "Valor no valido" << endl;
			}
			break;
		case 12: octaedro:
			cout << "Hoy en este programa haremos distintos calculos en el Octaedro" << endl;
			cout << "Esfera" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Area - 1" << endl;
			cout << "Volumen - 2" << endl;
			cin >> x;
			switch (x) {
			case 1:
				contador = 1;
				while (contador<=3) {
					cout << "***** Calculemos el Area del Octaedro  *****" << endl;
					cout << "La formula  a utilizar 2 * Arsita elevado al cuadrado * Raiz de 3 " << endl;
					cout << "Ingrese el valor del Arista : ";
					cin >> arista;
					if (arista>0) {
						area = 2*pow(arista,2)*sqrtf(3);
						cout << "El Area del Hexaedro es de: " << area << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			case 2:
				contador = 1;
				while (contador<=3) {
					cout << "***** Calculemos el Volumen del Octaedro *****" << endl;
					cout << "La formula  a utilizar es Raiz de 2/3 * Arista elevada al cubo " << endl;
					cout << "Ingrese el valor del Arista: ";
					cin >> arista;
					if (arista>0) {
						volumen = sqrtf(2)/3*pow(arista,3);
						cout << "EL volumen del Arista es de:" << volumen << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			default:
				cout << "Valor no valido" << endl;
			}
			break;
		case 13: dodecaedro:
			cout << "Hoy en este programa haremos distintos calculos en el Dodecaedro" << endl;
			cout << "Dodecaedro" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Area - 1" << endl;
			cout << "Volumen - 2" << endl;
			cin >> x;
			switch (x) {
			case 1:
				contador = 1;
				while (contador<=3) {
					cout << "***** Calculemos el Area del Dodecaedro   *****" << endl;
					cout << "La formula  a utilizar3 * Arista elevada al cuadrado por Raiz de 25 + 10 * Raiz de 5  " << endl;
					cout << "Ingrese el valor de la Arista : ";
					cin >> arista;
					if (arista>0) {
						area = 3*pow(arista,2)*sqrtf(25+10*sqrtf(5));
						cout << "El Area del Dodecaedro  es de: " << area << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			case 2:
				contador = 1;
				while (contador<=3) {
					cout << "***** Calculemos el Volumen del Dodecaedro   *****" << endl;
					cout << "La formula  a utilizar es 1/4 * (15  +7 * Raiz de 5) * Arista elevado al cubo" << endl;
					cout << "Ingrese el valor de la Arista: ";
					cin >> arista;
					if (arista>0) {
						volumen = 0.25*(15+7*sqrtf(5))*pow(arista,3);
						cout << "El volumen del Dodecaedro es de: " << volumen << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			default:
				cout << "Valor no Valido" << endl;
			}
			break;
		case 14: icosaedro:
			cout << "Hoy en este programa haremos distintos calculos en el Icosaesdro" << endl;
			cout << "Icosaedro" << endl;
			cout << "Que desea calcular " << endl;
			cout << "Area - 1" << endl;
			cout << "Volumen - 2" << endl;
			cin >> x;
			switch (x) {
			case 1:
				contador = 1;
				while (contador<=3) {
					cout << "***** Calculemos el Area del Icosaedro *****" << endl;
					cout << "La formula  a utilizar  5 * Arista elevado al cuadrado  * Raiz de 3  " << endl;
					cout << "Ingrese el valor de la Arista : ";
					cin >> arista;
					if (arista>0) {
						area = 5*pow(arista,2)*sqrtf(3);
						cout << "El Area del Icosaedro  es de: " << area << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			case 2:
				contador = 1;
				while (contador<=3) {
					cout << "***** Calculemos el Volumen del Icosaedro    *****" << endl;
					cout << "La formula  a utilizar es 5 / 12 * (3 + Raiz de 5 ) * Arista al cubo" << endl;
					cout << "Ingrese el valor de la Arista: ";
					cin >> arista;
					if (arista>0) {
						volumen = 0.4166666667*(3+sqrtf(5))*pow(arista,3);
						cout << "El volumen del Icosaedro  es de: " << volumen << endl;
						contador = 4;
					} else {
						cout << "Estos valores no son permitidos" << endl;
						contador = contador+1;
					}
				}
				break;
			default:
				cout << "Valor no Valido" << endl;
			}
			if (x>12 || x<1) {
				cout << "Numero equivocado" << endl;
			}
			break;
		}
		if (x>14 || x<1) {
			cout << "Numero equivocado" << endl;
		}
		cin.get(); // a diferencia del pseudocódigo, espera un Enter, no cualquier tecla
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	} while (x=15);
	cout << "Fin del programa" << endl;
	return 0;
}

