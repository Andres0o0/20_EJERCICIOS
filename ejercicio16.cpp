#include <iostream>
#include<math.h>
using namespace std;

void pitagoras(){
float a,b,c;
cout<<"SISTEMA PARA CALCULAR LA HIPOTENUSA DE UN TRIANGULO RECTANGULO\nINGRESE EL VALOR DEL LADO a: ";
cin>>a;
cout<<"INGRESE EL VALOR DEL LADO b: ";
cin>>b;
c=sqrt(a*a+b*b);
cout<<"LA HIPOTENUSA ES: "<<c;

cout<<"\n\n\n               /|";
cout<<"\n              / |\b\b\b\b\b\b\b\b\b\b"<<c;
cout<<"\n             /  |"<<a;
cout<<"\n            /___|\n";
cout<<"             "<<b;
}
