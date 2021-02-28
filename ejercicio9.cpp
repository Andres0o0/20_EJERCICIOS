#include <iostream>
using namespace std;


void tablas(){
cout<<"TABLAS DE MULTIPLICAR DEL 1 AL 10";
for (int tabla=1;tabla<=10;tabla++){
for (int i=0;i<=10;i++){
	cout<<"\n\t"<<tabla<<" * "<<i<<" = "<<tabla*i;
}
cout<<"\n________________________________________\n";
}

}
