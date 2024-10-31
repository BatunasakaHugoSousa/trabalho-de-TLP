#include <iostream>
#include <locale.h>
void main()
{
	int N;
	setlocale(LC_ALL, "Portuguese");
	do
	{
		std::cout << ("da me um número");
		std::cin >> (N);
		if (N % 3 == 0 && N % 5 == 0)
		{
			std::cout << ("número é multiplo de 3 e 5\n");
		}
		else
		{
			if (N % 3 == 0)
			{
				std::cout << ("número é multiplo de 3\n");
			}
			else
			{
				if (N % 5 == 0)
				{
					std::cout << ("número é multiplo de 5\n");
				}
				else
				{
					std::cout << ("número não é multiplo de 3 ou 5\n");
				}
			}
		}
	} while (N != 0);
	std::cout << ("número é 0");
}