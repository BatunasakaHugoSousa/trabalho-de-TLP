#include <iostream>
#include <locale.h>
#include <string>
void main()
{
	int N, A, B = 0;
	setlocale(LC_ALL, "Portuguese");
	std::string carros[3] = { "Volvo\n", "BMW\n", "Mercedes\n"};
	do
	{
		do
		{
			std::cout << ("os carros são Volvo, BMW e Mercedes\nescolha um carro de 1 a 3\n");
			std::cin >> (N);
			if (N > 3)
			{
				std::cout << ("número não pode ser maior que 3\n");
			}
		} while (N > 0 && N > 3);
		std::cout << "escolheu " << carros[(N - 1)];
		std::cout << ("quer sair?\nsim ou não, introduza 1 ou 2\n");
		std::cin >> (A);
		if (A == 2)
		{
			break;
		}
	} while (B == 0);
}
/*
if (N == 1)
	{
			std::cout << carros[0];
			std::cout << ("quer sair?\nsim ou não, introduza 1 ou 2\n");
			std::cin >> (A);
	}
		else
	{
			if (N == 2)
		{
				std::cout << carros[1];
				std::cout << ("quer sair?\nsim ou não, introduza 1 ou 2\n");
				std::cin >> (A);
		}
			else
		{
				std::cout << carros[2];
				std::cout << ("quer sair?\nsim ou não, introduza 1 ou 2\n");
				std::cin >> (A);
		}
	}*/