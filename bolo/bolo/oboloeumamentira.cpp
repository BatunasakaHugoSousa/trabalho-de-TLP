#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int N, M, S, F;
	cout << ("quantas fatias d� para ter do bolo?\n");
	cin >> N;
	cout << ("quantas pessoas querem bolo?\n");
	cin >> M;
	if (N < M)
		cout << ("muitas pessoas!!");
	else
	{
		S = N % M;
		F = N / M;
		if (S == 0)
			cout << "d�s " << F << " fatias por pessoa e n�o sobram fatias";
		else
			cout << "d�s " << F << " fatias por pessoa e sobram " << S << " fatias";
	}
}