#include <iostream>
#include <locale.h>
void main()
{
	int N;
	setlocale(LC_ALL, "Portuguese");
	do
	{
		std::cout << ("da me um n�mero");
		std::cin >> (N);
		if (N % 3 == 0 && N % 5 == 0)
		{
			std::cout << ("n�mero � multiplo de 3 e 5\n");
		}
		else
		{
			if (N % 3 == 0)
			{
				std::cout << ("n�mero � multiplo de 3\n");
			}
			else
			{
				if (N % 5 == 0)
				{
					std::cout << ("n�mero � multiplo de 5\n");
				}
				else
				{
					std::cout << ("n�mero n�o � multiplo de 3 ou 5\n");
				}
			}
		}
	} while (N != 0);
	std::cout << ("n�mero � 0");
}