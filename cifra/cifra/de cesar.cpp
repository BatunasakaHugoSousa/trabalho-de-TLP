#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "Portuguese");
	int D, i, u, C, Z;
	char A[100], B[26]{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	cout << "qual é o desvio que queres?\n";
	cin >> D;
	cout << "quantas palavras tem a frase?\n";
	cin >> C;
	cout << "que fraze queres descifrar?\n";
	for (i = 0; i < C; i++)
	{
		cin >> A[i];
	}
	for (i = 0; i < C; i++)
	{
		for (u = 0; u < 26; u++)
		{
			if (A[i] == B[u])
			{
				if (u + D > 25)
				{
					A[i] = B[25 - u + D - 1];
				}
				else
				{
					A[i] = B[i + D];
				}
			}
		}
	}
	cout << "a frase é:\n";
	for (i = 0; i < C; i++)
	{
		cout << A[i];
	}
}