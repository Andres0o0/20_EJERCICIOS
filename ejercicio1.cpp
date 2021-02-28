#include <iostream>
using namespace std;

void operaciones_mate(){
float valor1,valor2,resultado;
int opcion;
cout<<"\t INGRESE 2 valores a operar:\n a= ";
cin>>valor1;
cout<<"\n b=: ";
cin>>valor2;
cout<<"\t SELECCIONE UNA OPCION:\n [1]\tSUMAR \n [2]\tRESTAR(a-b) \n [3]\tMULTIPLICAR \n [4]\tDIVIDIR(a entre b) \n\t-->[ ]\b\b";
cin>>opcion;
switch (opcion){
	case 1:
		resultado=valor1+valor2;
		break;
	case 2:
		resultado=valor1+valor2;
		break;
	case 3:
		resultado=valor1*valor2;
		break;
	case 4:
		resultado=valor1/valor2;
		break;

}
cout<<"\n\n\tEL RESULTADO ES: "<<resultado;
}

