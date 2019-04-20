//Ej25 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int main()
{
	// entrada

	int dia; //diametro
	int ingre; // ingredientes extras
	float precio; //precio de la pizza

	//logica

	printf("Ingrese el diametro en centimetros: ");
	cin >> dia;

	printf("Ingrese el numero de ingredientes extras: ");
	cin >> ingre;

	precio = dia * 1.5 + ingre * 2.5;

	//salida

	cout << "El precio total de la pizza es de S/" << precio;

	_getch();
}