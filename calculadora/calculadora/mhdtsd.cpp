#include <iostream> 
#include <locale.h>
#include <string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int N, M;
	char A;
	cout << ("que calculo quer fazer\nsomar,subtrair,multiplicar ou dividir\nescreva +, -, x, /\n");
	cin >> A;
	switch (A) {
	case '+':
		cout << ("somar\nd� me dois n�meros\n");
		cin >> N;
		cin >> M;
		cout << (N + M);
		break;
	case '-':
		cout << ("subtrair\nd� me dois n�meros\n");
		cin >> N;
		cin >> M;
		cout << (N - M);
		break;
	case 'x':
	case 'X':
	case '*':
		cout << ("multiplicar\nd� me dois n�meros\n");
		cin >> N;
		cin >> M;
		cout << (N * M);
		break;
	case '/':
		cout << ("dividir\nd� me dois n�meros\n");
		cin >> N;
		cin >> M;
		cout << (N / M);
		break;
	default:
		cout << ("tem de ser 1 a 4");
		break;
	}
}