//Ej2 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	float pesodin; //peso del dinosaurio
	float pesoele; //peso del elefante

	printf("Ingrese el peso del dinosaurio: ");
	cin >> pesodin;

	printf("Ingrese el peso del elefante: ");
	cin >> pesoele;

	if (pesodin > pesoele)
	{
		cout << "El dinosauro pesa mas que el elefante.";
	}

	else {
		if (pesoele > pesodin)
		{
			cout << "El elefante pesa mas que el dinosauro.";
		}

		else {
			cout << "El dinosauro y el elefante pesan lo mismo.";
		}
	}


	_getch();

}
