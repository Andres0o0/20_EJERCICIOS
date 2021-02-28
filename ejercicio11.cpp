#include <iostream>
using namespace std;
void binario() 
{ 
int i=0;
int numero,n2=0; 
int binario[50]; 
binario[0]=0; 
 
cout<<"INGRESA EL NUMERO A CONVERTIR EN BINARIO:\t";
cin>>numero; 

for ( i=0;i<50;i++) { 
binario[i]=numero%2; 
numero=numero/2; 
if(numero==0) 
break; 
} 
cout<<"\n\t\t";
for(int j=i;j>=0;j--) { 
cout<<binario[j];
} 
} 
