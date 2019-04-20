//Ej17 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

//Entrada
double x;
double y;

//Logica
int main()
{
	cout << "Ingrese las coordenadas X y Y de un punto\n";
	cout << "Ingrese coordenada X:\n";
	cin >> x;
	cout << "Ingrese coordenada Y\n";
	cin >> y;

	if (x > 0 && y > 0)
	{
		cout << "El punto" << " ( " << x << " ; " << y << " ) " << "se encuentra en el primer cuadrante";
	}
	if (x < 0 && y>0)
	{
		cout << "El punto" << " ( " << x << " ; " << y << " ) " << "se encuentra en el segundo cuadrante";
	}
	if (x < 0 && y < 0)
	{
		cout << "El punto" << " ( " << x << " ; " << y << " ) " << "se encuentra en el tercer cuadrante";
	}
	if (x > 0 && y < 0)
	{
		cout << "El punto" << " ( " << x << " ; " << y << " ) " << "se encuentra en el cuarto cuadrante";
	}


	_getch();
}
