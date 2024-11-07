#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	string nomes[5];
	int N, i, A = 0;
	//char nomes[5]; isto tambem funciona
	do {
		cout << ("dá me 5 nomes\n");
		for (i = 0; i < 5; i++)
			cin >> nomes[i];
		for (i = 4; i >= 0; i--)
			cout << nomes[i];
		cout << ("\nquer continuar?\nescreva 1 para continuar ou 2 para parar\n");
		cin >> N;
		if (N == 1)
			cout << ("");
		else
		{
			if (N == 2)
				A = A + 1;
			else
			{
				cout << ("tem de ser 1 ou 2!!");
				break;
			}
		}
	} while (A == 0);
}