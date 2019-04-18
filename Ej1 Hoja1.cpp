//Ej1 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	printf("Sepa si su numero es par o impar\n");
	int x, r;
	printf("Ingrese el numero: ");
	cin >> x;
	r = x % 2;
	if (r == 0)
	{
		printf("Es un numero par");
	}
	else
	{
		printf("Es un numero impar");
	}
	getch();
}
