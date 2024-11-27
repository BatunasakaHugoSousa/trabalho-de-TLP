#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int A[10], B[10], C[20], i;
	cout << ("dá me um conjunto de 10 números\n");
	for (i = 0; i < 10; i++)
	{
		cin >> A[i];
	}
	cout << ("dá me outro conjunto de 10 números\n");
	for (i = 0; i < 10; i++)
	{
		cin >> B[i];
	}
	for (i = 0; i < 10; i++)
	{
		C[i * 2] = A[i];
		C[i * 2 + 1] = B[i];
	}
	cout << "os números são:\n";
	for (i = 0; i < 20; i++)
	{
		cout << C[i] << "\n";
	}
}