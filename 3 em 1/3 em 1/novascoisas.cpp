#include <iostream> 
#include <locale.h>
using namespace std;
void media(int T) {
	int A;
	A = T / 10;
	cout << "a m�dia dos n�meros � " << A;
}
void menor(int H[10]) {
	int i, A;
	for (i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			A = H[i];
		}
		else
		{
			if (A > H[i])
			{
				A = H[i];
			}
		}
	}
	cout << "o menor n�mero � " << A << "\n";
}
void maior(int H[10]) {
	int i, A;
	for (i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			A = H[i];
		}
		else
		{
			if (A < H[i])
			{
				A = H[i];
			}
		}
	}
	cout << "o maior n�mero � " << A;
}
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, N[10], E, T = 0;
	cout << "d� me 10 n�meros\n";
	for (i = 0; i < 10; i++)
	{
		cout << "(" << i + 1 << "/10)\n";
		cin >> N[i];
		T = T + N[i];
	}
	cout << "o que quer fazer?\ncalcular a m�dia dos n�meros(1)\nachar o menor(2)\nachar o maior(3)\nsair(0)\n";
	cin >> E;
	while (E != 1 &&  E != 2 && E != 3 && E != 0)
	{
		cout << "s� pode ser 1, 2, 3 ou 0\ntenta denovo\n";
		cin >> E;
	}
	while (E != 0)
	{
		switch (E)
		{
		case 1:
			media(T);
			break;
		case 2:
			menor(N);
			break;
		case 3:
			maior(N);
			break;
		default:
			cout << "hum!?!?";
			break;
		}
	}
	cout << "tu saiste :(";
}