#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int numeros [10], N, i, C = 0, S = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "da me o " << i + 1 << "� n�mero\n";
		cin >> numeros[i];
	}
	cout << ("quer saber o total de n�meros negativos ou quer uma conta dos n�meros negativos?\nintroduza 1 ou 2\n");
	cin >> N;
	switch (N) {
	case 1:
		cout << ("total\n");
			for (i = 0; i < 10; i++)
			{
				if (numeros[i] < 0)
					C = C + 1;
			}
		cout << "tem um total de " << C << " n�meros negativos";
		break;
	case 2:
		cout << ("soma\n");
		for (i = 0; i < 10; i++)
		{
			if (numeros[i] < 0)
				S = S + numeros[i];
		}
		cout << "a soma dos n�meros negativos � " << S << " n�meros negativos";
		break;
	default:
		cout << ("tem de ser 1 ou 2");
		break;
	}
}