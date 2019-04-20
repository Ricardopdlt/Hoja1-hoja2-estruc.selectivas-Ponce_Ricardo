//Ej6 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//Entrada

	int A;
	int B;
	int C;
	int X; //valor para remplazar en X en la ecuación
	double r1;
	double r2;
	int dis;// discriminante
	int resultado;

	// logica

	printf("Se tiene el modelo de una ecuacion cuadratica = A(x^2) + Bx + C \n");
	printf("Ingrese el valor de A, B y C para obtener las raices y validar si el discriminante es mayor a 0 \n");
	printf("Ingrese A: ");
	cin >> A;
	printf("Ingrese B: ");
	cin >> B;
	printf("Ingrese C: ");
	cin >> C;

	printf("Ingrese un valor para evaluar: ");
	cin >> X;

	dis = B*B - (4 * A*C);
	r1 = (-B + pow(dis, 0.5)) / (2 * A);
	r2 = (-B - pow(dis, 0.5)) / (2 * A);
	resultado = A * (pow(X, 2)) + B * X + C;

	if (dis > 0)
	{
		cout << "El discriminante es mayor a 0 - discriminante = " << dis << endl;
		cout << "Raiz 1: " << r1 << endl;
		cout << "Raiz 2: " << r2 << endl;
		cout << A << " ( " << X << " ) ^ 2 + " << B << " ( " << X << " ) + " << C << " = " << resultado;
	}
	if (dis = 0)
	{
		cout << "El discriminante es igual a 0" << endl;
		cout << "Raiz 1: " << r1 << endl;
		cout << "Raiz 2: " << r2 << endl;
		cout << A << " ( " << X << " ) ^ 2 + " << B << " ( " << X << " ) + " << C << " = " << resultado;
	}
	if (dis < 0)
	{
		cout << "Lo sentimos pero aun no trabajaremos con raices que son numeros imaginarios";
	}
	
	
	_getch();

}