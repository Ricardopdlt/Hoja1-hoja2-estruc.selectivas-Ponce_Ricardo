//Ej14 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	int num;
	int a;
	int c;

	//logica

	printf("Ingrese un numero de 3 cifras, aunque si desea ingrse uno de 4 o 2 cifras: ");
	cin >> num;

	if (num > 999)
	{
		cout << "Numero incorrecto";
	}
	else
	{
		if (num < 100)
		{
			cout << "Numero incorrecto";
		}
		else
		{
			a = num / 100;
			c = (num % 100) % 10;

			if (a == c)
			{
				cout <<"El numero es capicua";
			}
			else
			{
				cout << "El numero no es capicua";
			}
		}
	}


	_getch();
}