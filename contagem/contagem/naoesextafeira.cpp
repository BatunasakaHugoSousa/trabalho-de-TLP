#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int N, i;
	cout << ("dá me um número\n");
	cin >> N;
	for ( i = N; i >= 0; i--)
	{
		cout << i << "\n";
	}
}