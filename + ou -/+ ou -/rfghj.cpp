#include <iostream>
#include <locale.h>
void main()
{
	int N;
	setlocale(LC_ALL, "Portuguese");
	do
	{
		std::cout << ("Da me um n�mero");
		std::cin >> (N);
		if (N > 0)
		{
			std::cout << ("N�mero � positivo	");
		}
		else
		{
			std::cout << ("N�mero � negativo	");
		}
	} while (N != 0);
	std::cout << ("N�mero � igual a 0");
}