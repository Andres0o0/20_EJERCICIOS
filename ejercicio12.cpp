#include<iostream>
using namespace std;

void hexadecimal ()
{
    int numero, temp, i = 1, j, r;
    char hex[50];
    cout << "INGRESE UN NUMERO PARA CONVERTIR EN HEXADECIMAL: \t";
    cin >> numero;
    temp = numero;
    while (temp != 0)
    {
        r = temp % 16;
        if (r < 10)
            hex[i++] = r + 48;
        else
            hex[i++] = r + 55;
        temp = temp / 16;
    }
    for (j = i; j > 0; j--)
        cout<<hex[j];
}
