#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, I[30], A[30], M, C = 0, D = 0;
	cout << ("dá me as idades e alturas de 30 alunos\n");
	for (i = 0; i < 5; i++)
	{
		cout << "dá me a idade(" << i + 1 << "/30)\n";
		cin >> I[i];
		cout << "dá me a altura(" << i + 1 << "/30)\n";
		cin >> A[i];
		C = C + A[i];
	}
	M = C / 30;
	for (i = 0; i < 30; i++)
	{
		if (I[i] > 13)
		{
			if (A[i] < M)
				D = D + 1;
		}
	}
	cout << "tens "<< D << " alunos abaixo da media de altura e ela é " << M;
}