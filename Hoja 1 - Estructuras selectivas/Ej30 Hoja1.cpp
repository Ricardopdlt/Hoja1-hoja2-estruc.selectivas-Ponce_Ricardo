//Ej30 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>


using namespace System;
using namespace std;


void main()

{
	// entrada

	int dia;
	int mes;
	int año;
	int rd ; //residuo de día para ver si es par o impar
	int ra ; //residuo de año para ver si es par o impar
	string color;

	//logica

	printf("Ingresa tu dia de nacimiento: ");
	cin >> dia;

	printf("Ingresa tu mes de nacimiento: ");
	cin >> mes;

	printf("Ingresa tu anio de nacimiento: ");
	cin >> año;

	rd = (dia % 2);
	ra = (año % 2);

	switch (mes)

	{

	case 1: 
	case 2: 
	case 3:

	{

		if (rd == 0 && ra == 0)

		{
			color = "Rojo";
		}

		if (rd != 0 && ra == 0)

		{
			color = "Celeste";
		}

		if (rd == 0 && ra != 0)

		{
			color = "Morado";
		}

		if (rd != 0 && ra != 0)

		{
			color = "Negro";
		}

	}

	break;

	case 4: 
	case 5: 
	case 6:

	{

		if (rd == 0 && ra == 0)

		{
			color = "Naranja";
		}

		if (rd != 0 && ra == 0)

		{
			color = "Verde";
		}

		if (rd == 0 && ra != 0)

		{
			color = "Turquesa";
		}

		if (rd != 0 && ra != 0)

		{
			color = "Gris";
		}

	}

	break;

	case 7: 
	case 8: 
	case 9:

	{

		if (rd == 0 && ra == 0)

		{
			color = "Marron";
		}

		if (rd != 0 && ra == 0)

		{
			color = "Fucsia";
		}

		if (rd == 0 &&  ra != 0)

		{
			color = "Azul";
		}

		if (rd != 0 && ra != 0)

		{

			color = "Amarillo";

		}

	}

	break;

	case 10: 
	case 11: 
	case 12:

	{

		if (rd == 0 && ra == 0)

		{
			color = "Violeta";
		}

		if (rd != 0 && ra == 0)

		{
			color = "Rosado";
		}

		if (rd == 0 && ra != 0)

		{
			color = "Olivo";
		}

		if (rd != 0 && ra != 0)

		{
			color = "Blanco";
		}

	}

	break;

	}



	cout << "Tu color es: "<<color;



	_getch();

}