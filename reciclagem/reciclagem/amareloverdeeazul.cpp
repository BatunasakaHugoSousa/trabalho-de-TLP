#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
int L[15], PR[3] = {3, 2, 1};
string N[3] = {"A", "B", "C"}, P[5] = {"cartão", "papel", "folha", "papelão", "folhaA4"}, M[5] = {"copo de plastico", "relogio de mão", "garfo de metal", "lata", "prato de plastico"}, V[5] = {"garrafa", "vidro pintado", "copo de vidro", "espelho", "frasco"};
void lixo() {
	srand(time(0));
	int i;
	for (i = 0; i < 15; i++)
	{
		L[i] = rand() % 3;
	}
	return;
}
void jogo() {
	srand(time(0));
	int i, u, Q, R, Ma = 0, T[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, P1[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, E[10][10];
	string B;
	cout << "quantos jogadores tens?\n";
	cin >> Q;
	cout << "tens de dizer para onde cada tipo de lixo vai\npapel, metal/plastico, vidro\ncada jogador pode jogar 10 veses\nacertar dá 5 pontos\nresponde com 1(papel), 2(metal/plastico) e 3(vidro)\n";
	for (i = 0; i < Q; i++)
	{
		lixo();
		cout << "jogador " << i + 1 << "\n";
		for (u = 0; u < 15; u++)
		{
			R = rand() % 5;
			if (L[u] == 0)
			{
				cout << P[R] << ": ";
			}
			else
			{
				if (L[u] == 1)
				{
					cout << M[R] << ": ";
				}
				else
				{
					cout << V[R] << ": ";
				}
			}
			cin >> E[i][u];
			if (E[i][u] == L[u] + 1)
			{
				P1[i] = P1[i] + 5;
				if (P1[i] > Ma)
				{
					Ma = P1[i];
				}
			}
		}
	}
	for (i = 0; i < Q; i++)
	{
		if (P1[i] == Ma)
		{
			cout << "o jogador " << i + 1 << " ganhou!!\nqual é o teu nome?\n";
			if (P1[i] >= PR[0])
			{
				if (N[0] != "")
				{
					N[2] = N[1];
					PR[2] = PR[1];
					N[1] = N[0];
					PR[1] = PR[0];
					cin >> N[0];
					PR[0] = P1[i];
				}
				else
				{
					cin >> N[0];
					PR[0] = P1[i];
				}
			}
			else
			{
				if (P1[i] >= PR[1])
				{
					if (N[1] != "")
					{
						N[2] = N[1];
						PR[2] = PR[1];
						cin >> N[0];
						PR[1] = P1[i];
					}
					else
					{
						cin >> N[0];
						PR[1] = P1[i];
					}
				}
				else
				{
					if (P1[i] >= PR[2])
					{
						cin >> N[2];
						PR[2] = P1[i];
					}
					else
					{
						cin >> B;
					}
				}
			}
		}
	}
	return;
}
void ranking() {
	int i;
	for (i = 0; i < 3; i++)
	{
		cout << N[i] << ": " << PR[i] << "\n";
	}
}
void main() {
	setlocale(LC_ALL, "Portuguese");
	int O;
	do
	{
		cout << "o que quer fazer?\n1 para jogar\n2 para ver ranking\n0 para sair\n";
		cin >> O;
		switch (O) {
		case 1:
			jogo();
			break;
		case 2:
			ranking();
			break;
		default:
			break;
		}
	} while (O != 0);
	cout << "adeus";
}