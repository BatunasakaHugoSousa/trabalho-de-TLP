#include <iostream> 
#include <locale.h>
#include <string.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, u, Q, Z = 0, A = 0;
	char F[100], P[5] = { 'a','e','i','o','u' };
	string Pe[5] = { "apa","epe","ipi","opo","upu"};
	cout << "quantas letras tem a frase?\n";
	cin >> Q;
	cout << "qual é a frase?\n";
	for (i = 0; i < Q; i++)
	{
		cin >> F[i];
	}
	cout << "a tua frase agora é:\n";
	for (i = 0; i < Q; i++)
	{
		Z = 0;
		A = 0;
		for (u = 0; u < 5; u++)
		{
			if (Z == 0)
			{
				if (F[i] == P[u])
				{
					cout << Pe[u];
					Z = 1;
					A = 1;
				}
			}
		}
		if (A == 0)
		{
			cout << F[i];
		}
	}
}