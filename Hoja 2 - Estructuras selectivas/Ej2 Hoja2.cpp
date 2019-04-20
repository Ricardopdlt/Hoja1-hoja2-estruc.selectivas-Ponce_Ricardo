//Ej2 Hoja2

#include <iostream>
#include <conio.h>
#include <stdio.h>



using namespace System;
using namespace std;


int main()
{
	// entrada

	int n;// valor para ejecutar el do - while de las categorias
	int n1; // valor para ejecutar el do - while de las horas
	char cat; //categoria
	int horas;
	int tarifa;
	int total;

	// logica 

	do
	{
		printf("Ingrese la categoria del trabajador (A, B, C, D, E): ");
		cin >> cat;

		if (cat == 'A' || cat == 'B' || cat == 'C' || cat == 'D' || cat == 'E')
		{
			switch (cat)

			{

			case 'A':

			{
				tarifa = 30;
			}

			break;

			case 'B':

			{
				tarifa = 35;
			}

			break;

			case 'C':

			{
				tarifa = 40;
			}

			break;

			case 'D':

			{
				tarifa = 45;
			}

			break;

			case 'E':

			{
				tarifa = 50;
			}

			break;


			}
			do
			{
				printf("Ingrese el numero de horas trabajadas: ");
				cin >> horas;

				if (horas > 0)
				{
					total = horas * tarifa;

					cout << "El total a pagar al empleado es $" << total;
				}
				if (horas == 0)
				{
					cout << "No se le pagara porque no trabajo ninguna hora";
				}
				if (horas < 0)
				{
					cout << "ERROR \n";
					cout << "Ingrese un numero de horas mayor a 0 \n";
					cout << endl;
					n1 = 2;
				}
			} while (n1 == 2);
		}
		else
		{
			printf("ERROR \n");
			printf("Ingrese una de las categorias indicadas \n");
			cout << endl;
			n = 1;
		}
	} 
	while (n == 1);

	_getch();
}
