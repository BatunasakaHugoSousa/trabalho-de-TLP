#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int N, i;
	cout << ("d� me um n�mero\ntem de ser inferior a 100\n");
	cin >> N;
	if (N < 100)
	{
		for (i = N; i >= 0; i--)
		{
			if (i % 2 != 0)
				cout << i << "\n";
		}
	}
	else
		cout << ("n�mero tem de ser inferior a 100!!");
}