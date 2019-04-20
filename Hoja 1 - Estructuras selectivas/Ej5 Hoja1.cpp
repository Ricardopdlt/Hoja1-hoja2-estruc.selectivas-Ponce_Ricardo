//Ej5 Hoja1

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	//entrada

	int A;
	int B;
	int C;

	//Logica

	printf("Ingrese los lados de un triangulo ABC:\n");
	cin >> A;
	cin >> B;
	cin >> C;

	
	if (A-B<C && B-A<C && C<A+B && A-C<B && C-A<B && B<A+C && B-C<A &&C-B<A && A<B+C)
	{
		cout << "SI ES UN TRIANGULO";
	}
	else
	{
		cout << "NO ES UN TRIANGULO";
	}

	_getch();
}