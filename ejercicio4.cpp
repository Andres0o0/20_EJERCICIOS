#include <iostream>
using namespace std;

void palindromo() {
 string dato;
 cout<<"INGRESE UNA PALABRA O NUMERO PARA DETERMINAR SI ES PALINDROMO\n\t-----> ";
 cin >> dato;
 int i=0;
 int j = dato.length() - 1;
 int mitad = j / 2;
while(dato[i] == dato[j]){
  if(mitad == i){
   cout << "\n\t\tEs palindromo";
   break;
  }
 j--;
 i++;
 }
 if(mitad != i)
 cout << "\n\t\tNo es palindromo";

}
