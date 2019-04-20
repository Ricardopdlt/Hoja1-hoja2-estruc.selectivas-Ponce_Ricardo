//Ej7 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	// entrada

	int N1;
	int N2;
	int prueba;

	//logica

	printf("Ingrese dos numeros enteros (N1 y N2): \n");
	cin >> N1;
	cin >> N2;

	prueba = N1 % N2;

	if (prueba == 0)
	{
		cout << N1 << " es multiplo de " << N2;
	}
	else
	{
		cout << N1 << " no es multiplo de " << N2;
	}

	_getch();
}