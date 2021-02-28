#include <iostream>
#define KmMilla 0.62137
#define mPulg 39.3701
#define lbKg 0.453592
using namespace std;

void conversiones(){
	float valor,resultado;
	int opcion;
	cout<<"\t ¿QUE CONVERSION DESEA HACER?\n [1]\tKilometro a Milla \n [2]\tMilla a Kilometro \n [3]\tMetro a pulgada \n [4]\tPulgada a metros \n [5]\tLibra a Kilogramo \n [6]\tKilogramo a Libra \n\t\t [ ]\b\b";
	cin>>opcion;
cout<<"\tINGRESE LA CANTIDAD: \n";
	cin>>valor;
	cout<<"EL RESULTADO ES: ";
	switch(opcion){
	case 1:
		resultado=valor*KmMilla;
		cout<<resultado<<" Millas";
		break;
	case 2:
		resultado=valor/KmMilla;
		cout<<resultado<<" Km";
		break;
	case 3:
		resultado=valor*mPulg;
		cout<<resultado<<" Plg";
		break;
	case 4:
		resultado=valor/mPulg;
		cout<<resultado<<" m";
		break;
	case 5:
		resultado=valor*lbKg;
		cout<<resultado<<" Kg";
		break;
	case 6:
		resultado=valor/lbKg;
		cout<<resultado<<" lb";
		break;
	default:
		break;
		}
}
