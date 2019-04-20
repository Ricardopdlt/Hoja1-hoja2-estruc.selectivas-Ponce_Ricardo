//Ej22 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int main()
{
	{
		// entrada

		int zona;
		float consumo;
		float pago;

		// logica

		cout << "Ingrese zona (1: Comercial, 2: Residencial): ";
		cin >> zona;



		if (zona == 1)

		{
			printf("Ingrese el numero de kilowatts consumidos: ");
			cin >> consumo;

			if (consumo <= 100 && consumo > 0)

			{
				pago = 50 + consumo * 0.75;
				cout << "El monto a pagar es: " << pago << " soles.";
			}

			else
			{
				if (consumo > 100)

				{
					pago = 50 + 100 * 0.75 + (consumo - 100)*0.9;
					cout << "El monto a pagar es: " << pago << " soles.";

				}

				else

				{
					cout << "Ingrese un consumo de kilowatts mayor a 0";
				}
			}

		}

		if (zona == 2)

		{

			printf("Ingrese el numero de kilowatts consumidos: ");
			cin >> consumo;

			if (consumo <= 100 && consumo > 0)

			{
				pago = 25 + consumo * 0.30;
				cout << "El monto a pagar es: " << pago << " soles.";
			}

			else
			{
				if (consumo > 100)

				{
					pago = 25 + 100 * 0.30 + (consumo - 100)*0.7;
					cout << "El monto a pagar es: " << pago << " soles.";

				}

				else

				{
					cout << "Ingrese un consumo de kilowatts mayor a 0";
				}
			}

		}

		if (zona != 1 && zona !=2)
		{

			cout << "Ingrese una zona existente";//salida

		}

		_getch();
	}

}
