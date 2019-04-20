//Ej1 Hoja2

#include <iostream>
#include <conio.h>
#include <stdio.h>



using namespace System;
using namespace std;


int main()
{
	// entrada

	int op;//opcion de menu
	int n;

	//logica
	do
	{
		printf(" MENU \n");

		printf(" 1.- Area de un Triangulo \n");

		printf(" 2.- Area de un Rectangulo \n");

		printf(" 3.- Area de un Circulo \n");

		printf(" 4.- Area de un Cuadrado \n");

		printf(" 5.- Salir \n");

		printf(" ¿Que opcion desea? \n");
		cin >> op;


		cout << endl;
		cout << endl;


		if (op == 1 || op == 2 || op == 3 || op == 4)
		{

			switch (op)

			{

			case 1:

			{

				double b;//base del triangulo
				double a;//altura del triangulo
				double area;

				printf("AREA DE UN TRIANGULO \n");
				printf("Ingrese la base \n");
				cin >> b;

				printf("Ingrese la altura \n");
				cin >> a;

				area = (b*a) / 2;

				cout << "El area del triangulo es: " << area;

			}

			break;

			case 2:

			{

				double b;//base del rectangulo
				double a;//altura del rectangulo
				double area;

				printf("AREA DE UN RECTANGULO \n");
				printf("Ingrese la base \n");
				cin >> b;

				printf("Ingrese la altura \n");
				cin >> a;

				area = b*a;

				cout << "El area del rectangulo es: " << area;

			}

			break;

			case 3:

			{

				double r; // radio
				double area;

				printf("AREA DE UN CIRCULO \n");
				printf("Ingrese el radio \n");
				cin >> r;

				area = r * r * 3.14;

				cout << "El area del circulo es: " << area;

			}

			break;

			case 4:

			{

				double l;
				double area;//lado

				printf("AREA DE UN CUADRADO \n");
				printf("Ingrese el lado \n");
				cin >> l;

				area = l * l;

				cout << "El area del cuadrado es: " << area;

			}

			break;

			}
		}
		if (op == 5)
		{
			return 0;
		}
		if (op != 1 && op != 2 && op != 3 && op != 4 && op != 5)
		{
			cout << " ERROR \n";
			cout << "Ingrese una de las opciones mostradas en el menu \n";
			cout << endl;
			n = 1;
		}

	}
	while (n == 1);

	_getch();

}



