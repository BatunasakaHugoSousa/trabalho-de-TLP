#include <iostream>
#include <locale.h>
void main()
{
	int QN, N, V, S;
	setlocale(LC_ALL, "Portuguese");
	QN = 0, V = 0, S = 0;
	std::cout << ("Quantos números queres somar?");
	std::cin >> (QN);
	do
	{
		std::cout << ("Dá me um número");
		std::cin >> (N);
		V = V + 1, S = S + N;
	} while (QN > V);
	std::cout << (S);
}