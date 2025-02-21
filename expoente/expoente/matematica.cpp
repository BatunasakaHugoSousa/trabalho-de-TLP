#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, N, M, A;
	cout << "que número queres?\n";
	cin >> N;
	cout << "que expoente queres?\n";
	cin >> M;
	A = N;
	for (i = 0; i < M - 1; i++)
	{
		N = N * A;
	}
	cout << "o resultado é " << N;
}