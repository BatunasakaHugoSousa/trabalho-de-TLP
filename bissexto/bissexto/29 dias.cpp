#include <iostream> 
#include <locale.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int N, M, P = 0;
	cout << "que ano queres ver se é bissexto?\n";
	cin >> N;
	if (N % 400 == 0)
	{
		P = 1;
	}
	if (N % 4 == 0 && P == 1)
	{
		cout << "o ano é bissexto!";
	}
	else
	{
		cout << "o ano não é bissexto!";
	}
}