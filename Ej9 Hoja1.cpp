//Ej9 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	// entrada

	int gl;// goles del equipo local
	int gv;// goles del equipo visitante

	//logica

	printf("Ingrese la cantidad de goles del equipo local: ");
	cin >> gl;

	printf("Ingrese la cantidad de goles del equipo visitante: ");
	cin >> gv;

	if (gl > gv)
	{
		cout << "Gano el equipo local";
	}
	else
	{
		if (gv > gl)
		{
			cout << "Gano el equipo visitante";
		}
		else
		{
			cout << "Empate";
		}
	}




	_getch();

}