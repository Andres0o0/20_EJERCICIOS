#include <iostream>
#include <conio.h>
#define tiempo 10
#include <windows.h>

using namespace std;

void gotoxy(int x,int y)
 {  
      HANDLE Pantalla;  
      Pantalla = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD coordenadas;  
       coordenadas.X = x;
       coordenadas.Y = y;
    SetConsoleCursorPosition(Pantalla,coordenadas);
 } 
 
void graficaMulti(){
	int x=30;
	int y=10;
	int multiplicando,multiplicador,resultado;
	 int producto;
	cout<<"INGRESE EL VALOR A MULTIPLICAR: ";
	cin>>multiplicando;
	cout<<"INGRESE EL VALOR MULTIPLICADOR: ";
	cin>>multiplicador;
 resultado=multiplicador*multiplicando;
 	cout<<"LA FORMA GRAFICA DE LA MULTIPLICACION ES: \n";
 	gotoxy(x,7);
cout<<" "<<multiplicando;
gotoxy(x,8);
cout<<"X "<<multiplicador;
gotoxy(25,9);
cout<<"_________________";


while(multiplicador!=0){
	gotoxy(x,y);
producto  = multiplicador % 10;
multiplicador /= 10;
cout<<producto*multiplicando<<"\n";
x--;
y++;
}
gotoxy(25,y);
cout<<"_______________";
y++;
gotoxy(x+1,y);
cout<<resultado;
}


void wasd(){
 	int x=50,y=20;
 	char opcion;
 	while (opcion!='z'){
 		system("cls");
 		gotoxy(x,y);
 		cout<<"o";
 		opcion=getch();
 		switch(opcion){
 			case 'w':y--;
 			break;
 			case 'a':x--;
 			break;
 			case 's':y++;
 			break;
 			case 'd':x++;
		 }
	 }
 }
 
 char frase[12]="\20WINDOWSxp\21";

 void secuencia(){
 	int tiempoV=tiempo/12;
 	int x1=0;
 	int y1=0;
 	for(int i=0;i<=5;i++){
  for(y1=0;y1<=27;y1++){
  	for(x1=91;x1>=1;x1=x1-13){
  		 gotoxy(x1,y1);
	     cout<<frase;	 
	  Sleep (tiempo);
	  }
  }
  for(y1=27;y1>=0;y1--){
  	for(x1=3;x1<=101;x1++){
  		gotoxy(x1,y1);
	     cout<<" ";	 
	  Sleep (tiempoV);
	  }
  }
}
}
