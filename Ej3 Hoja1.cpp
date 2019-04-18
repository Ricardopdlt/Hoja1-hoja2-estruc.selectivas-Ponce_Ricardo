//Ej3 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	float nota;

	printf("Ingrese su nota final de curso: ");
	cin >> nota;

	if (nota > 20 || nota < 0)
	{
		cout << "Ingrese una nota dentro del rango de 0 y 20";
	}
	if (nota < 12.50 && nota>=0)
	{
		cout << "Desaprobado";
	}
	if (nota <= 20 && nota>=12.50)
	{
		cout << "Aprobado";
	}
	
	_getch();
}