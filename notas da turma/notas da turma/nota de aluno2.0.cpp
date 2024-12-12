#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, Q, M, T = 0, N[100];
	string A[100];
	cout << "quantos alunos tem a turma\n";
	cin >> Q;
	cout << "qual é o nome e a nota dele(a)\n";
	for (i = 0; i < Q; i++)
	{
		cout << "(" << i + 1 << "/" << Q << ")\n";
		cin >> A[i];
	}
	for (i = 0; i < Q; i++)
	{
		cout << "o(a) "<< A[i] << " teve que nota? (" << i + 1 << "/" << Q << ")\n";
		cin >> N[i];
		T = T + N[i];
	}
	M = T / Q;
	cout << "a media da turma é:" << M;
}
