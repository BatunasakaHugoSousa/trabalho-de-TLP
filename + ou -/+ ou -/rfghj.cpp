#include <iostream>
#include <locale.h>
void main()
{
	int N;
	setlocale(LC_ALL, "Portuguese");
	do
	{
		std::cout << ("Da me um número");
		std::cin >> (N);
		if (N > 0)
		{
			std::cout << ("Número é positivo	");
		}
		else
		{
			std::cout << ("Número é negativo	");
		}
	} while (N != 0);
	std::cout << ("Número é igual a 0");
}