#include<iostream>
using namespace std;
void MRU(){
    float v,d,t;
    int opcion;
    cout<<"PROGRAMA PARA HALLAR DATOS DE MOVIMIENTO RECTILINEO UNIFORME EN SI\n";
    cout<<"[1]\tvelocidad \n";
    cout<<"[2]\tdistancia \n";
    cout<<"[3]\ttiempo \n";
    cout<<"que desea calcular : ";
	cin>>opcion;
    switch(opcion){
     case 1:{
      cout<<"ingrese la distancia(m): ";cin>>d;
      cout<<"ingrese el tiempo(s): ";cin>>t;
      cout<<"la velocidad del movil es: "<<d/t<<"m/s";
   break;
  }
  case 2:{
   cout<<"ingrese la velocidad del movil(m/s): ";cin>>v;
   cout<<"ingrese el tiempo(s) : ";cin>>t;
   cout<<"la distancia recorrida en "<<t<<"segundos es:"<<v*t;
   break;
  }
  case 3:{
   cout<<"ingrese la velocidad(m/s) :";cin>>v;
   cout<<"ingrese la distancia:(m)";cin>>d;
   cout<<"el tiempo es de: "<<d/v<<"s";
   break;
  }
 }
}
