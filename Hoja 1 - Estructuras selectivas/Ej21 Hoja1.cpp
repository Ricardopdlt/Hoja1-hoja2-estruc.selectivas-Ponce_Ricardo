//Ej21 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int main()

{
	// entrada

	float monto;
	float montof; //con intereses

	// logica

	cout << "Ingrese el monto del prestamo en $: ";
	cin >> monto;



	if (monto > 0)

	{

		if (monto < 5000)

		{

			montof = monto * 1.03;

		}

		else
		{
			if (monto >= 5000 && monto <= 10000)

			{

				montof = monto * 1.02;

			}

			else

			{

				montof = monto * 1.01;

			}
		}

		cout << "El monto total a pagar es de $ " << montof;// salida

	}

	else

	{

		cout << "Ingrese un monto mayor a 0";//salida

	}

	_getch();
}