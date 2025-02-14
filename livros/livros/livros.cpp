#include <iostream> 
#include <string>
using namespace std;
void main() {
	int i, T = 0, V, V1, P[12];
	for (i = 0; i < 12; i++)
	{
		cin >> P[i];
		if (i % 2 != 0)
		{
			P[i] = P[i] * 3;
		}
		T = T + P[i];
	}
	cin >> V;
	V1 = T % 10;
	if (V == 10 - V1)
	{
		cout << "correto";
	}
	else
	{
		cout << "ERRO " << 10 - V1;
	}
}