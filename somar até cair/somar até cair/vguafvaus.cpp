#include <iostream>
#include <locale.h>
void main()
{
	int n, c = 0, s = 0;
	setlocale(LC_ALL, "Portuguese");
	do
	{
		std::cout << ("da me um número");
		std::cin >> (n);
		s = s + n;
		c = c + 1;
	} while (s < 1000);
	std::cout << ("passaste do limite") << (s / c);
}