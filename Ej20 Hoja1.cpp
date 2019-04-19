//Ej20 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	int credi; //creditos

	//logica


	printf("Ingrese la cantidad de creditos acumulados: ");
	cin >> credi;

	if (credi < 0)
	{
		cout << "No existe una cantidad de creditos negativa, ingrese un cantidad de creditos mayor o igual a 0";
	}
	if (credi >= 0 && credi<32)
	{
		cout << "El alumno se encuentra en el PRIMER ANIO";
	}
	else
	{
		if (credi >= 32 && credi <= 63)
		{
			cout << "El alumno se encuentra en el SEGUNDO ANIO";
		}
		else
		{
			if (credi >= 64 && credi <=95 )
			{
				cout << "El alumno se encuentra en el TERCER ANIO";
			}
			else
			{
				if (credi >95)
				{
					cout << "El alumno se encuentra en el CUARTO ANIO";
				}
			}
		}
	}


	_getch();
}