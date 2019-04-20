//Ej5 Hoja2

#include <iostream>
#include <conio.h>
#include <stdio.h>


using namespace System;
using namespace std;


int main()
{
	// entrada

	int dia;
	int mes;
	int año;
	int ra; //residuo de año para verificar si es bisiesto o no
	int n1;
	int n2;

	//logica

	printf("Ingrese el anio:");
	cin >> año;

	ra = año % 4;


	if (ra == 0) // bisiesto

	{
		do
		{
			printf("Ingrese el mes: ");
			cin >> mes;


			if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)

			{
				dia = 31;
				cout << "El mes " << mes << " tiene " << dia << " dias";
				_getch();
				return 0;
			}

			else
			{
				if (mes == 4 || mes == 6 || mes == 9 || mes == 11)

				{
					dia = 30;
					cout << "El mes " << mes << " tiene " << dia << " dias";
					_getch();
					return 0;
				}

				else
				{
					if (mes == 2)

					{
						dia = 29;
						cout << "El mes " << mes << " tiene " << dia << " dias";
						_getch();
						return 0;
					}
					else
					{
						cout << "Ingrese un numero de mes mayor a 0 y menor a 13 \n";
						cout << endl;
						n1 = 1;
					}
				}

			}

			
		} 
		while (n1 == 1);

		
	}

	if (ra != 0)
	{
		do
		{
			printf("Ingrese el mes: ");
			cin >> mes;

			if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)

			{
				dia = 31;
				cout << "El mes " << mes << " tiene " << dia << " dias";
				_getch();
				return 0;
			}

			else

			{
				if (mes == 4 || mes == 6 || mes == 9 || mes == 11)

				{
					dia = 30;
					cout << "El mes " << mes << " tiene " << dia << " dias";
					_getch();
					return 0;
				}

				else
				{
					if (mes == 2)

					{
						dia = 28;
						cout << "El mes " << mes << " tiene " << dia << " dias";
						_getch();
						return 0;
					}
					else
					{
						cout << "Ingrese un numero de mes mayor a 0 y menor a 13 \n";
						cout << endl;
						n2 = 2;
					}
				}
			}


		} 
		while (n2 = 2);
		
		

	}



	_getch();

}