#include <iostream> 
#include <locale.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, A = 0, N, R[3] = {0, 0, 0};
	cout << "que n�mero queres ver se � par, impar ou primo?\n";
	cin >> N;
	if (N % 2 == 0)
	{
		R[0] = 1;
	}
	else
	{
		R[1] = 1;
	}
	for (i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			A = A + 1;
		}
	}
	if (A == 2)
	{
		R[2] = 1;
	}
	if (R[0] == 1)
	{
		cout << "o n�mero � par!\n";
	}
	if (R[1] == 1)
	{
		cout << "o n�mero � impar\n";
	}
	if (R[2] == 1)
	{
		cout << "e o n�mero � primo";
	}
	else
	{
		cout << "e o n�mero n�o � primo";
	}
}