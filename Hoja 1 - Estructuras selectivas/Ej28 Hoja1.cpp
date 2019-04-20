// Ej28 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

void main()
{
	char escala; // escala de pago
	int cursos; //numero de cursos
	int cuota = 350; // cuota fija
	int precio1;//cuota variable
	int precio2;//cuota variable
	int precio3;//cuota variable
	int importe;
	

	cout << "Ingresa la escala de pago (A, B, C, D): ";
	cin >> escala;


	switch (escala)
	{
	case 'A': precio1 = 400; //entre 1 a 5 cursos
		precio2 = 600; //entre 6 a 8 cursos
		precio3 = 900; //mas de 8 cursos
		break;

	case 'B': precio1 = 350; //entre 1 a 3 cursos
		precio2 = 500; //entre 4 a 7 cursos
		precio3 = 700; //mas de 7
		break;

	case 'C': precio1 = 320; //entre 1 a 3 cursos
		precio2 = 480; //entre 4 a 7 cursos
		precio3 = 685; // mas de 7
		break;

	case 'D': precio1 = 310; //entre 1 a 4 cursos
		precio2 = 475; //entre 5 a 8 cursos
		precio3 = 680; //mas de 8
		break;

	}



	if (escala != 'A' && escala != 'B' && escala != 'C' && escala != 'D')
	{
		cout << "ERROR\n";
		cout << "Ingrese una de las letras indicadas";
	}

	if (escala == 'A' || escala == 'B' || escala == 'C' || escala == 'D')
	{
		cout << "Ingrese el numero de cursos: ";
		cin >> cursos;

		if (cursos < 0)
		{
			cout << "Ingrese un numero de cursos mayor a 0";
		}

		if (cursos == 0)
		{
			cout << "No pagara";
		}

		if (cursos >0)
		{
			switch (escala)

			{

			case 'A':
			{

				if (cursos >= 1 && cursos <= 5)

				{
					importe = cuota + precio1;
				}

				else
				{
					if (cursos >= 6 && cursos <= 8)

					{
						importe = cuota + precio2;
					}
					else
					{
						if (cursos >= 9)

						{
							importe = cuota + precio3;
						}
					}
				}


			}

			break;

			case 'B':
			{

				if (cursos >= 1 && cursos <= 3)

				{
					importe = cuota + precio1;
				}

				else
				{
					if (cursos >= 4 && cursos <= 7)

					{
						importe = cuota + precio2;
					}
					else
					{
						if (cursos >= 8)

						{
							importe = cuota + precio3;
						}
					}
				}


			}

			break;

			case 'C':

			{

				if (cursos >= 1 && cursos <= 3)

				{
					importe = cuota + precio1;
				}

				else
				{
					if (cursos >= 4 && cursos <= 7)

					{
						importe = cuota + precio2;
					}
					else
					{
						if (cursos >= 8)

						{
							importe = cuota + precio3;
						}
					}
				}


			}

			break;

			case 'D':

			{

				if (cursos >= 1 && cursos <= 4)

				{
					importe = cuota + precio1;
				}

				else
				{
					if (cursos >= 5 && cursos <= 8)

					{
						importe = cuota + precio2;
					}
					else
					{
						if (cursos >= 9)

						{
							importe = cuota + precio3;
						}
					}
				}


			}

			break;

			}

			cout << "El importe a cancelar es de S/" << importe << endl;
		}
	}
	
	_getch();
}