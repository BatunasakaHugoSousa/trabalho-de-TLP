#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int i, u, Q, Q1, T = 0, N[80][80], MA[50] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, MD[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	string A[100], D[100];
	cout << "quantos alunos tem a turma\n";
	cin >> Q;
	cout << "e quantas disciplinas?\n";
	cin >> Q1;
	cout << "qual é o nome dele(a)\n";
	for (i = 0; i < Q; i++)
	{
		cout << "(" << i + 1 << "/" << Q << ")\n";
		cin >> A[i];
	}
	cout << "quais são as disciplinas?\n";
	for (i = 0; i < Q1; i++)
	{
		cout << "(" << i + 1 << "/" << Q1 << ")\n";
		cin >> D[i];
	}
	for (i = 0; i < Q; i++)
	{
		for (u = 0; u < Q1; u++)
		{
			cout << "que nota o(a) " << A[i] << " teve na disciplina " << D[u] << "? (" << i + 1 << " / " << Q << ")\n";
			cin >> N[i][u];
			MA[i] = MA[i] + N[i][u];
			MD[u] = MD[u] + N[i][u];
		}
	}
	for (i = 0; i < Q; i++)
	{
		MA[i] = MA[i] / Q1;
		MD[i] = MD[i] / Q;
	}
	for (i = 0; i < Q; i++)
	{
		cout << "a media da nota do(a) " << A[i] << " é " << MA[i] << "\n";
	}
	for (i = 0; i < Q1; i++)
	{
		cout << "a media da disciplina " << D[i] << " é " << MD[i] << "\n";
	}
}