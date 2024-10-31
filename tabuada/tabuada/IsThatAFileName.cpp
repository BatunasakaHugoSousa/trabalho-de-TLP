#include <iostream>
#include <locale.h>
void main()
{
	int N, i;
	setlocale(LC_ALL, "Portuguese");
	do
	{
		std::cout << ("da me um número para fazer uma tabuada dele\n");
		std::cin >> (N);
		if (N != 0)
		{
			for (i = 1; i <= 10; i++)
			{
				std::cout << N << "x" << i << "=" << N * i << "\n";
			}
		}
		else
		{
			break;
		}
	} while (N != 0);
	std::cout << ("número é 0");
}