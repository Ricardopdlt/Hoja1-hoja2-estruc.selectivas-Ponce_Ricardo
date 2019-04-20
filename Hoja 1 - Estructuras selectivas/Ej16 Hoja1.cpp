//Ej16 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	int codigo;
	float n1;
	float n2;
	float n3;
	float promedio;
	int i = 1;

	//logica

	printf("Ingrese el codigo del alumno: ");
	cin >> codigo;

	if (codigo > 0)
	{
		cout << "Ingrese las 3 notas del alumno " << codigo << endl;
		printf("N1: ");
		cin >> n1;
		printf("N2: ");
		cin >> n2;
		printf("N3: ");
		cin >> n3;

		if (n1 >= 0 && n1 <= 20 && n2 >= 0 && n2 <= 20 && n3 >= 0 && n3 <= 20)
		{
			promedio = ((0.3*n1) + (0.3*n2) + (0.4*n3));
			cout << "El promedio del alumno " << codigo << " es: " << promedio << endl;

			if (promedio < 13)
			{
				cout << "Estudie";
			}
			else
			{
				if (promedio >= 13 && promedio < 15)
				{
					cout << char(01) << " = :) " << endl;
					cout << "Felicitaciones " << char(01) << endl;
				}
				else
				{
					if (promedio >= 15 && promedio < 20)
					{
						cout << char(01) << " = :) " << endl;
						cout << "Felicitaciones ";
						do {
							cout << char(01);
							i++;
						} while (i == 2);
					}
					else
					{
						if (promedio == 20)
						{
							cout << char(01) << " = :) " << endl;
							cout << "Felicitaciones ";
							cout << char(1);
							cout << char(1);
							cout << char(1);
							cout << char(1);
							cout << char(1);
						}
					}
				}
			}
		}
		else
		{
			cout << "Ingrese notas dentro del rango de 0 a 20";
		}
	}
	else
	{
		cout << "Ingrese un verdadero codigo";
	}


	_getch();
}