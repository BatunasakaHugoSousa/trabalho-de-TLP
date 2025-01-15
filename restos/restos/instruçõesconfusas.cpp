#include <iostream>
#include <locale.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, u, Q, J, S = 0, M = 0, A[10][10], P[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	cin >> Q >> J;
	for (i = 0; i < J; i++)
	{
		S = 0;
		for (u = 0; u < Q; u++)
		{
			cin >> A[i][u];
			S = S + A[i][u];
		}
		for (u = 0; u < Q; u++)
		{
			if (S < Q)
			{
				if (A[i][u] == S)
				{
					P[u] = P[u] + 1;
					if (M < P[u])
					{
						M = P[u];
					}
				}
			}
			else if (A[i][u] == S % Q)
			{
				P[u] = P[u] + 1;
				if (M < P[u])
				{
					M = P[u];
				}
			}
		}
	}
	cout << "\n";
	for (i = 0; i < Q; i++)
	{
		cout << P[i] << "\n";
	}
	cout << "\n";
	for (i = 0; i < Q; i++)
	{
		if (M == P[i])
		{
			cout << i << "\n";
		}
	}
}