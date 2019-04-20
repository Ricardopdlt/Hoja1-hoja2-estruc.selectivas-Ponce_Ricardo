//Ej3 Hoja2

#include <iostream>
#include <conio.h>
#include <stdio.h>



using namespace System;
using namespace std;


int main()
{
	// entrada

	
	int dia;
	int mes;
	int n1;
	int n2;

	//logica

	do
	{
		printf("Ingrese su dia de nacimiento: ");
		cin >> dia;
		
		if (dia > 0 && dia <= 31)

		{
		
			do
			{
				printf("Ingrese su mes de nacimiento: ");
				cin >> mes;

				if (mes > 0 && mes <= 12)

				{
					

					if ((dia >= 22 && dia <= 31 && mes == 12) || (dia > 0 && dia <= 20 && mes == 1))

					{
						cout << "Usted pertenece al signo zodiacal Capricornio" << endl;
					}

					else
					{
						if ((dia >= 21 && dia <= 31 && mes == 1) || (dia > 0 && dia <= 19 && mes == 2))

						{
							cout << "Usted pertenece al signo zodiacal Acuario" << endl;
						}

						else
						{
							if ((dia >= 20 && dia <= 28 && mes == 2) || (dia > 0 && dia <= 20 && mes == 3))

							{
								cout << "Usted pertenece al signo zodiacal Piscis" << endl;
							}

							else
							{
								if ((dia >= 21 && dia <= 31 && mes == 3) || (dia > 0 && dia <= 20 && mes == 4))

								{
									cout << "Usted pertenece al signo zodiacal Aries" << endl;
								}

								else
								{
									if ((dia >= 21 && dia <= 30 && mes == 4) || (dia > 0 && dia <= 21 && mes == 5))

									{
										cout << "Usted pertenece al signo zodiacal Tauro" << endl;
									}

									else
									{
										if ((dia >= 22 && dia <= 31 && mes == 5) || (dia > 0 && dia <= 21 && mes == 6))

										{
											cout << "Usted pertenece al signo zodiacal Geminis" << endl;
										}

										else
										{
											if (((dia >= 22 && dia <= 30) && (mes == 6)) || ((dia > 0 && dia <= 23) && (mes == 7)))

											{
												cout << "Usted pertenece al signo zodiacal Cancer" << endl;
												
											}

											else
											{
												if ((dia >= 24 && dia <= 31 && mes == 7) || (dia > 0 && dia <= 23 && mes == 8))

												{
													cout << "Usted pertenece al signo zodiacal Leo" << endl;
													
												}

												else
												{
													if ((dia >= 24 && dia <= 31 && mes == 8) || (dia > 0 && dia <= 23 && mes == 9))

													{
														cout << "Usted pertenece al signo zodiacal Virgo" << endl;
														
													}

													else
													{
														if ((dia >= 24 && dia <= 30 && mes == 9) || (dia > 0 && dia <= 23 && mes == 10))

														{
															cout << "Usted pertenece al signo zodiacal Libra" << endl;
															
														}

														else
														{
															if ((dia >= 24 && dia <= 31 && mes == 10) || (dia > 0 && dia <= 22 && mes == 11))

															{
																cout << "Usted pertenece al signo zodiacal Escorpio" << endl;
																
															}

															else
															{
																if ((dia >= 23 && dia <= 30 && mes == 11) || (dia > 0 && dia <= 21 && mes == 12))

																{

																	cout << "Usted pertenece al signo zodiacal Sagitario" << endl;
																	

																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}

					_getch();
					return 0;
				}

				else
				{
					printf("ERROR \n");
					printf("Ingrese un mes mayor a 0 y menor a 13\n");
					cout << endl;

					n2 = 1;
					
				}
				
			}
			while (n2 == 1);

			_getch();
			return 0;

		}

		else

		{
		   printf("ERROR \n");
		   printf("Ingrese un dia mayor a 0 y menor a 32\n");
		   cout << endl;

		   n1 = 1;
		}
		
	}
	while (n1 == 1);
	

	_getch();
}