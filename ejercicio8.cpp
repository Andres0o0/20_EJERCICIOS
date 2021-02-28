#include <iostream>
using namespace std;

void tabla(){
	int tabla;
cout<<"INGRESE LA TABLA QUE DESEA VER: ";
cin>>tabla;
for (int i=0;i<=10;i++){
	cout<<"\n\t"<<tabla<<" * "<<i<<" = "<<tabla*i;
}
}
