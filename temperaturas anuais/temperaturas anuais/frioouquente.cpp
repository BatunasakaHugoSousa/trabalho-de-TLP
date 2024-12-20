#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int T[12], i, M, A = 0, B = 0;
	cout << "diz me a temperatura de cada mes do ano\n";
	for (i = 0; i < 12; i++)
	{
		cout << "(" << i + 1 << "/12)\n";
		cin >> T[i];
		A = A + T[i];
	}
	M = A / 12;
	cout << "os meses que têm a temperatura acima da media são:\n";
	for (i = 0; i < 12; i++)
	{
		if (T[i] > M && i == 0)
		{
			cout << "janeiro - " << T[i] << "\n";
		}
		if (T[i] > M && i == 1)
		{
			cout << "fevereiro - " << T[i] << "\n";
		}
		if (T[i] > M && i == 2)
		{
			cout << "março - " << T[i] << "\n";
		}
		if (T[i] > M && i == 3)
		{
			cout << "abril - " << T[i] << "\n";
		}
		if (T[i] > M && i == 4)
		{
			cout << "maio - " << T[i] << "\n";
		}
		if (T[i] > M && i == 5)
		{
			cout << "junho - " << T[i] << "\n";
		}
		if (T[i] > M && i == 6)
		{
			cout << "julho - " << T[i] << "\n";
		}
		if (T[i] > M && i == 7)
		{
			cout << "agosto - " << T[i] << "\n";
		}
		if (T[i] > M && i == 8)
		{
			cout << "setembro - " << T[i] << "\n";
		}
		if (T[i] > M && i == 9)
		{
			cout << "outobro - " << T[i] << "\n";
		}
		if (T[i] > M && i == 10)
		{
			cout << "novembro - " << T[i] << "\n";
		}
		if (T[i] > M && i == 11)
		{
			cout << "dezembro - " << T[i] << "\n";
		}
	}
}