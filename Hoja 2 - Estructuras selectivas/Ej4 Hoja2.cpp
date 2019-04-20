//Ej4 Hoja2

#include <iostream>
#include <conio.h>
#include <stdio.h>



using namespace System;
using namespace std;


int main()
{
	float val;
	float V;
	int num;

	printf("Ingrese valor de num (1, 2, 3): ");
	cin >> num;


	switch (num)
	{
	case 1: printf("Ingrese el valor de V:");
		cin >> V;
		val = V * 100;
		break;

	case 2: printf("Ingrese el valor de V:");
		cin >> V; 
		val = pow(100, V);
		break;

	case 3: printf("Ingrese el valor de V:");
		cin >> V; 
		val = 100 / V;
		break;

	default: val == 0;
		break;
			   		 	  
	}

	cout << "Val = " << val;

	_getch();
}