//Ej11 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	int consumo;

	//logica

	printf("Ingrese la cantidad de GB que consume: ");
	cin >> consumo;

	if (consumo == 0)
	{
		cout << "Usted no paga nada";
	}
	else
	{
		if (consumo > 0 && consumo <= 4)
		{
			cout << "Usted paga 50 soles ";
		}
		else
		{
			if (consumo > 4 && consumo <= 8)
			{
				cout << "Usted paga 85 soles";
			}
			else
			{
				int extra = consumo - 8;
				float monto = (extra*4.50) + 85;
				cout << "Usted paga " << monto << " soles";
			}
		}
	}

	_getch();
}