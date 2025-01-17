#include <iostream>
#include <locale.h>
using namespace std;
int depositar(int S) {
	int D;
	cout << "quanto queres depositar?\n";
	cin >> D;
	if (D == 0)
	{
		cout << "asserio?\n";
	}
	else
	{
		if (D < 0)
		{
			cout << "querias...\n";
		}
		else
		{
			S = S + D;
		}
	}
	return S;
}
int debito(int S) {
	int R;
	cout << "quanto queres retirar?\n";
	cin >> R;
	if (R > S)
	{
		cout << "não é possivel retirar tanto dinheiro\ntens de depositar mais primeiro\n";
	}
	else
	{
		if (R == 0)
		{
			cout << "haha...\n";
		}
		else
		{
			if (R < 0)
			{
				cout << "querias...\n";
			}
			else
			{
				S = S - R;
			}
		}
	}
	return S;
}
void verificar(int S) {
	cout << "tens " << S << " de saldo\n";
	return;
}
int enviar(int S) {
	int E;
	cout << "queres enviar quanto?\n";
	cin >> E;
	if (E > S)
	{
		cout << "desculpa mas não podes enviar tanto :(\ntenta depositar primeiro\n";
	}
	else
	{
		if (E == 0)
		{
			cout << "porque??\n";
		}
		else
		{
			if (E < 0)
			{
				cout << "estas a tentar fazer o que?!?!\n";
			}
			else
			{
				S = S - E;
			}
		}
	}
	return S;
}
void inicio() {
	int E, S = 1000;
	cout << "o que quer fazer?\n";
	do
	{
		cout << "1 para depositar\n2 para debito\n3 para verificar saldo\n4 para enviar dinheiro\n0 para sair\n";
		cin >> E;
		switch (E) {
		case 1:
			S = depositar(S);
			break;
		case 2:
			S = debito(S);
			break;
		case 3:
			verificar(S);
			break;
		case 4:
			S = enviar(S);
			break;
		case 0:
			cout << "adeus :(";
			break;
		default:
			cout << "isso não é uma opção!!\ntenta denovo\n";
			break;
		}
	} while (E != 0);
}
void main()
{
	setlocale(LC_ALL, "Portuguese");
	inicio();
}