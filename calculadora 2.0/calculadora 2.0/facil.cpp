#include <iostream>
#include <locale.h>
using namespace std;
void somar(int N, int M) {
	cout << N + M;
	return;
}
void subtrair(int N, int M) {
	cout << N - M;
	return;
}
void multiplicar(int N, int M) {
	cout << N * M;
	return;
}
void dividir(int N, int M) {
	cout << N / M;
	return;
}
void main() {
	setlocale(LC_ALL, "Portuguese");
	int N, M;
	char A;
	cout << "diz me dois números\n";
	cin >> N >> M;
	cout << ("que calculo quer fazer\nsomar,subtrair,multiplicar ou dividir\nescreva +, -, x, /\n");
	cin >> A;
	switch (A) {
	case '+':
		somar(N, M);
		break;
	case '-':
		subtrair(N, M);
		break;
	case 'x':
	case 'X':
	case '*':
		multiplicar(N, M);
		break;
	case '/':
		dividir(N, M);
		break;
	default:
		cout << "isso não é uma opção!!\n";
		break;
	}
}