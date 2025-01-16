#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
int Tm[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, ToP[5] = { 0, 0, 0, 0, 0 };
void Tmensal(string M[12]) {
	int i;
	for (i = 0; i < 12; i++)
	{
		cout << "o total do mês " << M[i] << " foi " << Tm[i] << "\n";
	}
	return;
}
void Tproduto(string Tp[5]) {
	int i;
	for (i = 0; i < 5; i++)
	{
		cout << "gastaste " << ToP[i] << " de dinheiro em " << Tp[i] << " neste ano\n";
	}
	return;
}
void dados(string Tp[5], string M[12]) {
	int i, u, P[5][12];
	for (i = 0; i < 5; i++)
	{
		for (u = 0; u < 12;u++)
		{
			cout << "Quanto é que gastaste no mês " << M[u] << " na compra de " << Tp[i] << "?\n";
			cin >> P[i][u];
			Tm[u] = Tm[u] + P[i][u];
			ToP[i] = ToP[i] + P[i][u];
		}
	}
	return;
}
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, u, E, P[5][12];
	string Tp[5] = {"batatas", "cenouras", "couves", "alfaces", "brócolos"}, M[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outobro", "Novembro", "Dezembro"};
	cout << "0 - sair\n1 - calcular total mensal\n2 - calcular total por produto\n3 - recolher dados(recomendado se é a primeira vez)\n";
	do
	{
		cout << "o que quer fazer?\n0, 1, 2 ou 3?\n";
		cin >> E;
		switch (E) {
		case (1):
			Tmensal(M);
			break;
		case (2):
			Tproduto(Tp);
			break;
		case (3):
			dados(Tp, M);
			break;
		default:
			cout << "adeus";
			break;
		}
	} while (E == 1 || E == 2 || E == 3);
}