//Ej27 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int main()
{
	//entrada

	int num; //numero de cursos
	int precio = 155; //precio de cada curso
	int ciclo; //numero de ciclo
	float costo; 

	//logica

	printf("Ingrese el numero de cursos: ");
	cin >> num;

	printf("Ingrese el numero de ciclo a cursar: ");
	cin >> ciclo;

	if (ciclo < 1)
	{
		cout << "Ingrese un numero de ciclo entre el rango de 1 a 10";
	}
	else
	{
		if (ciclo >= 1 && ciclo <= 3)
		{
			costo = precio * num*0.9;
			cout << "El costo es de $" << costo;
		}
		else
		{
			if (ciclo >= 4 && ciclo <= 6)
			{
				costo = precio * num*0.85;
				cout << "El costo es de $" << costo;
			}
			else
			{
				if (ciclo >= 7 && ciclo <= 8)
				{
					costo = precio * num*0.83;
					cout << "El costo es de $" << costo;
				}
				else
				{
					if (ciclo >= 9 && ciclo <= 10)
					{
						costo = precio * num*0.82;
						cout << "El costo es de $" << costo;
					}
				}
			}
		}
	}



	_getch();
}