#include <iostream>
#include <locale.h>
void main()
{
	int N, i, B, A = 0;
	setlocale(LC_ALL, "Portuguese");
	std::cout << ("da me um número	");
	std::cin >> (N);
	for (i = 1; i <= N; i++)
	{
		B = N % i;
		std::cout << N << "%" << i << "=" << B <<"\n";
		if (B == 0)
		{
			A = A + 1;
		}
	}
	if (A == 2)
	{
		std::cout << ("número é primo");
	}
	else
	{
		std::cout << ("número não é primo");
	}
}