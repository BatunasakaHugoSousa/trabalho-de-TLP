#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int C, i, u, E = 0, D = 0, M[100], N[100], Z = 0, S[100];
	char A[100], B[100];
	cout << "diz me duas palavras e digo se é um anagrama\ndiz me primeiro quantas letras tem as palavras\n";
	cin >> C;
	cout << "agora diz me a primeira palavra com as letras separadas\n";
	for (i = 0; i < C; i++)
	{
		cin >> A[i];
	}
	for (i = 0; i < C; i++)
	{
		M[i] = 0;
		for (u = 0; u < C; u++)
		{
			if (A[i] == A[u])
			{
				M[i] = M[i] + 1;
			}
		}
	}
	cout << "agora diz me a segunda palavras com as letras separadas\n";
	for (i = 0; i < C; i++)
	{
		cin >> B[i];
	}
	for (i = 0; i < C; i++)
	{
		N[i] = 0;
		for (u = 0; u < C; u++)
		{
			if (B[i] == B[u])
			{
				N[i] = N[i] + 1;
			}
		}
	}
	for (i = 0; i < C; i++)
	{
		if (M[i] == 1)
		{
			E = E + 1;
		}
		if (N[i] == 1)
		{
			E = E + 1;
		}
		S[i] = 0;
	}
	for (i = 0; i < C; i++)
	{
		Z = 0;
		for (u = 0; u < C; u++)
		{
			if (E / 2 == C)
			{
				if (A[i] == B[u])
				{
					D = D + 1;
				}
			}
			else
			{
				if (Z == 0)
				{
					if (S[u] != 0)
					{
						u = u + 1;
					}
					if (A[i] == B[u])
					{
						D = D + 1;
						Z = Z + 1;
						S[u] = S[u] + 1;
					}
				}
			}
		}
	}
	if (D == C)
	{
		for (i = 0; i < C; i++)
		{
			cout << A[i];
		}
		cout << " é anagrama de ";
		for (i = 0; i < C; i++)
		{
			cout << B[i];
		}
	}
	else
	{
		cout << "as palavras não são anagramas";
	}
}