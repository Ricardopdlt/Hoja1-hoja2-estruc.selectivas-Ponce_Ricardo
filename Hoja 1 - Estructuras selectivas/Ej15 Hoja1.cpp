//Ej15 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	int num;
	
	//logica

	printf("Ingrese un numero entre 1 y 100, aunque si desea ingrese un numero mayor: ");
	cin >> num;

	
	if (num> 100 || num<1)
	{
		cout << "Numero incorrecto";
	}
	else
	{
		if (num >= 1 && num <= 9)
		{
			cout << "El numero tiene 1 digito";
		}
		if (num >= 10 && num <= 99)
		{
			cout << "El numero tiene 2 digitos";
		}
		if (num == 100)
		{
			cout << "El numero tiene 3 digitos";
		}
	}


	_getch();
}