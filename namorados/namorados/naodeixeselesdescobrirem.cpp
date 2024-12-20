#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, R, N, L;
	string Nn[50], Nl[50];
	srand(time(0));
	cout << "quantos namorados(das) tens?\n";
	cin >> N;
	if (N > 50)
	{
		cout << "isso são muitos para lembrar!!";
	}
	else
	{
		cout << "quais são os nomes?\n";
		for (i = 0; i < N; i++)
		{
			cout << "(" << i + 1 << "/" << N << ")\n";
			cin >> Nn[i];
		}
		cout << "quantos lugares podes ir?\n";
		cin >> L;
		if (L > 50)
		{
			cout << "isso são muitos para lembrar!!";
		}
		else
		{
			cout << "quais são os lugares?\n";
			for (i = 0; i < L; i++)
			{
				cout << "(" << i + 1 << "/" << L << ")\n";
				cin >> Nl[i];
			}
			for (i = 0; i < N; i++)
			{
				R = rand() % L;
				cout << "podes levar o(a) " << Nn[i] << " a " << Nl[R] << "\n";
			}
		}
	}
}