
#include <iostream>
using namespace std;
int main(void)
{
int i, a[4], suma;
float promedio;
cout << endl;
cout << "Porfavor, ingrese 4 numeros enteros: " << endl << endl;
cout << "Digite cuatro enteros: ";
for(i = 0; i < 4; i++)
cin >> a[i];
suma = 0;
for(i = 0; i < 8; i++)
suma = suma + a[i];
promedio = 1.0* suma/4;
cout << "El promedio de los elementos de arreglo es: " << promedio << endl;
cout << endl;
return 0;
}