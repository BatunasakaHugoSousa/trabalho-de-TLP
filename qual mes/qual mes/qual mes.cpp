#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, P = 0;
	string Q, D[12] = {"31", "28/29", "31", "30", "31", "30", "31", "31", "30", "31", "30", "31"}, M[12] = { "janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outobro", "novembro", "dezembro" }, M1[12] = { "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outobro", "Novembro", "Dezembro" };
	cout << "que mês queres ver os dias?\n";
	cin >> Q;
	for (i = 0; i < 12; i++)
	{
		if (Q == M[i] || Q == M1[i])
		{
			cout << D[i];
		}
		else
		{
			P = P + 1;
		}
	}
	if (P == 12)
	{
		cout << "isso não é um mês!";
	}
}