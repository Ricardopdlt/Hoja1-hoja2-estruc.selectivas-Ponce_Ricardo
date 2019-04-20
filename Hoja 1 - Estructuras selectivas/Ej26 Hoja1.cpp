//Ej26 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int main()
{
	//entrada

	int edad;
	int precio = 15;
	float precion; //precio nuevo con descuento

	//logica

	printf("Ingrese la edad del espectador: ");
	cin >> edad;

	if (edad < 5)
	{
		cout << "No puede ingresar al Teatro. Debe tener 5 o mas anios";
	}
	else
	{
		if (edad >= 5 && edad <= 14)
		{
			precion = precio * 0.65;
			cout << "El tipo de la entrada es ''Entrada 1'' y el costo es de $" << precion;
		}
		else
		{
			if (edad >= 15 && edad <= 19)
			{
				precion = precio * 0.75;
				cout << "El tipo de la entrada es ''Entrada 2'' y el costo es de $" << precion;
			}
			else
			{
				if (edad >= 20 && edad <= 45)
				{
					precion = precio * 0.90;
					cout << "El tipo de la entrada es ''Entrada 3'' y el costo es de $" << precion;
				}
				else
				{
					if (edad >= 46 && edad <= 65)
					{
						precion = precio * 0.78;
						cout << "El tipo de la entrada es ''Entrada 4'' y el costo es de $" << precion;
					}
					else
					{
						if (edad >= 66)
						{
							precion = precio * 0.50;
							cout << "El tipo de la entrada es ''Entrada 5'' y el costo es de $" << precion;
						}
					}
				}
			}
		}
	}


	_getch();
}