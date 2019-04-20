//Ej8 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	char sexo;
	int edad;
	int pulsa; // numero pulsaciones por segundo

	// logica

	printf("Ingrese el sexo de la persona (F o M): ");
	cin >> sexo;

	printf("Ingrese la edad de la persona: ");
	cin >> edad;

	if (sexo == 'F')
	{
		pulsa = (220 - edad) / 10;
		cout << "El numero debe ser de " << pulsa << " pulsaciones por cada 10 segundos aproximadamente";
	}

	if (sexo == 'M')
	{
		pulsa = (210 - edad) / 10;
		cout << "El numero debe ser de " << pulsa << " pulsaciones por cada 10 segundos aproximadamente";
	}

	_getch();
}