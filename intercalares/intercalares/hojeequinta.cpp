#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int A[10], B[10], C[20], i;
	cout << ("d� me um conjunto de 10 n�meros\n");
	for (i = 0; i < 10; i++)
	{
		cin >> A[i];
		C[i] = A[i];
	}
	cout << ("d� me outro conjunto de 10 n�meros\n");
	for (i = 0; i < 10; i++)
	{
		cin >> B[i];
		C[i + 10] = B[i];
	}
	cout << "os n�meros s�o:\n";
	for (i = 0; i < 20; i++)
	{
		cout << C[i] << "\n";
	}
}