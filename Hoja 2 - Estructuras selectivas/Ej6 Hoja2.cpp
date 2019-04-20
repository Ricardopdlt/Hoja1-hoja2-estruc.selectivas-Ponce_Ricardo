//Ej6 Hoja2

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	// entrada

	int tipo;
	float consumo;
	float total;
	int n1;
	int n2;

	// logica


	do
	{
		printf("Ingrese el tipo de consumo (1: Comercial, 2: Domestico): ");
		cin >> tipo;

		if (tipo == 1 || tipo == 2)
		{
			do
			{
				printf("Ingrese el consumo por KWH: ");
				cin >> consumo;

				if (consumo >= 1)
				{

					if (tipo == 1)

					{
						total = consumo * 1.58;
						cout << "El total a pagar por el consumo de luz es S/" << total;
					}

					if (tipo == 2)

					{

						if (consumo <= 100)

						{
							total = consumo * 0.35;
							cout << "El total a pagar por el consumo de luz es S/" << total;
						}

						if (consumo > 100 && consumo <= 500)

						{
							total = (100 * 0.35) + ((consumo - 100) * 1.05);
							cout << "El total a pagar por el consumo de luz es S/" << total;
						}

						if (consumo > 500)

						{
							total = (100 * 0.35) + (400 * 1.05) + ((consumo - 500)*1.36);
							cout << "El total a pagar por el consumo de luz es S/" << total;
						}

					}

					getch();
					return 0;
				}
				if (consumo == 0)
				{
					cout << "No se debe pagar porque no consumio KWH";

					getch();
					return 0;
				}

				if (consumo < 0)
				{
					cout << "ERROR" << endl;
					cout << "El consumo de KWH debe ser mayor a 0" << endl;
					cout << endl;

					n2 = 2;
				}
			} while (n2 == 2);
		}
		else
		{
			cout << "ERROR" << endl;
			cout << "Ingrese alguno de los dos tipos mencionados" << endl;
			cout << endl;

			n1 = 1;
		}
	} 
	while (n1 == 1);



	

	_getch();

}