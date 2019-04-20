//Ej23 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int main()
{
	//entrada

	int horas;
	int pago;

	//logica

	printf("Ingrese el total de horas trabajadas por el obrero: ");
	cin >> horas;

	if (horas > 0 && horas <= 40)
	{
		pago = horas * 16;
		cout << "El salario semanal del obrero es de $ " << pago;
	}
	else
	{
		if (horas > 40)
		{
			pago = 40 * 16 + (horas - 40)*20;
			cout << "El salario semanal del obrero es de $ " << pago;
		}
		else
		{
			cout << "Ingrese un numero de horas mayor a 0";
		}
	}

	_getch();
}