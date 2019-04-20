//Ej4 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//Entrada

	int años;
	int precio;

	//Logica

	printf("Ingrese la edad de la persona: ");
	cin >> años;

	if (años < 18 && años>=0)// los de 0 años son aquellos que solo poseen meses de nacidos y aun no cumplen 1 año
	{
		precio = 7;
		cout << "El precio de la entrada es de " << precio << " soles.";//salida
	}
	else
	{
		if (años >= 18 && años <= 50)
		{
			precio = 15;
			cout << "El precio de la entrada es de " << precio << " soles.";//salida
		}
		if (años>50)
		{
			precio = 5;
			cout << "El precio de la entrada es de " << precio << " soles.";//salida
		}
	}
	if (años < 0)
	{
		cout << "ERROR! \n";
		cout << "Reingrese la edad";//salida
	}

	
	_getch();

}