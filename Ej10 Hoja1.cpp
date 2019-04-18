//Ej10 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

float Ambr = 0.75; //precio de los caramelos Ambrosio

float Tic = 1.15; //precio de los caramelos Tic Tac

float Dono = 0.65; //precio de los caramelos Donofrio

int main()
{
	// entrada

	int a; //caramelos Ambrosoli
	int t; // caramelos Tic Tac
	int d; // caramelos Donofrio
	float prop; //propina
	float monto;

	// logica

	printf("Ingrese la cantidad de caramelos Ambrosoli que va a comprar: ");
	cin >> a;

	printf("Ingrese la cantidad de caramelos Tic Tac que va a comprar: ");
	cin >> t;

	printf("Ingrese la cantidad de caramelos Donofrio que va a comprar: ");
	cin >> d;

	printf("Ingrese el monto de la propina: ");
	cin >> prop;

	monto = a * Ambr + t * Tic + d * Dono;

	cout << "El monto total de la compra es: " << monto << endl;

	if (prop > monto)
	{
		cout << "LA PROPINA FUE SUFICIENTE PARA PAGAR LOS CARAMELOS";
	}
	else
	{
		if (prop == monto)
		{
			cout << "LA PROPINA FUE SUFICIENTE PARA PAGAR LOS CARAMELOS";
		}
		else
		{
			cout << "LA PROPINA NO FUE SUFICIENTE PARA PAGAR LOS CARAMELOS";
		}
	}


	_getch();
}