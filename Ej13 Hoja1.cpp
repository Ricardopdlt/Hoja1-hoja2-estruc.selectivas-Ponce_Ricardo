//Ej13 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	// entrada

	int num;
	int a;
	int b;
	int c;

	//logica

	printf("Ingrese un numero de 3 cifras, aunque si desea pruebe uno de 4 o 2 cifras: ");
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
		if (num <= 999 && num >= 100)
		{
			a = num / 100;
			b = (num % 100) / 10;
			c = (num % 100) % 10;
			cout << "El numero al reves es " << c << b << a;
		}
		
	}

 
	_getch();
}