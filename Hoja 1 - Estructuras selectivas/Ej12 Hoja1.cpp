//Ej12 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	// entrada

	int promedio;
	int faltas;

	//logica

	printf("Ingrese el promedio ponderado del alumno: ");
	cin >> promedio;

	printf("Ingrese el numero de faltas: ");
	cin >> faltas;

	if (promedio >= 15 && faltas == 0)
	{
		cout << "SE OTORGARA LA BECA DEL 30%";
	}
	else
	{
		cout << "NO SE OTORGARA LA BECA DEL 30%";
	}


	_getch();
}