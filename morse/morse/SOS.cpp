#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int N, Q, i, u;
	char F[100], D[100], A[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	string E[100], B[26] = {"._","_...","_._.","_..",".",".._.","__.","....","..",".___","._._","._..","__","_.","___",".__.","__._","_._","...","_",".._","..._",".__","_.._","_.__","__.."};
	cout << "queres codificar ou descodificar?\n1 ou 2\no k é ._._\n";
	cin >> N;
	if (N == 1)
	{
		cout << "quantas letras tem a frase?\n";
		cin >> Q;
		cout << "diz a frase\n";
		for (i = 0; i < Q; i++)
		{
			cin >> F[i];
		}
		for (i = 0; i < Q; i++)
		{
			for (u = 0; u < 26; u++)
			{
				if (F[i] == A[u])
				{
					cout << B[u] << " ";
				}
			}
		}
	}
	else
	{
		if (N == 2)
		{
			cout << "quantas ''letras'' tem a frase?\n";
			cin >> Q;
			cout << "diz a frase\n";
			for (i = 0; i < Q; i++)
			{
				cin >> E[i];
			}
			for (i = 0; i < Q; i++)
			{
				for (u = 0; u < 26; u++)
				{
					if (E[i] == B[u])
					{
						cout << A[u];
					}
				}
			}
		}
		else
		{
			cout << "isso não é uma opção!!\n";
		}
	}
}