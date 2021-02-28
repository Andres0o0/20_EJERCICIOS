#include <iostream>
#include "ejercicio1.cpp"
#include "ejercicio2.cpp"
#include "ejercicio3.cpp"
#include "ejercicio4.cpp"
#include "ejercicio5.cpp"
#include "ejercicio6.cpp"
#include "ejercicio7.cpp"
#include "ejercicio8.cpp"
#include "ejercicio9.cpp"
#include "ejercicio11.cpp"
#include "ejercicio12.cpp"
#include "ejercicio13.cpp"
#include "ejercicio15.cpp"
#include "ejercicio16.cpp"
#include "ejercicio17.cpp"
#include "ejercicio18.cpp"
#include "ejercicio19.cpp"
#include "ejercicios10_14_20.cpp"

using namespace std;
int menu(int &opcion);

main(){
int opcion;
char sino;
menu(opcion);

cout<<"\n DESEA PROBAR OTRO PROGRAMA?? (s/n): ";
cin>>sino;
if(sino=='s' || sino=='S'){
    main();
}
else{
	if(sino=='n'||sino=='N'){
		return 0;
	}
	else{
		cout<<"INFORMACION INVALIDA, ADIOS :D ";
	}
}
}


int menu( int &opcion){
	do{
system("cls");
cout<<"  ----------------------------------------BIENVENIDO----------------------------------------\n\n";
cout<<"                              ¿QUE PROGRAMA DESEAS EJECUTAR?\n\n";
cout<<"  Suma, Resta, Multiplicacion y Division de dos numeros                            \t[ 1]\n";
cout<<"  Determinar si un numero es par o impar                                          \t[ 2]\n";
cout<<"  Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa\t[ 3]\n";
cout<<"  Determinar si una palabra o un numero es palindromo.                            \t[ 4]\n";
cout<<"  Conversion de numeros arabigos a romanos (mínimo 1,000)                         \t[ 5]\n";
cout<<"  Conversion de numeros enteros a letras                                          \t[ 6]\n";
cout<<"  Conversion de numeros enteros con decimal a letras                               \t[ 7]\n";
cout<<"  Una tabla de multiplicar                                                         \t[ 8]\n";
cout<<"  Todas las tablas de multiplicar del 1 al 10                                       \t[ 9]\n";
cout<<"  Forma grafica la multiplicacion manual                                           \t[10]\n";
cout<<"  Conversion de números decimales a binario                                        \t[11]\n";
cout<<"  Conversion de números decimales a hexadecimales                                 \t[12]\n";
cout<<"  Figuras Geometricas Basicas.                                                    \t[13]\n";
cout<<"  Mover un punto en toda la pantalla con teclas(W,A,S,D) [CERRAR PROGRAMA MANUALMENTE]\t[14]\n";
cout<<"  Simulación de un Cajero                                                         \t[15]\n";
cout<<"  Calcular la hipotenusa                                                           \t[16]\n";
cout<<"  Saber su signo Zodiacal                                                           \t[17]\n";
cout<<"  Saber el area de un rectangulo                                                    \t[18]\n";
cout<<"  Formulas para Movimiento rectilineo uniforme                                       \t[19]\n";
cout<<"  Secuencia de una palabra usando Gotoxy  [10 SEGUNDOS]                              \t[20]\n";
cout<<" SALIR                                                                                \t[21]\n";
cout<<"\n\n ingrese opcion: [     ]\b\b\b\b";
cin>>opcion;
}while(opcion>21||opcion<1);
system("cls");
switch(opcion){
	case 1:
		operaciones_mate();
		break;
	case 2:
		pares();
		break;
	case 3:
		conversiones();
		break;
	case 4:
		palindromo();
		break;
	case 5:
		romanos();
		break;
	case 6:
		numerosLetras();
		break;
	case 7:
		decimalesletras();
		break;
	case 8:
		tabla();
		break;
	case 9:
		tablas();
		break;
	case 10:
		graficaMulti();
		break;
	case 11:
		binario();
		break;
	case 12:
		hexadecimal();
		break;
	case 13:
		figuras();
		break;
	case 14:
		wasd();
		break;
	case 15:
		cajero();
		break;
	case 16:
		pitagoras();
		break;
	case 17:
		signos();
		break;
	case 18:
		rectangulo();
		break;
	case 19:
		MRU();
		break;
	case 20:
		secuencia();
		break;
	case 21:
		exit(0);
		break;

}
return opcion;
}

