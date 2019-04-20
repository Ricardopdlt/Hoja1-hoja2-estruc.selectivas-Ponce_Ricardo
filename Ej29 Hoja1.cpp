//Ej29 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>


using namespace System;
using namespace std;


void main()

{
	//entrada

	char modelo;
	int placa; //ultimo digito de placa
	int mante; //costo mantenimiento
	string mes;


	// logica

	printf("Ingrese el modelo (A o B): ");
	cin >> modelo;

	if (modelo == 'A' || modelo == 'B')
	{
		printf("Ingrese el ultimo digito de la placa: ");
		cin >> placa;

		if (placa >= 0 && placa <= 9)
		{
			printf("Ingrese el costo de mantenimiento anual: ");
			cin >> mante;

			if (mante > 0)
			{

				if (modelo == 'A')
				{
					switch (placa)

					{

					case 0:
					case 1:
					case 2:
					case 3:
					case 5:

					{

						if (mante >0 && mante <= 500)

						{
							mes = "ENERO";
						}

						else
						{
							if (mante > 500)

							{
								mes = "FEBRERO";
							}
						}
					}

					break;

					case 6:
					case 7: 
					case 8:

					{

						if (mante > 0 && mante <= 700)

						{
							mes = "JUNIO";
						}

						else
						{
							if (mante > 700)

							{
								mes = "JULIO";
							}
						}
					}

					break;

					case 9:

					{

						if (mante > 0 && mante <= 1000)

						{
							mes = "OCTUBRE";
						}

						else
						{
							if (mante > 1000)

							{
								mes = "NOVIEMBRE";
							}
						}
					}

					break;

					}

				}

				if (modelo == 'B')

				{

					switch (placa)

					{

					case 1: 
					case 2: 
					case 3:

					{

						if (mante >0 && mante <= 500)

						{
							mes = "MARZO";
						}

						else
						{
							if (mante > 500)

							{
								mes = "ABRIL";
							}
						}
					}

					break;

					case 4: 
					case 5: 
					case 6: 
					case 7: 
					case 8:

					{

						if (mante >0 && mante <= 700)

						{
							mes = "MAYO";
						}

						else
						{
							if (mante > 700)

							{
								mes = "SETIEMBRE";
							}
						}
					}

					break;

					case 0: 
					case 9:

					{

						if (mante >0 && mante <= 1000)

						{
							mes = "AGOSTO";
						}

						else
						{
							if (mante > 1000)

							{
								mes = "DICIEMBRE";
							}
						}
					}

					break;

					}

				}

				cout << "El mes de revision tecnica es: " << mes;

			}
			else
			{
			cout << "Ingrese un costo de mantenimiento mayor a 0 ";
            }
		}
		else
		{
		cout << "Ingrese un ultimo digito de placa que se encuentre entre el rango de 0 a 9 ";
        }
	}
	else
	{
	   cout << "Ingrese una de las letras indicadas";
	}

	

	_getch();

}