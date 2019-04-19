//Ej18 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	int posi; //posicion del equipo
	
	//logica


	printf("Ingrese la posicion del equipo en la tabla: ");
	cin >> posi;

	if (posi >= 1 && posi <= 4)
	{
		cout << "El equipo seleccionado ira al mundial !!!!";
	}
	else
	{
		if (posi == 5)
		{
			cout << "El equipo seleccionado va al repechaje";
		}
		else 
		{
			if (posi > 5)
			{
				cout << "Comprate una TV LED para ver el mundial !!!";
			}
		}
	}


	_getch();
}