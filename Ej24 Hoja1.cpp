//Ej23 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int main()
{
	int compu;
	int precio = 760; // precio de una computadora
	float desc; //descuento
	int costo1; // sin descuento
	float costo2; // con descuento

	printf("Ingrese el numero de computadoras a comprar: ");
	cin >> compu;

	if (compu < 0)
	{
		cout << "Ingrese un numero mayor a 0";
	}

	else
	{
		if (compu == 0)
		{
			cout << "No pagara";
		}

		else
		{
			if (compu > 0 && compu < 5)
			{
				costo1 = compu * precio;
				desc = costo1 * 0.1;
				costo2 = costo1 - desc;

				cout << "El costo es de $" << costo1 << " y el total aplicando el descuento de $" << desc << " es de $" << costo2;
			}
			else
			{
				if (compu >= 5 && compu < 10)
				{
					costo1 = compu * precio;
					desc = costo1 * 0.2;
					costo2 = costo1 - desc;

					cout << "El costo es de $" << costo1 << " y el total aplicando el descuento de $" << desc << " es de $" << costo2;
				}
				else
				{
					if (compu >= 10)
					{
						costo1 = compu * precio;
						desc = costo1 * 0.4;
						costo2 = costo1 - desc;

						cout << "El costo es de $" << costo1 << " y el total aplicando el descuento de $" << desc << " es de $" << costo2;
					}
				}
			}
		}
	}


	_getch();
}