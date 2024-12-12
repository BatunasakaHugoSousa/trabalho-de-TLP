#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, u, T = 0, P[22][6], ToP[6] = {0, 0, 0, 0, 0, 0};
	string TP[6] = {"batata frita", "bolo rei", "perfume", "par de meias", "pijama", "chocolate com ginja"}, N[22] = {"Clara", "Abdulah", "André", "Andrei", "Hugo", "Paloma", "João", "Leonardo", "Miguel", "Pedro", "Pierre", "Rafael", "Ricardo", "Salvador", "Sartaj", "Tiago", "Tomás Filipe", "Ulisses", "Henrise", "Heros", "Tomás", "Tuqeer"};
	for (i = 0; i < 22; i++)
	{
		cout << "quantos é que o(a) "<< N[i] <<" traz?\n";
		for (u = 0; u < 6; u++)
		{
			cout << TP[u] << " - ";
			cin >> P[i][u];
			T = T + P[i][u];
			ToP[u] = ToP[u] + P[i][u];
		}
	}
	cout << "\n";
	cout << "trouxeram um total de " << T << " produtos\ne cada um deles foi:\n";
	for (i = 0; i < 6; i++)
	{
		cout << TP[i] << " - " << ToP[i] << "\n";
	}
	cout << "\n";
	for (i = 0; i < 22; i++)
	{
		cout << "o(a) " << N[i] << " trouxe:\n";
		for (u = 0; u < 6; u++)
		{
			cout << TP[u] << " - " << P[i][u] << "\n";
		}
	}
}