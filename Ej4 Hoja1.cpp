//Ej4 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//Entrada

	int a�os;
	int precio;

	//Logica

	printf("Ingrese la edad de la persona: ");
	cin >> a�os;

	if (a�os < 18 && a�os>=0)// los de 0 a�os son aquellos que solo poseen meses de nacidos y aun no cumplen 1 a�o
	{
		precio = 7;
		cout << "El precio de la entrada es de " << precio << " soles.";//salida
	}
	else
	{
		if (a�os >= 18 && a�os <= 50)
		{
			precio = 15;
			cout << "El precio de la entrada es de " << precio << " soles.";//salida
		}
		if (a�os>50)
		{
			precio = 5;
			cout << "El precio de la entrada es de " << precio << " soles.";//salida
		}
	}
	if (a�os < 0)
	{
		cout << "ERROR! \n";
		cout << "Reingrese la edad";//salida
	}

	
	_getch();

}