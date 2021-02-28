# include <iostream>
using namespace std;
 
 
double saldo(double total)
{
    cout<<endl;
    if (total==0)
        cout<<"Ud. no tiene saldo en su cuenta"<<endl<<endl;
    else
        cout<<"Su saldo es de: "<<total<<endl;
    return total;
}
 
double deposito(double total)
{
    double dep=0;
    cout<<endl;
    do
    {
        cout<<"Ingrese la cantidad que desea depositar: ";
        cin>>dep;
        if(dep>0)
            {
                total=total+dep;
                cout<<"Su nuevo saldo es de: "<<total<<endl;
            }
        else
            cout<<"Ingrese una cantidad valida"<<endl<<endl;
    }while (dep<=0);
    return total;
}
 
double retiro(double total)
{
    double ret=0;
    cout<<endl;
    if(total==0)
        cout<<"No tienes fondos para retirar :( n/";
    else
    do
    {
        cout<<"Ingrese la cantidad que desea retirar: ";
        cin>>ret;
        if(ret>0)
            {
                total=total-ret;
                cout<<"Su nuevo saldo es de: "<<total<<endl;
            }
        else
            cout<<"Ingrese una cantidad valida"<<endl<<endl;
    }while (ret<=0);
    return total;
}
 
int menu(double total)
{
	system("cls");
    int opcion;
    cout<<"               MENU DEL CAJERO \n";
    cout<<"*********************************************\n";
    cout<<"Depositar dinero  \t\t\t [1]\n";
    cout<<"Retirar dinero    \t\t\t [2]\n";
    cout<<"Consulta de saldo \t\t\t [3]\n";
    cout<<endl<<"Elija la transaccion que desea realizar: [ ]\b\b";
    cin>>opcion;
    return opcion;
}
 
double proceso(int opcion,double total) 
{
    switch (opcion)
    {
        case 1:total=deposito(total);break;
        case 2:total=retiro(total);break;
        case 3:total=saldo(total);break;
        default: {
                    cout<<"Ingrese un valor correcto"<<endl;
                    menu(total);
                 }
    }
    return total;
}
 
void cajero()
{
    double total=0;
    int opcion, a;
    char c;
    do
    {
        opcion=menu(total);
        total=proceso(opcion,total);
        do
        {
        cout<<endl;
        cout<<"Desea realizar alguna otra transaccion (S)(N): ";
        cin>>c;
        a=0;
        switch(c)
        {
            case 's':
            case 'S':a=2;break;
            case 'n':
            case 'N':break;
            default: cout<<endl<<"Ingrese un valor correcto"<<endl;a=1;
        } 
        } while (a==1);
    } while (a==2);
}
