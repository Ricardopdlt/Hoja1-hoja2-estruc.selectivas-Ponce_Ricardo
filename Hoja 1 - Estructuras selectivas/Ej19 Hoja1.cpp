//Ej19 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	float nota;

	//logica

	printf("Ingrese la nota del alumno: ");
	cin >> nota;

	if (nota < 0 || nota >20)
	{
		cout << "Ingrese una nota entre el rango de 0 a 20";
	}
	if ( nota >0 && nota < 5)
	{
		cout << "NECESITA ESTUDIAR";
	}
	else
	{
		if (nota>=5 && nota<13)
		{
			cout << "JALADO";
		}
		else
		{
			if (nota >= 13 && nota < 15)
			{
				cout << "RASPANDO";
			}
			else
			{
				if (nota >= 15 && nota < 20)
				{
					cout << "SOBRESALIENTE";
				}
				else
				{
					if (nota == 20)
					{
						cout << "MATRICULA DE HONOR";
					}
				}

			}
		}
			
	}


	_getch();
}