#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int N, R = rand() % 99 + 1;
	cout << ("advinha o n�mero\n� de 1 a 100\n");
	cin >> N;
	do
	{
		if (N < R)
		{
			cout << ("o teu n�mero � menor\ntenta denovo\n");
			cin >> N;
		}
		if (N > R)
		{
			cout << ("o teu n�mero � maior\ntenta denovo\n");
			cin >> N;
		}
		else
		{
			break;
		}
	} while (N != R);
	cout << ("bom trabalho!!");
}